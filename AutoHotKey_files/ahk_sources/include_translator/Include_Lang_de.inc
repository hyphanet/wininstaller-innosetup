
;
; Translation file - German (de) [Sie] - by Thomas Bruderer (apophis / www.apophis.ch)
; updated by sweetie@IRC.freenet, 2011-05-10
;

LoadLanguage_de()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "German (de) [Sie] - by Thomas Bruderer (apophis / www.apophis.ch), updated by sweetie@IRC.freenet, 2011-05-10")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "Konnte die notwendigen Dateien nicht hierhin entpacken:")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "Bitte vergewissern Sie sich, dass dieses Programm vollen Zugriff auf das Temporäre-Dateien-Verzeichnis des Systems hat.")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "Benötigt Administrator-Rechte, um den Freenet-Dienst zu verwalten. Bitte vergewissern Sie sich, dass Sie als aktueller Benutzer administrativ auf das System zugreifen können und dass dieses Programm mit Zugriff auf diese Rechte gestartet wird.")

	; Installer - Common
	Trans_Add("Freenet Installer error", "Fehler des Freenet-Installers")
	Trans_Add("Freenet Installer", "Freenet-Installer")
	Trans_Add("Welcome to the Freenet Installer!", "Willkommen zum Freenet-Installer!")
	Trans_Add("Installation Problem", "Installationsproblem")
	Trans_Add("E&xit", "&Beenden")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Frenet unterstützt nur die folgenden Versionen des Windows-Betriebssystems:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Bitte installieren Sie eine dieser Windowsversionen, wenn Sie Freenet nutzen möchten.")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet braucht die Java-Laufzeit-Umgebung, Ihr System scheint keine aktuelle Version installiert zu haben. Sie können Java mit dem enthaltenen Online-Installer installieren, der die nötigen Dateien automatisch von der Java-Webseite holt:")
	Trans_Add("&Install Java", "&Java installieren")
	Trans_Add("The installation will continue once Java version", "Die Installation wird fortgesetzt, sobald die Java-Version")
	Trans_Add("or later has been installed.", "oder eine neuere Version installiert wurde.")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "Es wurde eine bereits vorhandene Freenet-Installation entdeckt. Diese verwendet einen älteren, nicht mehr unterstützten Installer. Um fortzufahren, muß die alte Freenet-Installation zunächst mit dem alten Deinstaller deinstalliert werden.")
	Trans_Add("&Uninstall", "&Deinstallieren")
	Trans_Add("The installation will continue once the old installation has been removed.", "Die Installation wird fortgeführt, sobald die alte Installation entfernt wurde.")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Bitte überprüfen Sie die folgenden Standard-Einstellungen, bevor Sie mit der Installation fortfahren.")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "Installationsverzeichnis")
	Trans_Add("&Browse", "Bro&wsen")
	Trans_Add("De&fault", "&Vorgabewert")
	Trans_Add("Freenet requires", "Freenet benötigt")
	Trans_Add("MB free disk space on the installation drive. The actual amount of space reserved to Freenet will be configured after the installation.", "MB freien Speicherplatz auf der Installations-Festplatte. Die Größe des Festplattenspeichers, der für Freenet reserviert werden soll, wird erst nach der Installation festgelegt.")
	Trans_Add("Status:", "Status:")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Wenn Sie einen Pfad wählen, der nicht 'Freenet' enthält, dann wird ein ensprechendes Verzeichnis automatisch erstellt.")
	Trans_Add("Invalid install path!", "Ungültiger Installationspfad!")
	Trans_Add("(Too long for file system to handle)", "(Für das Filesystem ist der Pfad zu lang)")
	Trans_Add("Not enough free space on installation drive!", "Zu wenig Speicherplatz auf dem Installationslaufwerk!")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet wurde bereits installiert! Bitte erst deinstallieren oder wählen Sie ein anderes Verzeichnis.")
	Trans_Add("Installation directory OK!", "Installationsverzeichnis OK.")

	; Installer - Main GUI - System service
	Trans_Add("System service", "Systemdienst")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenet wird automatisch im Hintergrund als Systemdienst gestartet. Dies ist nötig, um ein Teil des Freenet-Netzes zu werden und wird nur einen kleinen Teil der System-Resourcen beanspruchen. Der Anteil der genutzten Resourcen kann nach der Installation angepasst werden.")

	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "Zusätzliche Einstellungen")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Starte den Freenet-&Traymanager beim booten von Windows")
	Trans_Add("(Recommended)", "(Empfohlen)")
	Trans_Add("Install &start menu shortcuts", "Eintrag im Start-Menü &installieren")
	Trans_Add("(Optional)", "(Optional)")
	Trans_Add("Install &desktop shortcut", "Eintrag auf dem &Desktop installieren")
	Trans_Add("Launch Freenet &after the installation", "Freenet &nach der Installation automatisch starten")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "Version ")
	Trans_Add(" - Build ", " - Build ")
	Trans_Add("&Install", "&Installieren")

	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "Öffnet den Freenet-Traymanager im Benachrichtigungsfenster")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Öffnet die Freenetproxy-Homepage in einem Internetbrowser")
	Trans_Add("Start Freenet", "Freenet starten")
	Trans_Add("Stop Freenet", "Freenet anhalten")
	Trans_Add("Installation finished successfully!", "Installation erfolgreich beendet!")
	Trans_Add("Freenet Installer by:", "Freenet-Installer von:")

	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "Konnte keinen freien Port in ihrem System finden im Bereich von ")
	Trans_Add("Please free a system port in this range to install Freenet.", "Um Freenet zu installieren, öffnen Sie bitte einen Port in diesem Bereich.")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "Konnte keinen Winsock 2.0 socket erstellen, um die Port-Verfügbarkeit zu testen.")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "Konnte nicht in das ausgewählte Installations-Verzeichnis schreiben. Bitte wählen Sie ein Verzeichnis aus, für das Sie Schreibrechte haben.")
	Trans_Add("Error: ", "Fehler: ")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "Konnte den Freenet-Systemdienst nicht kontrollieren.")
	Trans_Add("Reason:", "Grund:")
	Trans_Add("Timeout while managing the service.", "Zeitüberschreitung beim verwalten des Dienstes.")
	Trans_Add("Could not access the service.", "Konnte nicht auf den Dienst zugreifen.")
	Trans_Add("Service did not respond to signal.", "Der Dienst reagiert nicht auf das Signal.")

	; Uninstaller
	Trans_Add("Freenet uninstaller", "Freenet deinstallieren")
	Trans_Add("was unable to recognize your Freenet installation at:", "Konnte ihre Freenet-Installation nicht hier finden:")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "Bitte starten Sie dieses Programm von dem 'bin'-Verzeichnis Ihrer Freenet-Installation aus.")
	Trans_Add("Do you really want to uninstall Freenet?", "Wollen Sie Freenet wirklich deinstallieren?")
	Trans_Add("The development team would appreciate it very much if you can spare a moment and fill out a short, anonymous online survey about the reason for your uninstallation.", "Das Entwickler-Team würde es sehr begrüßen, wenn Sie sich ein wenig Zeit nehmen würden und eine kurze, anonyme Online-Meinungsumfrage ausfüllen würden, warum Sie Freenet deinstalliert haben")
	Trans_Add("The survey, located on the Freenet website, will be opened in your browser after the uninstallation.", "Die Umfrage auf der Freenet-Webseite wird nach der Deinstallation in Ihrem Webbrowser geöffnet.")
	Trans_Add("Take the uninstallation survey?", "Die Deinstallations-Umfrage beantworten?")
	Trans_Add("Stopping system service...", "Systemdienst stoppen...")
	Trans_Add("Shutting down tray managers...", "Tray-Manager schließen...")
	Trans_Add("Removing system service...", "Systemdienst entfernen...")
	Trans_Add("Removing files...", "Dateien entfernen...")
	Trans_Add("Freenet uninstaller error", "Fehler beim deinstallieren von Freenet")
	Trans_Add("was unable to delete the Freenet files located at:", "Konnte die Freenet-Dateien nicht von hier entfernen:")
	Trans_Add("Please close all applications with open files inside this directory.", "Bitte schliessen Sie alle Anwendungen mit offenen Dateien innerhalb des genannten Verzeichnisses.")
	Trans_Add("The uninstallation was aborted.", "Die Deinstallation wurde abgebrochen.")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "Bitte entfernen Sie den Rest Ihrer Freenet-Installation manuell.")
	Trans_Add("Removing registry modifications...", "Einträge aus der Registry entfernen...")
	Trans_Add("Freenet has been uninstalled!", "Freenet wurde deinstalliert!")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "Konnte diese Datei nicht finden:")
	Trans_Add("Make sure that you are running", "Vergewissern Sie sich, dass es vom")
	Trans_Add("from a Freenet installation directory.", "Freenet-Installations-Verzeichnis aus gestartet wurde.")

	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "Falls dieser Fehler weiterhin auftaucht, versuchen Sie Freenet neu zu installieren oder melden Sie bitte diesen Fehler den Entwicklern.")

	; Launcher
	Trans_Add("Freenet Launcher", "Freenet-Starter")
	Trans_Add("Freenet Launcher error", "Freenet-Starter Fehler")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "Konnte den Wert von 'fproxy.port' aus der Konfigurationsdatei 'freenet.ini' nicht lesen")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "Kommandozeilen-Optionen (nur eine benutzen):")
	Trans_Add("Hide info messages", "Informations-Nachrichten verstecken")
	Trans_Add("Hide info and status messages", "Informations- und Status-Nachrichten verstecken")
	Trans_Add("Return codes:", "Rückgabe-Codes:")
	Trans_Add("Success", "Erfolg")
	Trans_Add("Error occurred", "Fehler aufgetreten")
	Trans_Add("(no action)", "(nichts zu tun)")

	; Service starter
	Trans_Add("(service started)", "(Dienst gestarted)")
	Trans_Add("Service was already running", "Dienst lief bereits")
	Trans_Add("Freenet Starter", "Freenet-Starter")
	Trans_Add("The Freenet service is starting...", "Der Freenet-Dienst startet gerade...")
	Trans_Add("The Freenet service has been started!", "Der Freenet-Dienst wurde gestartet")
	Trans_Add("The Freenet service is already running!", "Der Freenet-Dienst ist bereits am laufen!")
	Trans_Add("Freenet Starter error", "Freenet-Starter Fehler")

	; Service stopper
	Trans_Add("(service stopped)", "(Dienst gestoppt)")
	Trans_Add("Service was not running", "Dienst lief nicht")
	Trans_Add("Freenet Stopper", "Freenet-Stopper")
	Trans_Add("The Freenet service is stopping...", "Der Freenet-Dienst wird gestoppt...")
	Trans_Add("The Freenet service has been stopped!", "Der Freenet-Dienst wurde gestoppt!")
	Trans_Add("The Freenet service is already stopped!", "Der Freenet-Dienst wurde bereits gestoppt!")
	Trans_Add("Freenet Stopper error", "Freenet-Stopper Fehler")

	; Tray manager
	Trans_Add("Freenet Tray", "Freenet-Tray")
	Trans_Add("Launch Freenet", "Freenet-Start")
	Trans_Add("Start Freenet service", "Starte Freenet-Dienst")
	Trans_Add("Stop Freenet service", "Stoppe Freenet-Dienst")
	Trans_Add("Manual update check", "Manuell nach Updates suchen")
	Trans_Add("View logfile", "Logfile ansehen")
	Trans_Add("About", "Über")
	Trans_Add("Exit", "Beenden")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "Sie können von diesem Tray-Icon Freenet browsen, starten, stoppen und andere nützliche Dinge machen.")
	Trans_Add("Doubleclick: Start/Browse Freenet", "Doppelklick: Start/Browse Freenet")
	Trans_Add("Right-click: Advanced menu", "Rechtsklick: Erweitertes Menü")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "WARNUNG: Diese manuelle Update-Suche wird Freenet und seine Helfer-Programme von der offiziellen Freenet-Webseite beziehen!")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenet hat bereits eine eingebaute sichere Updatefunktion, die automatisch Freenet auf dem neuesten Stand hält!")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "Sie sollten diese manuelle Updatesuche nur benutzen, wenn Ihre Installation defekt ist oder Sie neuere Versionen der Helfer-Programme benötigen!")
	Trans_Add("Freenet Windows Tray Manager", "Freenet Windows-Traymanager")
}
