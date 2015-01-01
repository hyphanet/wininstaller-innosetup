using Microsoft.Win32;
using System;
using System.Diagnostics;
using System.Linq;

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
                return new Version(CurrentVersion.Split(new[] { ' ' }, 2)[0]);
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
            return FirefoxKeys
                .Select(key => Registry.GetValue(key, "CurrentVersion", null))
                .Where(CurrentVersion => CurrentVersion != null)
                .Cast<string>().FirstOrDefault();
        }

        private string GetPath()
        {
            string version = GetCurrentVersion();

            if (version == null)
            {
                return null;
            }

            return FirefoxKeys
                .Select(key => Registry.GetValue(key + '\\' + version + @"\Main", "PathToExe", null))
                .Where(Path => Path != null)
                .Cast<string>().FirstOrDefault();
        }
    }
}
