using System;
using System.Diagnostics;
using System.IO;
using Microsoft.Win32;

namespace FreenetTray.Browsers
{
    class Opera : IBrowser
    {
        private readonly string _path;
        private readonly bool _isInstalled;

        public Opera()
        {
            /*
             * TODO: Opera 26 adds launcher.exe and does not support -newprivatetab. Documentation
             * on what it supports in its place, if anything, has not been forthcoming.
             */
            // Key present with Opera 21.
            var possiblePath = (string)Registry.GetValue(@"HKEY_CURRENT_USER\Software\Opera Software", "Last Stable Install Path", null) + "opera.exe";
            _isInstalled = File.Exists(possiblePath);
            if (_isInstalled)
            {
                _path = possiblePath;
            }
        }

        public bool Open(Uri target)
        {
            if (!IsAvailable())
            {
                return false;
            }
                // See http://www.opera.com/docs/switches
                Process.Start(_path, "-newprivatetab " + target);
                return true;
        }

        public bool IsAvailable()
        {
            return _isInstalled;
        }
    }
}
