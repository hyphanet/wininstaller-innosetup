;
; Translation file - Polish (pl) - by Arkadiusz Błasiak (ares1112 that-a-thingy gmail that-dot-thingy com)
;

LoadLanguage_pl()
{
; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "Polskie tłumaczenie przez: Arkadiusz Błasiak (Ares)")

; Shared strings (Installer, Uninstaller)
Trans_Add("was not able to unpack necessary files to:", "nie mógł wypakować potrzebnych plików do:")
Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "Proszę upewnić się, że ten program ma pełny dostęp do plików tymczasowych.")

; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "wymagane uprawnienia administratora, aby zarządzać usługą Freenet. Proszę się upewnić czy twoje konto użytkownika posiada dostęp administracyjny do systemu i program jest uruchomiony z tymi uprawnieniami.")

; Installer - Common
Trans_Add("Freenet Installer error", "Błąd instalatora Freenet")
Trans_Add("Freenet Installer", "Instalator Freenet")
Trans_Add("Welcome to the Freenet Installer!", "Witaj w instalatorze programu Freenet!")
Trans_Add("Installation Problem", "Błąd podczas instalacji")
Trans_Add("E&xit", "&Wyjście")

; Installer - Unsupported Windows version
Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet obsługuje wyłącznie następujące wersje systemu Windows:")
Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Proszę zainstalować jedną z tych wersji, jeżeli chcesz używać Freenet w systemie Windows.")

; Installer - Java missing
Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet wymaga pakiet Java Runtime Environment, jednak twój system nie posiada aktualnej wersji. Możesz zainstalować Javę poprzez zawarty instalator online, który pobierze i zainstaluje wymagane pliki automatycznie ze strony Javy:")
Trans_Add("&Install Java", "&Zainstaluj Javę")
Trans_Add("The installation will continue once Java version", "Instalacja będzie kontynuowana, gdy wersja Javy")
Trans_Add("or later has been installed.", "lub póżniejszej zakończy się.")

; Installer - Old installation detected
Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "wykrył, że Freenet jest już zainstalowany. Obecna instalacja była zainstalowana przez starszy, niewspierany instalator. Aby kontynuować, należy usunąć aktualną wersję Freenet poprzez uprzedni deinstalator:")
Trans_Add("&Uninstall", "&Usuń")
Trans_Add("The installation will continue once the old installation has been removed.", "Instalacja będzie kontynuowana, gdy starsza instalacja zostanie usunięta.")

; Installer - Main GUI - Header
Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Proszę sprawdzić następujące domyślne ustawienia przed kontunuowaniem instalacji Freenet.")

; Installer - Main GUI - Install folder
Trans_Add("Installation directory", "Ścieżka instalacji")
Trans_Add("&Browse", "&Przeglądaj")
Trans_Add("De&fault", "Do&myślne")
Trans_Add("Freenet requires the installation drive to have at least", "Freenet wymaga, aby dysk miał przynajmniej")
Trans_Add("MB free disk space. The actual amount of space reserved to Freenet will be configured after the installation.", "MB wolnej przestrzeni. Aktualna wartość przestrzeni zarezerwowanej dla Freenet będzie skonfigurowana po instalacji.")
Trans_Add("Status:", "Status:")
Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Jeśli folder o nazwie zawierającej słowo 'Freenet' nie będzie wybrany, zostanie utworzony automatycznie.")
Trans_Add("Invalid install path!", "Niewłaściwa ścieżka instalacji!")
Trans_Add("(Too long for file system to handle)", "(Zbyt długie dla systemu plików)")
Trans_Add("Not enough free space on installation drive!", "Brak wystarczającej ilości wolnego miejsca na dysku!")
Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet jest już zainstalowany! Proszę go usunąć lub wybrać inną ścieżkę!")
Trans_Add("Installation directory OK!", "Ścieżka instalacji OK!")

; Installer - Main GUI - System service
Trans_Add("System service", "Usługa systemowa")
Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenet uruchomi się automatycznie w tle jako usługa systemowa. Jest to wymagane, aby być częścią sieci Freenet i korzystać z niewielkich ilości zasobów systemu. Ilość używanych zasobów może być zmieniona po instalacji.")

; Installer - Main GUI - Additional settings
Trans_Add("Additional settings", "Dodatkowe ustawienia")
Trans_Add("Start Freenet &Tray Manager on Windows startup", "Uruchom menedżer &tray'a Freenet podczas uruchamiania Windows")
Trans_Add("(Recommended)", "(Zalecane)")
Trans_Add("Install &start menu shortcuts", "Zainstaluj skróty w menu &start")
Trans_Add("(Optional)", "(Opcjonalne)")
Trans_Add("Install &desktop shortcut", "Zainstaluj skrót na pu&lpicie")
Trans_Add("Launch Freenet &after the installation", "Uruchom Freenet po &instalacji")

; Installer - Main GUI - Footer
Trans_Add("Version ", "Wersja")
Trans_Add(" - Build ", " - Kompilacja")
Trans_Add("&Install", "I&nstaluj")

; Installer - Actual installation
Trans_Add("Opens Freenet Tray Manager in the notification area", "Otwiera menedżer tray'a Freenet w obszarze powiadomień")
Trans_Add("Opens the Freenet proxy homepage in a web browser", "Otwiera stronę domową Freenet proxy w przeglądarce")
Trans_Add("Start Freenet", "Uruchom Freenet")
Trans_Add("Stop Freenet", "Zatrzymaj Freenet")
Trans_Add("Installation finished successfully!", "Instalacja ukończona pomyślnie!")
Trans_Add("Freenet Installer by:", "Instalator Freenet przez:")

; Installer - Error messageboxes
Trans_Add("was not able to find a free port on your system in the range", "nie mógł znaleźć wolnego portu na twoim systemie w zakresie")
Trans_Add("Please free a system port in this range to install Freenet.", "Proszę zwolnić port w tym zakresie, aby zainstalować Freenet.")
Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "nie mógł stworzyć Winsock 2.0 socket dla testu dostępności portów.")
Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "nie mógł zapisać do wybranej ścieżki instalacji. Proszę wybrać taki, do którego masz dostęp zapisu.")
Trans_Add("Error: ", "Błąd: ")

; Shared strings (Uninstaller, Service starter, Service stopper)
Trans_Add("was unable to control the Freenet system service.", "nie mógł kontrolować usługi systemowej Freenet")
Trans_Add("Reason:", "Powód:")
Trans_Add("Timeout while managing the service.", "Timeout podczas zarządzania usługą.")
Trans_Add("Could not access the service.", "Brak dostępu do usługi.")
Trans_Add("Service did not respond to signal.", "Usługa nie odpowiedziała na sygnał.")

; Uninstaller
Trans_Add("Freenet uninstaller", "Deinstalator Freenet")
Trans_Add("was unable to recognize your Freenet installation at:", "nie mógł rozpoznać instalacji Freenet w:")
Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "Proszę uruchomić ten program z folderu 'bin' instalacji Freenet.")
Trans_Add("Do you really want to uninstall Freenet?", "Czy na pewno chcesz usunąć Freenet?")
Trans_Add("Stopping system service...", "Zatrzymywanie usługi systemowej...")
Trans_Add("Shutting down tray managers...", "Wyłączanie menedżerów tray'a")
Trans_Add("Removing system service...", "Usuwanie usługi systemowej...")
Trans_Add("Removing files...", "Usuwanie plików...")
Trans_Add("Freenet uninstaller error", "Błąd deinstalatora Freenet")
Trans_Add("was unable to delete the Freenet files located at:", "nie mógł usunąć plików programu Freenet w:")
Trans_Add("Please close all applications with open files inside this directory.", "Proszę zamknąć wszystkie aplikacje, które mają otwarte pliki w tej ścieżce.")
Trans_Add("The uninstallation was aborted.", "Proces deinstalacji został przerwany.")
Trans_Add("Please manually remove the rest of your Freenet installation.", "Proszę ręcznie usunąć resztę pozostałych plików instalacji Freenet.")
Trans_Add("Removing registry modifications...", "Usuwanie modyfikacji rejestru...")
Trans_Add("Freenet has been uninstalled!", "Freenet został pomyślnie usunięty!")

; Shared strings (Launcher, Tray manager)
Trans_Add("was unable to find the following file:", "nie mógł odnaleźć następującego pliku:")
Trans_Add("Make sure that you are running", "Upewnij się, że jest uruchomiony")
Trans_Add("from a Freenet installation directory.", "z ścieżki instalacyjnej Freenet.")

; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "Jeśli problem nadal występuje, proszę zainstalować Freenet ponownie lub zgłosić ten komunikat deweloperom.")

; Launcher
Trans_Add("Freenet Launcher", "Freenet Launcher")
Trans_Add("Freenet Launcher error", "Błąd Freenet Launcher")
Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "nie mógł odczytać wartości 'fproxy.port' z pliku konfiguracyjnego 'freenet.ini'.")

; Shared strings (Service starter, Service stopper)
Trans_Add("Command line options (only use one):", "Opcje wiersza poleceń (używaj tylko jednej):")
Trans_Add("Hide info messages", "Ukryj powiadomienia")
Trans_Add("Hide info and status messages", "Ukryj powiadomienia i informacje o statusie")
Trans_Add("Return codes:", "Kody zwrotne:")
Trans_Add("Success", "Sukces")
Trans_Add("Error occurred", "Wystąpił błąd")
Trans_Add("(no action)", "(brak akcji)")

; Service starter
Trans_Add("(service started)", "(usługa uruchomiona)")
Trans_Add("Service was already running", "Usługa już działa")
Trans_Add("Freenet Starter", "Starter Freenet")
Trans_Add("The Freenet service is starting...", "Usługa Freenet jest uruchamiana...")
Trans_Add("The Freenet service has been started!", "Usługa Freenet została uruchomiona!")
Trans_Add("The Freenet service is already running!", "Usługa Freenet jest już uruchomiona!")
Trans_Add("Freenet Starter error", "Błąd Startera Freenet")

; Service stopper
Trans_Add("(service stopped)", "(usługa zatrzymana)")
Trans_Add("Service was not running", "Usługa nie była uruchomiona")
Trans_Add("Freenet Stopper", "Stopper Freenet")
Trans_Add("The Freenet service is stopping...", "Usługa Freenet jest zatrzymywana...")
Trans_Add("The Freenet service has been stopped!", "Usługa Freenet została zatrzymana!")
Trans_Add("The Freenet service is already stopped!", "Usługa Freenet jest już zatrzymana!")
Trans_Add("Freenet Stopper error", "Błąd Stoppera Freenet")

; Tray manager
Trans_Add("Freenet Tray", "Freenet Tray")
Trans_Add("Launch Freenet", "Uruchom Freenet")
Trans_Add("Start Freenet service", "Uruchom usługę Freenet")
Trans_Add("Stop Freenet service", "Zatrzymaj usługę Freenet")
Trans_Add("Manual update check", "Ręczne sprawdzenie aktualizacji")
Trans_Add("View logfile", "Pokaż logfile")
Trans_Add("About", "O...")
Trans_Add("Exit", "Wyjście")
Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "Możesz przeglądać, startować i zatrzymywać Freenet wraz z innymi przydatnymi rzeczami z tej ikony tray'a.")
Trans_Add("Left-click: Start/Browse Freenet", "Lewe kliknięcie: Start/Przeglądaj Freenet")
Trans_Add("Right-click: Advanced menu", "Prawe kliknięcie: Menu zaawansowane")
Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "Ostrzeżenie: Użycie ręcznej aktualizacji zaktualizuje Freenet i jego narzędzia pomocy z oficjalnej strony Freenet.")
Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenet posiada bezpieczne, wbudowane narzędzie do automatycznej aktualizacji, które będzie na bieżąco aktualizowało program.")
Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "Powinieneś używać to ręczne narzędzie sprawdzania aktualizacji, jeśli instalacja jest zepsuta, bądź potrzebujesz zaktualizowane wersje narzędzi pomocy.")
Trans_Add("Freenet Windows Tray Manager", "Menedżer Tray'a Freenet")
}
