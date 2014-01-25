
;
; Translation file - Dutch (nl) - by Thomas Markus
;
 
LoadLanguage_nl()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "Dutch localization by: Thomas Markus")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "is er niet in geslaagd om de bestanden uit te pakken in naar de map:")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "Controleer of dit programma toegang heeft tot de tijdelijke mappen van het systeem.")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "vereist beheerdersrechten om de Freenet service te beheren. Controleer of deze gebruikersaccount de benodigde rechten heeft en of dit programma wel met deze rechten is gestart.")

	; Installer - Common
	Trans_Add("Freenet Installer error", "Freenet-installatieprogrammafout")
	Trans_Add("Freenet Installer", "Freenet-installatieprogramma")
	Trans_Add("Welcome to the Freenet Installer!", "Welkom bij het Freenet installatieprogramma")
	Trans_Add("Installation Problem", "Installatieprobleem")
	Trans_Add("E&xit", "&Stoppen")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet ondersteunt de volgende versies van het Windows besturingssysteem:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Installeer een van de volgende Windows versies als u gebruik wilt maken van Freenet.")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet heeft een zogenaamde Java Runtime Environment (JRE) nodig, maar het lijkt erop dat dit systeem niet over een actuele versie beschikt. Java kan geïnstalleerd worden met behulp van het meegeleverde installatieprogramma wat Java automatisch voor je binnenhaalt en installeert.")
	Trans_Add("&Install Java", "&Java installeren")
	Trans_Add("The installation will continue once Java version", "De installatie zal doorgaan zodra Java versie")
	Trans_Add("or later has been installed.", "of nieuwer is geïnstalleerd.")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "heeft gedetecteerd dat Freenet al is geïnstalleerd. De huidige installatie is uitgevoerd met een verouderd installatieprogramma wat helaas niet meer ondersteund wordt. Om deze versie van Freenet alsnog te kunnen installeren moet eerst de bestaande installatie ongedaan worden gemaakt met behulp van het verouderde installatieprogramma.")
	Trans_Add("&Uninstall", "&Deïnstalleren")
	Trans_Add("The installation will continue once the old installation has been removed.", "De installatie zal doorgaan zodra de oude installatie is verwijderd.")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Controleer de volgende standaardinstellingen voordat je verder gaat met de installatie van Freenet.")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "Installatielocatie")
	Trans_Add("&Browse", "&Bladeren")
	Trans_Add("De&fault", "&Standaard")
	Trans_Add("Freenet requires", "Freenet vereist")
	Trans_Add("MB free disk space on the installation drive. The actual amount of space reserved to Freenet will be configured after the installation.", "MB vrije schijfruimte op de betreffende harde schijf. De totaal benodigde ruimte zal worden bepaald na afloop van deze installatie.")
	Trans_Add("Status:", "Status :")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Als je een map kiest waarbij Freenet zich niet in het pad bevind zal automatisch een nieuwe map worden aangemaakt.")
	Trans_Add("Invalid install path!", "Ongeldige installatielocatie!")
	Trans_Add("(Too long for file system to handle)", "(De bestandsnaam of map is te lang voor het bestandssysteem)")
	Trans_Add("Not enough free space on installation drive!", "Te weinig vrije ruimte op de installatiehardeschijf!")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet is al geïnstalleerd. Verwijder eerst de bestaande installatie of kies voor een andere map.")
	Trans_Add("Installation directory OK!", "De installatielocatie is in orde.")	
	
	; Installer - Main GUI - System service
	Trans_Add("System service", "Systeem service")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenet zal automatisch als achtergrondproces starten. Dit is belangrijk voor het correct functioneren van het Freenet netwerk als geheel. Dit vergt echter een bepaalde hoeveelheid systeembronnen, welke kan worden aangepast na afloop van de installatie.")
	
	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "Extra instellingen")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Start het Freenet systeemvakhulpmiddel automatisch bij het opstarten.")
	Trans_Add("(Recommended)", "(Aanbevolen)")
	Trans_Add("Install &start menu shortcuts", "Installeer &snelkoppelingen in het start menu")
	Trans_Add("(Optional)", "(Optioneel)")
	Trans_Add("Install &desktop shortcut", "Installeer een snelkoppeling op het &bureaublad")
	Trans_Add("Launch Freenet &after the installation", "Start Freenet zodra de installatie voltooid is")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "Versie ")
	Trans_Add(" - Build ", " - Build ")
	Trans_Add("&Install", "&Installeren")
	
	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "Opent het systeemvakhulpmiddel")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Opent de Freenet proxy startpagina in een webbrowser")
	Trans_Add("Start Freenet", "Freenet starten")
	Trans_Add("Stop Freenet", "Freenet stoppen")
	Trans_Add("Installation finished successfully!", "Installatie is succesvol voltooid!")
	Trans_Add("Freenet Installer by:", "Freenet Installer door:")
	
	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "is er niet in geslaagd om een vrije poort te vinden in het bereik:")
	Trans_Add("Please free a system port in this range to install Freenet.", "Om Freenet te installeren moet een poort worden vrijgemaakt in dit bereik.")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "is er niet in geslaagd om een Winsock 2.0 poort aan te maken om de beschikbaarheid van de poort te controleren")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "was niet in staat om te schrijven naar de installatiemap. Geef een installatielocatie op waar naar geschreven mag worden.")
	Trans_Add("Error: ", "Fout: ")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "was niet in staat om de Freenet systeem service te beheren.")
	Trans_Add("Reason:", "Reden:")
	Trans_Add("Timeout while managing the service.", "De service heeft niet op tijd gereageerd.")
	Trans_Add("Could not access the service.", "Kon geen toegang verkrijgen tot de service.")
	Trans_Add("Service did not respond to signal.", "Service reageerde niet op het signaal")
	
	; Uninstaller
	Trans_Add("Freenet uninstaller", "Freenet Deïnstalleren")
	Trans_Add("was unable to recognize your Freenet installation at:", "was niet om staat om deze Freenet installatielocatie te herkennen:")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "Dit programma moet gestart worden vanuit de 'bin' map van de Freenet installatielocatie.")
	Trans_Add("Do you really want to uninstall Freenet?", "Weet je zeker dat je Freenet wil deïnstalleren?")
	Trans_Add("The development team would appreciate it very much if you can spare a moment and fill out a short, anonymous online survey about the reason for your uninstallation.", "Het ontwikkelingsteam zou het zeer op prijs stellen als je de tijd neemt om, geheel anoniem, een korte vragenlijst kan invullen over de reden van het verwijderen van Freenet.")
	Trans_Add("The survey, located on the Freenet website, will be opened in your browser after the uninstallation.", "De vragenlijst zal worden geopend in je webbrowser na afloop van de installatie?")
	Trans_Add("Take the uninstallation survey?", "Wil je de vragenlijst invullen?")
	Trans_Add("Stopping system service...", "Systeem service stoppen...")
	Trans_Add("Shutting down tray managers...", "Tray managers stopzetten")
	Trans_Add("Removing system service...", "De systeem service wordt verwijderd...")
	Trans_Add("Removing files...", "Bestanden verwijderen...")
	Trans_Add("Freenet uninstaller error", "Er is een fout opgetreden bij het verwijderen van Freenet")
	Trans_Add("was unable to delete the Freenet files located at:", "was niet in staat om de Freenet bestanden op deze locatie te verwijderen:")
	Trans_Add("Please close all applications with open files inside this directory.", "Sluit alle programma's die bestanden geopend hebben in deze map.")
	Trans_Add("The uninstallation was aborted.", "De deïnstallatie is afgebroken.")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "Verwijder het overgebleven deel van de Freenet installatie handmatig.")
	Trans_Add("Removing registry modifications...", "Registeringangen worden verwijderd...")
	Trans_Add("Freenet has been uninstalled!", "Freenet is nu verwijderd!")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "was niet in staat om het volgende bestand te vinden:")
	Trans_Add("Make sure that you are running", "Controlleer of u ")
	Trans_Add("from a Freenet installation directory.", "heeft gestart vanuit de Freenet installatielocatie")
	
	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "Probeer Freenet opnieuw te installeren of rapporteer dit foutbericht aan de ontwikkelaars als dit probleem blijft optreden.")
	
	; Launcher
	Trans_Add("Freenet Launcher", "Freenet starter")
	Trans_Add("Freenet Launcher error", "Freenet starter fout")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "was niet in staat om het 'fproxy.port' attribuut uit het 'freenet.ini' bestand in te lezen.")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "Commandoregel opties (slechts éénmaal gebruiken):")
	Trans_Add("Hide info messages", "Verberg info berichten")
	Trans_Add("Hide info and status messages", "Verberg info en status berichten")
	Trans_Add("Return codes:", "Resultaatcodes:")
	Trans_Add("Success", "Succes:")
	Trans_Add("Error occurred", "Fout opgetreden")
	Trans_Add("(no action)", "(geen actie)")
	
	; Service starter
	Trans_Add("(service started)", "(service is gestart)")
	Trans_Add("Service was already running", "Service draaide al")
	Trans_Add("Freenet Starter", "Freenet starter")
	Trans_Add("The Freenet service is starting...", "De Freenet service is aan het starten...")
	Trans_Add("The Freenet service has been started!", "De Freenet service is gestart")
	Trans_Add("The Freenet service is already running!", "De Freenet service draait al!")
	Trans_Add("Freenet Starter error", "Freenet starter fout")
	
	; Service stopper
	Trans_Add("(service stopped)", "(service gestopt)")
	Trans_Add("Service was not running", "Service was niet actief")
	Trans_Add("Freenet Stopper", "Freenet stopzetter")
	Trans_Add("The Freenet service is stopping...", "De Freenet service wordt gestopt...")
	Trans_Add("The Freenet service has been stopped!", "De Freenet service is gestopt!")
	Trans_Add("The Freenet service is already stopped!", "De Freenet service wordt al gestopt!")
	Trans_Add("Freenet Stopper error", "Fout bij het afsluiten van Freenet")

	; Tray manager
	Trans_Add("Freenet Tray", "Freenet systeemvakhulpmiddel")
	Trans_Add("Launch Freenet", "Start Freenet")
	Trans_Add("Start Freenet service", "Start de Freenet service")
	Trans_Add("Stop Freenet service", "Stop de Freenet service")
	Trans_Add("Manual update check", "Handmatig controleren op nieuwe versie")
	Trans_Add("View logfile", "Bekijk logbestand")
	Trans_Add("About", "Over")
	Trans_Add("Exit", "Sluiten")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "Freenet kan worden gestart, gestopt met behulp van het systeemvakhulpmiddel.")
	Trans_Add("Doubleclick: Start/Browse Freenet", "Dubbelklik: Start/Browse Freenet")
	Trans_Add("Right-click: Advanced menu", "Rechter muisknop: Geavanceerd menu")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "Let op: Het gebruik van de handmatige controle op nieuwe versies zal ervoor zorgen dat er contact zal worden gemaakt met de centrale servers van de Freenet website.")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Standaard zal Freenet zich al automatisch en op een veilige manier bijwerken.")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "Gebruik de handmatige controle op nieuwe versies alleen als de bestaande installatie beschadigd is of je nieuwere versies van de hulpprogramma´s nodig hebt.")
	Trans_Add("Freenet Windows Tray Manager", "Freenet Windows systeemvakhulpmiddel")
}
