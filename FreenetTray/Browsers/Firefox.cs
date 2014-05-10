using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

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
            if (isInstalled)
            {
                /*
                 * Firefox 3.6 and later support -private:
                 *      TODO: Is it worth supporting this far back? Even the ESR is v24.
                 *      "Opens Firefox in permanent private browsing mode." (replacing any existing non-private)
                 * Firefox 20 and later support -private-window:
                 *      "Opens a new private browsing window in an existing instance of Firefox."
                 *
                 * -private-window is preferable if available.
                 *
                 * See https://developer.mozilla.org/en-US/docs/Mozilla/Command_Line_Options?redirectlocale=en-US&redirectslug=Command_Line_Options#-private
                 */
                string argument = null;
                if (version >= new Version(3, 6))
                {
                    argument = "-private";
                    /*
                     * TODO: If also under v20 ask if the user wants their non-private window hidden until
                     * the session ends. IIRC that's what happens.
                     */
                }
                if (version >= new Version(20, 0))
                {
                    argument = "-private-window";
                }
                if (argument != null)
                {
                    Process.Start(path, argument + ' ' + target);
                    return true;
                }
            }

            return false;
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
