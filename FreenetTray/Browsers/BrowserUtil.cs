using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace FreenetTray.Browsers
{
    interface Browser
    {
        /*
         * Return true if the URI was opened in privacy mode.
         * Return false otherwise.
         */
        bool Open(Uri target);

        // TODO: bool HasPrivateMode()
    }

    // TODO: Pass in preferences object or file
    class BrowserUtil
    {
        private readonly Browser[] browsers;

        public BrowserUtil()
        {
            browsers = new Browser[] {
                         new Chrome(),
                         new Firefox(),
                         new Opera(),
                         new InternetExplorer(),
                       };
        }

        public void Open(Uri target)
        {
            // For first run setup purposes FProxy should know whether it's opened in private browsing mode.
            Uri PrivateTarget = new Uri(target, "?incognito=true");

            /*
             * Look for the top browsers and start them in privacy mode if they support it. If no browsers
             * with privacy mode are found fall back to a system URL call.
             * 
             * Safari is in the top 5, but the last Windows release of it was v5.17 in 2012. It also doesn't
             * seem to have a command line switch for private browsing.
             * 
             * See https://en.wikipedia.org/wiki/Usage_share_of_web_browsers#Summary_table
             */
            foreach (var browser in browsers)
            {
                if (browser.Open(PrivateTarget))
                {
                    return;
                }
            }

            // System URL call
            Process.Start(target.ToString());
        }
    }
}
