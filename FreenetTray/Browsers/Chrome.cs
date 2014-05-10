using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;

namespace FreenetTray.Browsers
{
    class Chrome : Browser
    {
        /*
         * Google Chrome does not maintain a registry entry with a path to its exutable.
         * Usual Google Chrome installation locations:
         * See https://code.google.com/p/selenium/source/browse/java/client/src/org/openqa/selenium/browserlaunchers/locators/GoogleChromeLocator.java#63
         */
        private readonly string[] Locations = {
                                                @"%LOCALAPPDATA%\Google\Chrome\Application",
                                                @"%PROGRAMFILES%\Google\Chrome\Application",
                                                @"%PROGRAMFILES(X86)%\Google\Chrome\Application",
                                              };

        private readonly string Path;
        private readonly bool IsInstalled;

        public Chrome()
        {
            foreach (var location in Locations)
            {
                var PossiblePath = Environment.ExpandEnvironmentVariables(location) + @"\chrome.exe";
                if (File.Exists(PossiblePath))
                {
                    Path = PossiblePath;
                    break;
                }
            }

            IsInstalled = Path != null;
        }

        public bool Open(Uri target)
        {
            if (IsInstalled)
            {
                // See http://peter.sh/experiments/chromium-command-line-switches/
                Process.Start(Path, "--incognito " + target);
                return true;
            }
            return false;
        }
    }
}
