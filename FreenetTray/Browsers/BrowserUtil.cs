using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;

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
    }

    public class BrowserUtil
    {
        private readonly Dictionary<string, IBrowser> _browsers;
        // Autodetect setting string. TODO: Localize?
        public const string Auto = "Auto";

        public BrowserUtil()
        {
            _browsers = new Dictionary<string, IBrowser> {
                         {"Chrome", new Chrome()},
                         {"Firefox", new Firefox()},
                         {"Opera", new Opera()},
                         {"Internet Explorer", new InternetExplorer()},
                       };
        }

        public void Open(Uri target)
        {
            // For first run setup purposes FProxy should know whether it's opened in private browsing mode.
            Uri privateTarget = new Uri(target, "?incognito=true");

            if (Properties.Settings.Default.UseBrowser != Auto)
            {
                if (!_browsers.ContainsKey(Properties.Settings.Default.UseBrowser))
                {
                    // TODO: Malformed settings error message.
                    return;
                }
                if (_browsers[Properties.Settings.Default.UseBrowser].Open(privateTarget))
                {
                    return;
                }
                // TODO: Unable to open error message - also catch failure to execute within Open()?
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
            if (_browsers.Values.Any(browser => browser.Open(privateTarget)))
            {
                return;
            }

            // System URL call
            Process.Start(target.ToString());
        }

        public IEnumerable<string> GetAvailableBrowsers()
        {
            return from element in _browsers where element.Value.IsAvailable() select element.Key;
        }
    }
}
