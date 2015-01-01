using Microsoft.Win32;
using System;
using System.Diagnostics;
using System.Linq;

namespace FreenetTray.Browsers
{
    class Firefox : IBrowser
    {
        /*
         * https://developer.mozilla.org/en-US/docs/Adding_Extensions_using_the_Windows_Registry
         * is out of date as of this writing - it uses "Mozilla Firefox" instead of "Firefox".
         * Earlier versions use HKEY_LOCAL_MACHINE but current ones use HKEY_CURRENT_USER.
         */
        readonly string[] _registryKeys = {
                                            @"HKEY_LOCAL_MACHINE\SOFTWARE\Mozilla\Mozilla Firefox",
                                            @"HKEY_CURRENT_USER\SOFTWARE\Mozilla\Mozilla Firefox",
                                          };

        private readonly bool _isInstalled;
        private readonly Version _version;
        private readonly string _path;

        public Firefox()
        {
            _version = GetVersion();
            _path = GetPath();
            _isInstalled = _version != null && _path != null;
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
            Process.Start(_path, "-private-window " + target);
            return true;
        }

        public bool IsAvailable()
        {
            return _isInstalled && _version >= new Version(20, 0);
        }

        // Return null if the version cannot be determined.
        private Version GetVersion()
        {
            var currentVersion = GetCurrentVersion();
            // TODO: Version.TryParse(), added in .NET 4, could make this the only null return.
            if (currentVersion == null)
            {
                return null;
            }

            try
            {
                // CurrentVersion contains "version.number (locale)"
                return new Version(currentVersion.Split(new[] { ' ' }, 2)[0]);
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
            return _registryKeys
                .Select(key => Registry.GetValue(key, "CurrentVersion", null))
                .Where(currentVersion => currentVersion != null)
                .Cast<string>().FirstOrDefault();
        }

        private string GetPath()
        {
            if (_version == null)
            {
                return null;
            }

            return _registryKeys
                .Select(key => Registry.GetValue(key + '\\' + _version + @"\Main", "PathToExe", null))
                .Where(path => path != null)
                .Cast<string>().FirstOrDefault();
        }
    }
}
