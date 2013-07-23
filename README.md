Alternative installer for Freenet using [Inno Setup](http://www.jrsoftware.org/isinfo.php) further to [this](https://bugs.freenetproject.org/view.php?id=5456#c9883).

## ⚠ Status: For testing purpose only ! ⚠

### 2013-07-23 | Alpha 3 | [Download](https://bitbucket.org/romnbb/freenet_wininstaller_innosetup/downloads)  
* Freenet files updated with the build 1449

### 2013-07-19 | Alpha 2 | 
* Port availability is handled by a [dll](https://bitbucket.org/romnbb/freenet_wininstaller_innosetup/src/9fc675ccd827/FreenetInstaller_InnoSetup_library?at=master) (only way to do complex operations) ([ref](https://bitbucket.org/romnbb/freenet_wininstaller_innosetup/src/9fc675ccd82779ee22324993884d77ca3c1e6593/FreenetInstaller_InnoSetup_library/FreenetInstaller_InnoSetup_library.lpr?at=master#cl-1))
* Preset of wrapper.java.maxmemory (via the dll too) ([ref](https://bitbucket.org/romnbb/freenet_wininstaller_innosetup/src/9fc675ccd82779ee22324993884d77ca3c1e6593/FreenetInstaller_InnoSetup_library/FreenetInstaller_InnoSetup_library.lpr?at=master#cl-46))
* Correction typo ([ref](https://github.com/freenet/wininstaller-staging/issues/12#issuecomment-21206216))
* Added, more verbose error message if launching of jre-online-installer.exe fails ([ref](https://github.com/freenet/wininstaller-staging/issues/12#issuecomment-21206216))
* Added, additional options : Start Freenet on Windows startup
* Added, text when Java is successfully  installed 
* Modified, use SaveStringsToUTF8File to write freenet.ini instead of SaveStringToFile  
(freenet.ini must be in UTF8 not in ANSI !)

### 2013-07-17 | Draft (Alpha 1)
**limitations:**
  
* Doesn't check port availability ([ref](https://github.com/freenet/wininstaller-staging/blob/master/src/freenetinstaller/FreenetInstaller.ahk#L292))
* Doesn't set wrapper.java.maxmemory ([ref](https://github.com/freenet/wininstaller-staging/blob/master/src/freenetinstaller/FreenetInstaller.ahk#L341))
* No translations of the custom Java page and other custom texts (but can always be manually imported [from current installer translations](https://github.com/freenet/wininstaller-staging/tree/master/src/include_translator))
* *maybe I forget other ?*

