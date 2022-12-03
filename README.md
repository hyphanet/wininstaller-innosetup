Because this is Windows software it is okay for a file to not have an ending newline.
If you edit such a file please keep it that way.

So that they can be uploaded to Transifex there are two encodings of the
localization files. UTF8 as required by Transifex, and usually-ANSI, as required
by InnoSetup.

To convert between them see
[convert-inno-setup](https://github.com/freenet/scripts/blob/master/convert-inno-setup).

------


## How to build

* Download InnoSetup from http://www.jrsoftware.org/download.php/is-unicode.exe (see http://www.jrsoftware.org/isdl.php)


### On Linux (with wine)

* Install InnoSetup : wine is-unicode.exe /SILENT
* TODO: How to build [wintray](https://github.com/freenet/wintray) on Linux?
* Build the Setup :  wine "C:\Program Files (x86)\Inno Setup 6\ISCC.exe" "FreenetInstall_InnoSetup.iss"
* See Output folder


### On Windows

* Install InnoSetup
* Build [wintray](https://github.com/freenet/wintray) and copy it to install_node\FreenetTray.exe
* Build the Setup : ISCC.exe "FreenetInstall_InnoSetup.iss"
* See Output folder


### On the CI

See .github/workflows/ci.yml

(you can re-trigger a run to get the most recent freenet files into the installer)
