using Microsoft.Win32;
using System;
using System.Diagnostics;

namespace FreenetTray.Browsers
{
    class Firefox : Browser
    {
        /*
         * https://developer.mozilla.org/en-US/docs/Adding_Extensions_using_the_Windows_Registry
         * is out of date as of this writing - it uses "Mozilla Firefox" instead of "Firefox".
         * Earlier versions use HKEY_LOCAL_MACHINE but current ones use HKEY_CURRENT_USER.
         */
        readonly string[] FirefoxKeys = {
                                          @"HKEY_LOCAL_MACHINE\SOFTWARE\Mozilla\Mozilla Firefox",
                                          @"HKEY_CURRENT_USER\SOFTWARE\Mozilla\Mozilla Firefox",
                                        };

        private readonly bool isInstalled;
        private readonly Version version;
        private readonly string path;

        public Firefox()
        {
            version = GetVersion();
            path = GetPath();
            isInstalled = version != null;
        }

        public bool Open(Uri target)
        {
            if (!IsAvailable())
            {
                return false;
            }
            /*
             * Firefox 20 and later support -private-window:
             *      "Opens a new private browsing window in an existing instance of Firefox."
             *
             * See https://developer.mozilla.org/en-US/docs/Mozilla/Command_Line_Options?redirectlocale=en-US&redirectslug=Command_Line_Options#-private
             */
            Process.Start(path, "-private-window " + target);
            return true;
        }

        public bool IsAvailable()
        {
            return isInstalled && version >= new Version(20, 0);
        }

        // Return null if the version cannot be determined.
        private Version GetVersion()
        {
            var CurrentVersion = GetCurrentVersion();
            // TODO: Version.TryParse(), added in .NET 4, could make this the only null return.
            if (CurrentVersion == null)
            {
                return null;
            }

            try
            {
                // CurrentVersion contains "version.number (locale)"
                var version = CurrentVersion.Split(new char[] { ' ' }, 2)[0];
                return new Version(version);
            }
            catch (OverflowException)
            {
            }
            catch (FormatException)
            {
            }
            catch (ArgumentOutOfRangeException)
            {
            }

            return null;
        }

        private string GetCurrentVersion()
        {
            // TODO: Pass which one worked to the bin finder?
            foreach (var key in FirefoxKeys)
            {
                var CurrentVersion = Registry.GetValue(key, "CurrentVersion", null);
                if (CurrentVersion != null)
                {
                    return (string)CurrentVersion;
                }
            }

            return null;
        }

        private string GetPath()
        {
            string version = GetCurrentVersion();

            if (version == null)
            {
                return null;
            }

            foreach (var key in FirefoxKeys)
            {
                var Path = Registry.GetValue(key + '\\' + version + @"\Main", "PathToExe", null);
                if (Path != null)
                {
                    return (string)Path;
                }
            }

            return null;
        }
    }
}
