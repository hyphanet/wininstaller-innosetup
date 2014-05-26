using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;

namespace FreenetTray.Browsers
{
    class Opera : Browser
    {
        private readonly string Path;
        private readonly bool IsInstalled;

        public Opera()
        {
            // Key present with Opera 21.
            var PossiblePath = (string)Registry.GetValue(@"HKEY_CURRENT_USER\Software\Opera Software", "Last Stable Install Path", null) + "opera.exe";
            IsInstalled = File.Exists(PossiblePath);
            if (IsInstalled)
            {
                Path = PossiblePath;
            }
        }

        public bool Open(Uri target)
        {
            if (!IsAvailable())
            {
                return false;
            }
                // See http://www.opera.com/docs/switches
                Process.Start(Path, "-newprivatetab " + target);
                return true;
        }

        public bool IsAvailable()
        {
            return IsInstalled;
        }
    }
}
