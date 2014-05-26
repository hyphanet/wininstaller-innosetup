using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace FreenetTray.Browsers
{
    class InternetExplorer : Browser
    {
        private readonly Version version;
        private readonly bool IsInstalled;

        public InternetExplorer()
        {
            // See https://support.microsoft.com/kb/969393
            var value = Registry.GetValue(@"HKEY_LOCAL_MACHINE\Software\Microsoft\Internet Explorer", "version", null);
            if (value != null)
            {
                version = new Version((string)value);
            }

            IsInstalled = version != null;
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
            return IsInstalled && version >= new Version(8, 0);
        }
    }
}
