
;
; Translation file - French (fr) - by Romain Dalmaso (artefact2 that-a-thingy gmail that-dot-thingy com)
;

LoadLanguage_fr()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "n'a pas été en mesure de décompresser les fichiers nécessaires vers :")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "Veuillez vous assurer que le programme a un accès total au dossier des fichiers temporaires du système.")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "nécessite les droits administrateur pour gérer le service Freenet. Veuillez vous assurer que votre compte utilisateur dispose des droits administrateur, et que ce programme s'exécute de manière à bénéficier de des droits administrateurs.")

	; Installer - Common
	Trans_Add("Freenet Installer error", "Erreur de l'Installeur Freenet")
	Trans_Add("Freenet Installer", "Installeur Freenet")
	Trans_Add("Welcome to the Freenet Installer!", "L'Installeur Freenet vous souhaite la bienvenue !")
	Trans_Add("Installation Problem", "Problème lors de l'installation")
	Trans_Add("E&xit", "&Quitter")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet ne supporte que les versions suivantes du système d'exploitation Windows :")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Vous devez installer une de ces versions si vous voulez utiliser Freenet sur Windows.")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet a besoin d'une machine virtuelle Java, mais votre système n'a pas l'air d'en posséder une. Vous pouvez installer Java en utilisant l'installeur fourni, qui téléchargera et installera les fichiers nécessaires automatiquement :")
	Trans_Add("&Install Java", "&Installer Java")
	Trans_Add("The installation will continue once Java version", "L'installation continuera dès que Java version")
	Trans_Add("or later has been installed.", "ou ultérieur sera installé.")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "a détecté que vous avez déjà installé Freenet. Votre installation actuele a été installée par un installeur obsolète. Pour continuer vous devez d'abord désinstaller votre version actuelle de Freenet en utilisant le désinstallateur précédemment créé :")
	Trans_Add("&Uninstall", "&Désinstaller")
	Trans_Add("The installation will continue once the old installation has been removed.", "L'installation continuera une fois que l'ancienne installation aura été supprimée.")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Vérifiez les paramètres par défaut suivants avant de continuer l'installation de Freenet.")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "Répertoire d'installation")
	Trans_Add("&Browse", "&Parcourir")
	Trans_Add("De&fault", "&Défaut")
	Trans_Add("Freenet requires", "Freenet nécessite")
	Trans_Add("MB free disk space on the installation drive. The actual amount of space reserved to Freenet will be configured after the installation.", "Mo d'espace disque libre sur le lecteur où il est installé. Le volume d'espace disque qui sera réservé à Freenet sera configuré après l'installation.")
	Trans_Add("Status:", "Statut :")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Si vous ne choisissez pas de dossier contenant 'Freenet' dans son nom, un dossier sera créé automatiquement pour vous.")
	Trans_Add("Invalid install path!", "Répertoire d'installation invalide !")
	Trans_Add("(Too long for file system to handle)", "(Trop long pour le système de fichier)")
	Trans_Add("Not enough free space on installation drive!", "Pas assez d'espace disque disponible sur le disque dur choisi !")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet est déjà installé ! Désinstallez Freenet ou choisissez un autre dossier.")
	Trans_Add("Installation directory OK!", "Répertoire d'installation OK.")	
	
	; Installer - Main GUI - System service
	Trans_Add("System service", "Service système")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenet sera automatiquement lancé en arrière plan en tant que service système. Cela est nécessaire pour faire partie du réseau Freenet, et cela utilisera un petit peu de ressources système. La quantité de ressources qui sera utilisée pourra être ajustée après l'installation.")
	
	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "Paramètres supplémentaires")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Démarrer Freenet Tray Manager dans la zone de notifications au démarrage de Windows")
	Trans_Add("(Recommended)", "(Recommandé)")
	Trans_Add("Install &start menu shortcuts", "Ajouter les raccourcis au menu &Démarrer")
	Trans_Add("(Optional)", "(Optionnel)")
	Trans_Add("Install &desktop shortcut", "Ajouter un raccourci sur le &Bureau")
	Trans_Add("Launch Freenet &after the installation", "Commencer à parcourir Freenet &après l'installation")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "Version ")
	Trans_Add(" - Build ", " - Build ")
	Trans_Add("&Install", "&Installeur")
	
	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "Lance Freenet Tray Manager dans la zone de notifications")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Ouvre la page d'accueil du proxy Freenet dans un navigateur internet")
	Trans_Add("Start Freenet", "Démarrer Freenet")
	Trans_Add("Stop Freenet", "Arrêter Freenet")
	Trans_Add("Installation finished successfully!", "L'installation s'est terminée avec succès !")
	Trans_Add("Freenet Installer by:", "Installeur Freenet par :")
	
	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "n'a pas pu trouver de port libre sur votre système dans la plage")
	Trans_Add("Please free a system port in this range to install Freenet.", "Vous devez libérer un port dans cette plage pour pouvoir installer Freenet.")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "n'a pu créer une socket Winsock 2.0 pour le test de disponibilité de port.")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "n'a pas pu écrire dans le répertoire d'installation sélectionné. Veuillez choisir un répertoire dans lequel vous avez le droit d'écrire.")
	Trans_Add("Error: ", "Erreur : ")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "n'a pu gérer le service système Freenet")
	Trans_Add("Reason:", "Raison :")
	Trans_Add("Timeout while managing the service.", "")
	Trans_Add("Could not access the service.", "N'a pas pu accéder au service")
	Trans_Add("Service did not respond to signal.", "Le service n'a pas répondu au signal.")
	
	; Uninstaller
	Trans_Add("Freenet uninstaller", "Désinstalleur Freenet")
	Trans_Add("was unable to recognize your Freenet installation at:", "n'a pas été en mesure de reconnaitre votre installation Freenet :")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "Veuillez exécuter ce programme depuis le dossier 'bin' de l'installation Freenet")
	Trans_Add("Do you really want to uninstall Freenet?", "Êtes-vous sûr de vouloir désinstaller Freenet ?")
	Trans_Add("The development team would appreciate it very much if you can spare a moment and fill out a short, anonymous online survey about the reason for your uninstallation.", "L'équipe de développement apprécierait si vous pouviez prendre quelques instants pour remplir une enquête en ligne courte et anonyme concernant les motifs de votre désinstallation.")
	Trans_Add("The survey, located on the Freenet website, will be opened in your browser after the uninstallation.", "L'enquête, située sur le site internet de Freenet, s'ouvrira dans votre navigateur après la désintallation.")
	Trans_Add("Take the uninstallation survey?", "Praticiper à l'enquête concernant la désinstallation ?")
	Trans_Add("Stopping system service...", "Arrêt du service système...")
	Trans_Add("Shutting down tray managers...", "Arrêt des gestionnaires de la barre des tâches...")
	Trans_Add("Removing system service...", "Suppression du service système...")
	Trans_Add("Removing files...", "Suppression des fichiers...")
	Trans_Add("Freenet uninstaller error", "Erreur du désinstalleur Freenet")
	Trans_Add("was unable to delete the Freenet files located at:", "n'a pu supprimer les fichiers Freenet situés à :")
	Trans_Add("Please close all applications with open files inside this directory.", "Veuillez fermer tous les programmes ayant des fichiers ouverts dans ce dossier.")
	Trans_Add("The uninstallation was aborted.", "La désinstallation a été annulée.")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "Veuillez supprimer manuellement le reste de l'installation Freenet")
	Trans_Add("Removing registry modifications...", "Suppression des modifications effectués au registre...")
	Trans_Add("Freenet has been uninstalled!", "Freenet a été désinstallé !")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "n'a pu trouver le fichier suivant :")
	Trans_Add("Make sure that you are running", "Veuillez vous assurer que vous exécutez")
	Trans_Add("from a Freenet installation directory.", "depuis le répertoire d'installation de Freenet.")
	
	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "Si le problème survient toujours, essayez de réintaller Freenet ou signalez ce message d'erreur aux développeurs.")
	
	; Launcher
	Trans_Add("Freenet Launcher", "Lanceur Freenet")
	Trans_Add("Freenet Launcher error", "Erreur du lanceur Freenet")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "n'a pas pu lire la valeur 'fproxy.port' dans le fichier de configuration 'freenet.ini'.")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "Options de ligne de commande (n'utilisez qu'une seule à la fois) :")
	Trans_Add("Hide info messages", "Facher les messages d'info")
	Trans_Add("Hide info and status messages", "Cacher les messages d'info et de statut")
	Trans_Add("Return codes:", "Codes de retour :")
	Trans_Add("Success", "Succès")
	Trans_Add("Error occurred", "Une erreur est survenue")
	Trans_Add("(no action)", "(pas d'action)")
	
	; Service starter
	Trans_Add("(service started)", "(service démarré)")
	Trans_Add("Service was already running", "Le service était déjà démarré")
	Trans_Add("Freenet Starter", "Lanceur du service Freenet")
	Trans_Add("The Freenet service is starting...", "Le service Freenet démarre...")
	Trans_Add("The Freenet service has been started!", "Le service Freenet a été démarré !")
	Trans_Add("The Freenet service is already running!", "Le service Freenet s'éxécute déjà !")
	Trans_Add("Freenet Starter error", "Erreur du lanceur du service Freenet")
	
	; Service stopper
	Trans_Add("(service stopped)", "(service arrêté)")
	Trans_Add("Service was not running", "Le service était déjà arrêté")
	Trans_Add("Freenet Stopper", "Arrêt du service Freenet")
	Trans_Add("The Freenet service is stopping...", "Le service Freenet est en cours d'arrêt...")
	Trans_Add("The Freenet service has been stopped!", "Le service Freenet a été arrêté !")
	Trans_Add("The Freenet service is already stopped!", "Le service Freenet est déjà arrêté !")
	Trans_Add("Freenet Stopper error", "Erreur d'arrêt du service Freenet")

	; Tray manager
	Trans_Add("Freenet Tray", "Gestionnaire Freenet")
	Trans_Add("Launch Freenet", "Démarrer Freenet")
	Trans_Add("Start Freenet service", "Démarrer le service Freenet")
	Trans_Add("Stop Freenet service", "Arrêter le service Freenet")
	Trans_Add("Manual update check", "Vérification manuelle des mises à jour")
	Trans_Add("View logfile", "Voir le fichier de log")
	Trans_Add("About", "A propos")
	Trans_Add("Exit", "Quitter")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "Vous pouvez démarrer, arrêter et naviguer sur Freenet entre autres depuis cette icône de la zone de notification.")
	Trans_Add("Doubleclick: Start/Browse Freenet", "Double-clic : Démarrer/Naviguer sur Freenet")
	Trans_Add("Right-click: Advanced menu", "Clic-droit : Menu Avancé")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "Attention : L'utilisation de la vérification manuelle des mises à jour va mettre à jour Freenet depuis le site officiel.")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenet dispose déjà une fonctionnalité de mise à jour automatique et sécurisée qui lui permet de rester automatiquement à jour.")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "Vous ne devriez utiliser la vérification manuelle des mises à jour que si votre installation de Freenet est endommagée ou que vous avez besoin des versions mises à jour des outils annexes")
	Trans_Add("Freenet Windows Tray Manager", "Gestionnaire Freenet")
}
