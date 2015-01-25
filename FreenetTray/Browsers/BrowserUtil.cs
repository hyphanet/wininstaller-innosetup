using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using NLog;

namespace FreenetTray.Browsers
{
    interface IBrowser
    {
        /*
         * Return true if the URI was opened in privacy mode.
         * Return false otherwise.
         */
        bool Open(Uri target);

        /*
         * Return true if pages can be opened in privacy mode.
         * Return false otherwise.
         */
        bool IsAvailable();

        string GetName();
    }

    public static class BrowserUtil
    {
        // Autodetect configuration name.
        public const string Auto = "Auto";

        private static readonly IBrowser[] Browsers = {
            new Chrome(),
            new Firefox(),
            new InternetExplorer(),
            new Opera(),
        };

        private static readonly Logger Log = LogManager.GetCurrentClassLogger();

        public static void Open(Uri target)
        {
            // For first run setup purposes FProxy should know whether it's opened in private browsing mode.
            var privateTarget = new Uri(target, "?incognito=true");

            if (Properties.Settings.Default.UseBrowser != Auto)
            {
                var selectedBrowser = (from browser in Browsers
                    where browser.GetName() == Properties.Settings.Default.UseBrowser &&
                          browser.IsAvailable()
                    select browser).FirstOrDefault();

                if (selectedBrowser == null)
                {
                    Log.Warn("Requested browser \"{0}\" is not available.",
                             Properties.Settings.Default.UseBrowser);
                }
                else if (selectedBrowser.Open(privateTarget))
                {
                    Log.Debug("Opened target with {0}.", selectedBrowser.GetName());
                    return;
                }
                else
                {
                    Log.Warn("Failed to open target with {0}.", selectedBrowser.GetName());
                }
            }

            /*
             * Look for the top browsers and start them in privacy mode if they support it. If no browsers
             * with privacy mode are found fall back to a system URL call.
             * 
             * Safari is in the top 5, but the last Windows release of it was v5.17 in 2012. It also doesn't
             * seem to have a command line switch for private browsing.
             * 
             * See https://en.wikipedia.org/wiki/Usage_share_of_web_browsers#Summary_table
             */
            foreach (var browser in Browsers.Where(b => b.IsAvailable()))
            {
                if (!browser.Open(privateTarget))
                {
                    Log.Warn("Auto mode failed to open target with {0}.", browser.GetName());
                    continue;
                }

                Log.Debug("Auto mode opened target with {0}.", browser.GetName());
                return;
            }

            Log.Warn("Falling back to system URL call.");

            // System URL call
            Process.Start(target.ToString());
        }

        public static IEnumerable<string> GetAvailableBrowsers()
        {
            return from element in Browsers where element.IsAvailable() select element.GetName();
        }
    }
}
