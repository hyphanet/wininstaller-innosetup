﻿Alternative installer for Freenet using [Inno Setup](http://www.jrsoftware.org/isinfo.php) further to [Issue 5456#c9883](https://bugs.freenetproject.org/view.php?id=5456#c9883).  
		
See: 
 
* [Issue 5862](https://bugs.freenetproject.org/view.php?id=5862)  
* [Freenet wininstaller with InnoSetup (PoC)](https://github.com/freenet/wininstaller-staging/issues/12)
  
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


### ⚠ Status: For testing purpose only ! ⚠	

[Download](https://bitbucket.org/romnbb/freenet_wininstaller_innosetup/downloads) 	

### 2014-01-25 | Alpha 6 |	MD5 : 9b7b91bad53b633c5d2a627a642b00bc
* Freenet files updated with Freenet 0.7.5 build 1459  	

### 2013-09-02 | Alpha 5 |  
* Freenet files updated with Freenet 0.7.5 build 1455   

### 2013-08-14 | Alpha 4 |  
* Freenet files updated with Freenet 0.7.5 build 1451

### 2013-07-23 | Alpha 3 |   
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

