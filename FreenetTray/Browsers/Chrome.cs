using System;
using System.Diagnostics;
using System.IO;
using System.Linq;

namespace FreenetTray.Browsers
{
    class Chrome : IBrowser
    {
        /*
         * Google Chrome does not maintain a registry entry with a path to its exutable.
         * Usual Google Chrome installation locations:
         * See https://code.google.com/p/selenium/source/browse/java/client/src/org/openqa/selenium/browserlaunchers/locators/GoogleChromeLocator.java#63
         */
        private readonly string[] _locations = {
                                                 @"%LOCALAPPDATA%\Google\Chrome\Application",
                                                 @"%PROGRAMFILES%\Google\Chrome\Application",
                                                 @"%PROGRAMFILES(X86)%\Google\Chrome\Application",
                                               };

        private readonly string _path;
        private readonly bool _isInstalled;

        public Chrome()
        {
            _path = _locations
                .Select(location => Environment.ExpandEnvironmentVariables(location) + @"\chrome.exe")
                .Where(File.Exists)
                .FirstOrDefault();

            _isInstalled = _path != null;
        }

        public bool Open(Uri target)
        {
            if (!IsAvailable())
            {
                return false;
            }
                // See http://peter.sh/experiments/chromium-command-line-switches/
                Process.Start(_path, "--incognito " + target);
                return true;
        }

        public bool IsAvailable()
        {
            return _isInstalled;
        }
    }
}
