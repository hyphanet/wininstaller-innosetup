Alternative installer for Freenet using [Inno Setup](http://www.jrsoftware.org/isinfo.php) further to [Issue 5456#c9883](https://bugs.freenetproject.org/view.php?id=5456#c9883).

See:

* [Issue 5862](https://bugs.freenetproject.org/view.php?id=5862)
* [Freenet wininstaller with InnoSetup (PoC)](https://github.com/freenet/wininstaller-staging/issues/12)

Because this is Windows software it is okay for a file to not have an ending newline. If you edit
such a file please keep it that way.

--
## How to build
* Download InnoSetup from http://www.jrsoftware.org/download.php/is-unicode.exe (see http://www.jrsoftware.org/isdl.php)
* Download http://ahkscript.org/download/ahk2exe.zip
* Extract ahk2exe.zip into \AutoHotKey_files\tools\ahk\Compiler

### On Linux (with wine)
* Install InnoSetup : wine is-unicode.exe /SILENT
* Build AHK binaries (folder AutoHotKey_files) : wine cmd /c build_AHK_binaries.cmd
* Build the Setup :  wine "C:\Program Files (x86)\Inno Setup 5\ISCC.exe" "FreenetInstall_InnoSetup.iss"
* See Output folder

### On Windows
* Install InnoSetup
* Build AHK binaries (folder AutoHotKey_files) : build_AHK_binaries.cmd
* Build the Setup : ISCC.exe "FreenetInstall_InnoSetup.iss"
* See Output folder