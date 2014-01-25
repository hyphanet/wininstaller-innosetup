
;
; Translation file - Danish (da) - by Zero3 (zero3 that-a-thingy zero3 that-dot-thingy dk)
;

LoadLanguage_da()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "Dansk oversættelse af: Christian Funder Sommerlund (Zero3)")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "kunne ikke udpakke nødvendige filer til:")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "Check at dette program har fuld adgang til systemets mappe til midlertidige filer.")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "kræver administratorrettigheder for at administrere Freenet tjenesten. Check at din brugerkonto har administrative privilegier til systemet, og dette program er startet med adgang til at udnytte disse privilegier")

	; Installer - Common
	Trans_Add("Freenet Installer error", "Freenet Installer fejl")
	Trans_Add("Freenet Installer", "Freenet Installer")
	Trans_Add("Welcome to the Freenet Installer!", "Velkommen til Freenet Installer!")
	Trans_Add("Installation Problem", "Installationsproblem")
	Trans_Add("E&xit", "&Afslut")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet understøtter kun følgende versioner af Windows-operativsystemet:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Hvis du vil bruge Freenet er du nødt til at installere en af disse versioner.")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet kræver Java Runtime Environment, men dit system har tilsyneladende ikke en opdateret version installeret. Du kan installere Java ved hjælp af den inkluderede online-installer som automatisk vil downloade og installere filerne fra Javas hjemmeside:")
	Trans_Add("&Install Java", "&Installer Java")
	Trans_Add("The installation will continue once Java version", "Installationen vil fortsætte når Java version")
	Trans_Add("or later has been installed.", "eller nyere er blevet installeret.")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "har registreret at du allerede har Freenet installeret ved hjælp af et ældre, ikke længere understøttet, installationsprogram. For at fortsætte skal du først afinstallere din nuværende version af Freenet med dets originale afinstallationsprogram:")
	Trans_Add("&Uninstall", "A&finstaller")
	Trans_Add("The installation will continue once the old installation has been removed.", "Installationen vil fortsætte når den tidligere installation er blevet fjernet.")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Kontrollér nedenstående standardindstillinger før du fortsætter med installationen af Freenet.")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "Installationsmappe")
	Trans_Add("&Browse", "&Gennemse")
	Trans_Add("De&fault", "&Standard")
	Trans_Add("Freenet requires the installation drive to have at least", "Freenet krævet at installationsdrevet har mindst")
	Trans_Add("MB free disk space. The actual amount of space reserved to Freenet will be configured after the installation.", "MB fri diskplads. Den reelle mængde plads reserveret til Freenet vil blive konfigureret efter installationen.")
	Trans_Add("Status:", "Status:")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Hvis du ikke vælger en mappe der indeholder 'Freenet' i stien vil en mappe automatisk blive oprettet for dig.")
	Trans_Add("Invalid install path!", "Ugyldig installationssti!")
	Trans_Add("(Too long for file system to handle)", "(For lang for filsystemet)")
	Trans_Add("Not enough free space on installation drive!", "Ikke nok fri plads på installationsdrevet!")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet allerede installeret! Afinstaller først eller vælg en anden mappe!")
	Trans_Add("Installation directory OK!", "Installationsmappe OK!")	
	
	; Installer - Main GUI - System service
	Trans_Add("System service", "Systemtjeneste")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenet vil automatisk starte i baggrunden som en systemtjeneste. Denne er nødvendigt for at være en del af Freenet-netværket, og vil bruge en lille andel systemresurser. Mængden af resurser kan justeres efter installationen.")
	
	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "Yderligere indstillinger")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Start Freenet s&ystembakkeikon når du starter Windows")
	Trans_Add("(Recommended)", "(Anbefalet)")
	Trans_Add("Install &start menu shortcuts", "Installer start&menugenveje")
	Trans_Add("(Optional)", "(Valgfrit)")
	Trans_Add("Install &desktop shortcut", "Installer s&krivebordsgenvej")
	Trans_Add("Launch Freenet &after the installation", "Åbn Freenet &efter installationen")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "Version ")
	Trans_Add(" - Build ", " - Build ")
	Trans_Add("&Install", "&Installer")
	
	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "Åbner Freenet Systembakkeikon i systembakken")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Åbner Freenet-proxyen i en webbrowser")
	Trans_Add("Start Freenet", "Start Freenet")
	Trans_Add("Stop Freenet", "Stop Freenet")
	Trans_Add("Installation finished successfully!", "Installationen gennemført med succes!")
	Trans_Add("Freenet Installer by:", "Freenet Installer af:")
	
	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "kunne ikke finde en fri port på dit system i intervallet")
	Trans_Add("Please free a system port in this range to install Freenet.", "For at installere Freenet er du nødt til at frigøre en port i dette interval.")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "kunne ikke oprette en Winsock 2.0 sokkel til undersøgelse af frie porte.")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "kunne ikke skrive til den valgte installationsmappe. Vælg venligst en du har skriveadgang til.")
	Trans_Add("Error: ", "Fejl: ")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "kunne ikke styre Freenet systemtjenesten.")
	Trans_Add("Reason:", "Årsag:")
	Trans_Add("Timeout while managing the service.", "Timeout under administration af tjenesten.")
	Trans_Add("Could not access the service.", "Kunne ikke tilgå tjenesten.")
	Trans_Add("Service did not respond to signal.", "Tjenesten reagerede ikke på signalet.")
	
	; Uninstaller
	Trans_Add("Freenet uninstaller", "Freenet afinstallationsprogram")
	Trans_Add("was unable to recognize your Freenet installation at:", "kunne ikke genkende din Freenet installation under:")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "Kør venligst dette program fra 'bin'-mappen af en Freenet installation.")
	Trans_Add("Do you really want to uninstall Freenet?", "Vil du virkelig afinstallere Freenet?")
	Trans_Add("The development team would appreciate it very much if you can spare a moment and fill out a short, anonymous online survey about the reason for your uninstallation.", "Udviklingsholdet vil sætte stor pris på hvis du vil bruge et par minutter på at udfylde et kort, anonymt online spørgeskema omkring grunden til at du afinstallerer Freenet.")
	Trans_Add("The survey, located on the Freenet website, will be opened in your browser after the uninstallation.", "Spørgeskemaet, der er placeret på Freenets hjemmeside, vil blive åbnet i din browser efter afinstallationen.")
	Trans_Add("Take the uninstallation survey?", "Deltag i spørgeskemaet om afinstallation?")
	Trans_Add("Stopping system service...", "Stopper systemtjeneste...")
	Trans_Add("Shutting down tray managers...", "Lukker systembakkeikoner...")
	Trans_Add("Removing system service...", "Fjerner systemtjeneste...")
	Trans_Add("Removing files...", "Fjerner filer...")
	Trans_Add("Freenet uninstaller error", "Freenet afinstallationsprogram fejl")
	Trans_Add("was unable to delete the Freenet files located at:", "kunne ikke slette Freenet-filer placeret under:")
	Trans_Add("Please close all applications with open files inside this directory.", "Luk venligst alle programmer med åbne filer inden i denne mappe.")
	Trans_Add("The uninstallation was aborted.", "Afinstallationen blev afbrudt.")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "Fjern venligst manuelt resten af din Freenet installation.")
	Trans_Add("Removing registry modifications...", "Fjerner registreringsdatabaseændringer...")
	Trans_Add("Freenet has been uninstalled!", "Freenet er blevet afinstalleret!")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "kunne ikke finde følgende fil:")
	Trans_Add("Make sure that you are running", "Kontrollér at du kører")
	Trans_Add("from a Freenet installation directory.", "fra en Freenet installationsmappe.")
	
	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "Hvis problemet fortsætter, prøv da at geninstallere Freenet eller indrapporter fejlen til udviklerne.")
	
	; Launcher
	Trans_Add("Freenet Launcher", "Freenet starthjælper")
	Trans_Add("Freenet Launcher error", "Freenet starthjælper fejl")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "kunne ikke læse værdien af 'fproxy.port' fra 'freenet.ini' konfigurationsfilen.")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "Kommandolinjeindstillinger (brug kun en):")
	Trans_Add("Hide info messages", "Skjul infobskeder")
	Trans_Add("Hide info and status messages", "Skjul info- og statusbeskeder")
	Trans_Add("Return codes:", "Returkoder:")
	Trans_Add("Success", "Succes")
	Trans_Add("Error occurred", "Fejl opstod")
	Trans_Add("(no action)", "(ingen handling)")
	
	; Service starter
	Trans_Add("(service started)", "(tjeneste startet)")
	Trans_Add("Service was already running", "Tjenest kørte allerede")
	Trans_Add("Freenet Starter", "Freenet Startprogram")
	Trans_Add("The Freenet service is starting...", "Freenet tjenesten starter...")
	Trans_Add("The Freenet service has been started!", "Freenet tjenesten er blevet startet!")
	Trans_Add("The Freenet service is already running!", "Freenet tjenesten kører allerede!")
	Trans_Add("Freenet Starter error", "Freenet Startprogram fejl")
	
	; Service stopper
	Trans_Add("(service stopped)", "(tjeneste stoppet)")
	Trans_Add("Service was not running", "Tjeneste kørte ikke")
	Trans_Add("Freenet Stopper", "Freenet Stopprogram")
	Trans_Add("The Freenet service is stopping...", "Freenet tjenesten stopper...")
	Trans_Add("The Freenet service has been stopped!", "Freenet tjenesten er blevet stoppet!")
	Trans_Add("The Freenet service is already stopped!", "Freenet tjenesten er allerede stoppet!")
	Trans_Add("Freenet Stopper error", "Freenet Stopprogram fejl")

	; Tray manager
	Trans_Add("Freenet Tray", "Freenet Systembakkeikon")
	Trans_Add("Launch Freenet", "Åbn Freenet")
	Trans_Add("Start Freenet service", "Start Freenet tjenesten")
	Trans_Add("Stop Freenet service", "Stop Freenet tjenesten")
	Trans_Add("Manual update check", "Manuelt opdateringscheck")
	Trans_Add("View logfile", "Vis logfil")
	Trans_Add("About", "Om")
	Trans_Add("Exit", "Afslut")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "Du kan åbne, starte og stoppe Freenet sammen med andre nyttige ting fra dette systembakkeikon.")
	Trans_Add("Left-click: Start/Browse Freenet", "Venstreklik: Start/Åbn Freenet")
	Trans_Add("Right-click: Advanced menu", "Højreklik: Avanceret menu")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "Advarsel: Det manuelle opdateringscheck vil opdatere Freenet og dets hjælpeværktøjer via Freenets officielle hjemmeside.")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenet har allerede en sikker, indbygget opdateringsfunktion der automatisk holder Freenet opdateret.")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "Du bør kun bruge dette manuelle opdateringscheck hvis din installation er i stykker eller du har brug for opdaterede versioner af hjælpeværktøjerne.")
	Trans_Add("Freenet Windows Tray Manager", "Freenet Windows Systembakkeikon")
}
