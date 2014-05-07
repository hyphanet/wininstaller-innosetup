@echo off
:: 2014-01-10 ; UPDATE => File modified. With the new InnoSetup Freenet Installer, we only need to build FreenetLauncher.exe and Freenet.exe  
::
:: This script will build some Freenet binaries for the Windows platform.
::
:: To build from a Windows command prompt: "build_AHK_binaries.cmd"
:: To build from a linux terminal: "wine cmd /c build_AHK_binaries.cmd"
::
:: The following files are not packed and need to be manually added before compiling:
:: 1° - Download AutoHotkey104805.zip  from http://ahkscript.org/download/1.0/
:: 2° - Extract and copy the content of the folder "Compiler" into \tools\ahk\Compiler

:: If running under Wine, you should install the relevant wine-gecko MSI file where wine expects to find it.

::
:: Cleanup and prepare
::
echo +++++
echo + Preparing bin folder...

if exist bin rmdir /S /Q bin

echo + (Ignore any "not found" errors above this line (WINE bug at time of writing))

mkdir bin
cd bin

::
:: Copy various files to our bin folder
::
echo + Copying files into bin folder...

copy ..\tools\ahk\Compiler\Ahk2Exe.exe Ahk2Exe.exe
copy ..\tools\ahk\Compiler\AutoHotkeySC.bin AutoHotkeySC.bin

copy ..\tools\reshacker\ResHacker.exe ResHacker.exe
copy ..\tools\reshacker\ResHack_Resource_Icon_Freenet.ico ResHack_Resource_Icon_Freenet.ico
copy ..\tools\reshacker\ResHack_Resource_Manifest.txt ResHack_Resource_Manifest.txt
copy ..\tools\reshacker\ResHack_Script_Normal.txt ResHack_Script_Normal.txt

::
:: Patch AHK library
::
echo + Patching AHK library...

ResHacker.exe -script ResHack_Script_Normal.txt

del AutoHotkeySC.bin
move /Y AutoHotkeySC_Normal.bin AutoHotkeySC.bin

::
:: Compile non-elevated executables
::
echo + Compiling executables...
echo +++++

Ahk2Exe.exe /in "..\ahk_sources\freenetlauncher\FreenetLauncher.ahk" /out "..\..\install_node\FreenetLauncher.exe"
echo Compiled freenetlauncher.exe
Ahk2Exe.exe /in "..\ahk_sources\freenettray\FreenetTray.ahk" /out "..\..\install_node\Freenet.exe"
echo Compiled freenet.exe

::
:: Cleanup and delete files
::
echo +++++
echo + Cleaning up...
del Ahk2Exe.exe
del AutoHotkeySC.bin
del ResHacker.exe
del ResHacker.ini
del ResHack_Log_Normal.txt
del ResHack_Resource_Icon_Freenet.ico
del ResHack_Resource_Manifest.txt
del ResHack_Script_Normal.txt


echo +++++
echo + All done! Hopefully no errors above...
echo +++++

cd ..
