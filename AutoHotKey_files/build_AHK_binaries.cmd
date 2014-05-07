@echo off
::
:: This script will build some Freenet binaries for the Windows platform.
::
:: To build from a Windows command prompt: "build_AHK_binaries.cmd"
:: To build from a linux terminal: "wine cmd /c build_AHK_binaries.cmd"
::
:: The following files are not packed and need to be manually added before compiling:
::
:: From http://ahkscript.org/download/ahk2exe.zip
:: - tools\ahk\Compiler\Ahk2Exe.exe
:: - tools\ahk\Compiler\Unicode 32-bit.bin
::
:: If running under Wine, you should install the relevant wine-gecko MSI file
:: where wine expects to find it, or use export WINEDLLOVERRIDES="mshtml="
:: similar to the wininstaller release script.

::
:: Cleanup and prepare
::
echo +++++
echo + Preparing bin folder...

if exist bin rmdir /S /Q bin

mkdir bin
cd bin

::
:: Copy various files to our bin folder
::
echo + Copying files into bin folder...

copy ..\tools\ahk\Compiler\Ahk2Exe.exe Ahk2Exe.exe
copy "..\tools\ahk\Compiler\Unicode 32-bit.bin" "Unicode 32-bit.bin"

::
:: Compile non-elevated executables
::
echo + Compiling executables...
echo +++++

Ahk2Exe.exe /in "..\ahk_sources\freenetlauncher\FreenetLauncher.ahk" /out "..\..\install_node\freenetlauncher.exe" /bin "Unicode 32-bit.bin" /icon "..\..\install_node\freenet.ico"
echo Compiled freenetlauncher.exe
Ahk2Exe.exe /in "..\ahk_sources\freenettray\FreenetTray.ahk" /out "..\..\install_node\freenet.exe" /bin "Unicode 32-bit.bin" /icon "..\..\install_node\freenet.ico"
echo Compiled freenet.exe

::
:: Cleanup and delete files
::
echo +++++
echo + Cleaning up...
del Ahk2Exe.exe
del "Unicode 32-bit.bin"

echo +++++
echo + All done! Hopefully no errors above...
echo +++++
