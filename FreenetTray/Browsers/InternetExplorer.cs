using System;
using System.Diagnostics;
using Microsoft.Win32;

namespace FreenetTray.Browsers
{
    class InternetExplorer : IBrowser
    {
        private readonly Version _version;
        private readonly bool _isInstalled;

        public InternetExplorer()
        {
            // See https://support.microsoft.com/kb/969393
            var value = Registry.GetValue(@"HKEY_LOCAL_MACHINE\Software\Microsoft\Internet Explorer", "version", null);
            if (value != null)
            {
                _version = new Version((string)value);
            }

            _isInstalled = _version != null;
        }

        public bool Open(Uri target)
        {
            if (!IsAvailable())
            {
                return false;
            }
                // See http://msdn.microsoft.com/en-us/library/ie/hh826025%28v=vs.85%29.aspx
                Process.Start("iexplore.exe", "-private " + target);
                return true;
        }

        public bool IsAvailable()
        {
            // See https://en.wikipedia.org/wiki/Internet_Explorer_8#InPrivate
            return _isInstalled && _version >= new Version(8, 0);
        }
    }
}
