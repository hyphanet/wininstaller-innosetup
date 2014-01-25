
;
; Freenet Windows Installer translation template
;
; Quick guide to translating:
; 1.	Save this file as "Include_Lang_xx.inc" (xx being a standard 2-letter lowercase language code, e.g. "en" for English or "da" for Danish)
; 2.	Remove this explanation and add a header with credit to yourself (name, e-mail, websites, etc.) in the header. Look at the other translations to get an idea.
; 3.	Replace "xx" in "LoadLanguage_xx()" below with the same language code.
; 4.	Translate! Format is: Trans_Add("<original text>", "<translated text>").
;	The installer will fall back to English for empty and non-existing string translations, so feel free to translate in small bits.
;	Hotkey letters are prefixed with "&". Feel free to change the hotkey to another letter in your translation - but make sure not to overlap with other hotkeys.
; 5.	If possible, please let another person proof-read your translation.
;	A lot of people are going to read it, and Freenet's creditability is directly affected of the quality of these translations :).
; 6.	Submit your translation to git@github.com:freenet/wininstaller-staging.git or the developer mailing list (devl@freenetproject.org)
; 	Please make sure that either yourself or another developer tests the translation for obvious layout glitches and other bugs
;	(simply launching the installer and verifying that the main GUI looks OK should be enough most of the time)
; 	On the first submission, a developer needs to add the translation to Include_TranslationHelper.ahk in order for the translation to actually be loaded.
; 7.	To keep your translation updated, all you need to do is to download your translation from git (e.g. from http://github.com/freenet/wininstaller-staging/)
;	and check for non-translated strings that has been added since your last submission.
;
; General note about translating the installer:
; Because of the compact, customized GUI design, much of the text are subject to min/max size limitations. A too short translation will leave holes in the GUI and
; a too long will mess up the layout. So try to keep the translations at the approx. same length as the original English text. The easiest way to test the
; translation is to compile the installer and take a look around. The installer compiles and runs under WINE on Linux, but because of WINE bugs the layout will *not*
; be completely equal to running under a real Windows installation.
;
; If you have any questions, please feel free to ask at the developer mailing list (devl@freenetproject.org)!
;

LoadLanguage_xx()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "")

	; Installer - Common
	Trans_Add("Freenet Installer error", "")
	Trans_Add("Freenet Installer", "")
	Trans_Add("Welcome to the Freenet Installer!", "")
	Trans_Add("Installation Problem", "")
	Trans_Add("E&xit", "")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "")
	Trans_Add("&Install Java", "")
	Trans_Add("The installation will continue once Java version", "")
	Trans_Add("or later has been installed.", "")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "")
	Trans_Add("&Uninstall", "")
	Trans_Add("The installation will continue once the old installation has been removed.", "")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "")
	Trans_Add("&Browse", "")
	Trans_Add("De&fault", "")
	Trans_Add("Freenet requires the installation drive to have at least", "")
	Trans_Add("MB free disk space. The actual amount of space reserved to Freenet will be configured after the installation.", "")
	Trans_Add("Status:", "")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "")
	Trans_Add("Invalid install path!", "")
	Trans_Add("(Too long for file system to handle)", "")
	Trans_Add("Not enough free space on installation drive!", "")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "")
	Trans_Add("Installation directory OK!", "")	
	
	; Installer - Main GUI - System service
	Trans_Add("System service", "")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "")
	
	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "")
	Trans_Add("Start Freenet on Windows startup")
	Trans_Add("(Recommended)", "")
	Trans_Add("Install &start menu shortcuts", "")
	Trans_Add("(Optional)", "")
	Trans_Add("Install &desktop shortcut", "")
	Trans_Add("Launch Freenet &after the installation", "")
	
	; Running Freenet box
	Trans_Add("Running Freenet", "")
	Trans_Add("When running, Freenet will use a moderate amount of system resources in order to take part in the Freenet peer-to-peer network. This amount can be adjusted after the installation.", "")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "")
	Trans_Add(" - Build ", "")
	Trans_Add("&Install", "")
	
	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "")
	Trans_Add("Start Freenet", "")
	Trans_Add("Stop Freenet", "")
	Trans_Add("Installation finished successfully!", "")
	Trans_Add("Freenet Installer by:", "")
	
	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "")
	Trans_Add("Please free a system port in this range to install Freenet.", "")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "")
	Trans_Add("Error: ", "")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "")
	Trans_Add("Reason:", "")
	Trans_Add("Timeout while managing the service.", "")
	Trans_Add("Could not access the service.", "")
	Trans_Add("Service did not respond to signal.", "")
	
	; Uninstaller
	Trans_Add("Freenet uninstaller", "")
	Trans_Add("was unable to recognize your Freenet installation at:", "")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "")
	Trans_Add("Do you really want to uninstall Freenet?", "")
	Trans_Add("Stopping system service...", "")
	Trans_Add("Shutting down tray managers...", "")
	Trans_Add("Removing system service...", "")
	Trans_Add("Removing files...", "")
	Trans_Add("Freenet uninstaller error", "")
	Trans_Add("was unable to delete the Freenet files located at:", "")
	Trans_Add("Please close all applications with open files inside this directory.", "")
	Trans_Add("The uninstallation was aborted.", "")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "")
	Trans_Add("Removing registry modifications...", "")
	Trans_Add("Freenet has been uninstalled!", "")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "")
	Trans_Add("Make sure that you are running", "")
	Trans_Add("from a Freenet installation directory.", "")
	
	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "")
	
	; Launcher
	Trans_Add("Freenet Launcher", "")
	Trans_Add("Freenet Launcher error", "")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "")
	Trans_Add("Hide info messages", "")
	Trans_Add("Hide info and status messages", "")
	Trans_Add("Return codes:", "")
	Trans_Add("Success", "")
	Trans_Add("Error occurred", "")
	Trans_Add("(no action)", "")
	
	; Service starter
	Trans_Add("(service started)", "")
	Trans_Add("Service was already running", "")
	Trans_Add("Freenet Starter", "")
	Trans_Add("The Freenet service is starting...", "")
	Trans_Add("The Freenet service has been started!", "")
	Trans_Add("The Freenet service is already running!", "")
	Trans_Add("Freenet Starter error", "")
	
	; Service stopper
	Trans_Add("(service stopped)", "")
	Trans_Add("Service was not running", "")
	Trans_Add("Freenet Stopper", "")
	Trans_Add("The Freenet service is stopping...", "")
	Trans_Add("The Freenet service has been stopped!", "")
	Trans_Add("The Freenet service is already stopped!", "")
	Trans_Add("Freenet Stopper error", "")

	; Tray manager
	Trans_Add("Freenet Tray", "")
	Trans_Add("Launch Freenet", "")
	Trans_Add("Start Freenet service", "")
	Trans_Add("Stop Freenet service", "")
	Trans_Add("Manual update check", "")
	Trans_Add("View logfile", "")
	Trans_Add("About", "")
	Trans_Add("Exit", "")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "")
	Trans_Add("Left-click: Start/Browse Freenet", "")
	Trans_Add("Right-click: Advanced menu", "")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "")
	Trans_Add("Freenet Windows Tray Manager", "")
}
