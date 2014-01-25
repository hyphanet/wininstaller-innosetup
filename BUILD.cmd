:: BUILD InnoSetup Freenet Installer
:: Don't forget to build AHK exe files (see .\AutoHotKey_files\build_AHK_binaries.cmd)

set ISCC_PATH="YOUR_ISCC.exe_PATH"
"%ISCC_PATH%" ".\FreenetInstall_InnoSetup.iss"
Pause