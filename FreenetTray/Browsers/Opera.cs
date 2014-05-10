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
            var PossiblePath = (string)Registry.GetValue(@"HKEY_CURRENT_USER\Software\Opera Software", "Last CommandLine v2", null);
            IsInstalled = File.Exists(PossiblePath);
            if (IsInstalled)
            {
                Path = PossiblePath;
            }
        }

        public bool Open(Uri target)
        {
            if (IsInstalled)
            {
                // See http://www.opera.com/docs/switches
                Process.Start(Path, "-newprivatetab " + target);
                return true;
            }
            return false;
        }
    }
}
