
;
; Translation file - Russian (ru) - by Belousov Valentin (vallos_alien that-a-thingy mail that-dot-thingy ru)
;

LoadLanguage_ru()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "Русскоязычная адаптация: Белоусов Валентин (ValloS)")
	 
	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "невозможно извлечь необходимые файлы в:")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "Пожалуйса, убедитесь что эта программа имеет полный доступ в системную папку временных файлов.")
	 
	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "Для управления службой Freenet требуются привилегии администратора. Пожалуйста, убедитесь что ваша учетная запись имеет администраторский доступ к системе и программе открыт доступ к этим привилегиям.")
	 
	; Installer - Common
	Trans_Add("Freenet Installer error", "Ошибка программы установки Freenet")
	Trans_Add("Freenet Installer", "Программа установки Freenet")
	Trans_Add("Welcome to the Freenet Installer!", "Добро пожаловать в программу установки Freenet")
	Trans_Add("Installation Problem", "Проблема установки приложения")
	Trans_Add("E&xit", "Выход")
	 
	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet поддерживаются только эти версии Windows:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Если вы хотите использовать Freenet, установите, пожалуйста, одну из них.")
	 
	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet-у для работы требуется Java Runtime Environment, но вашей системой не выявлено установленной действительной версии. Вы можете установить Java используя имеющуюся программу установки из интернета, которая загрузит и установит необходимые файлы с сайта Java автоматически:")
	Trans_Add("&Install Java", "Установить Java")
	Trans_Add("The installation will continue once Java version", "Установка будет продолжена как только Java версии")
	Trans_Add("or later has been installed.", "или более поздняя будет установлена.")
	 
	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "Обнаружена предыдущая установка Freenet. Она была установлена с помощью уже не поддерживаемого инсталлятора. Сначала удалите предыдущую версию Freenet его uninstall-ером если хотите продолжить текущую установку:")
	Trans_Add("&Uninstall", "Удаление программы")
	Trans_Add("The installation will continue once the old installation has been removed.", "Установка будет продолжена как только старая версия будет удалена.")
	 
	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Пожалуйста, проверьте данные настройки по-умолчанию перед продолжением установки Freenet.")
	 
	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "Папка назначения")
	Trans_Add("&Browse", "Обзор")
	Trans_Add("De&fault", "По-умолчанию")
	Trans_Add("Freenet requires the installation drive to have at least", "Для установки Freenet на диске должно быть не менее")
	Trans_Add("MB free disk space. The actual amount of space reserved to Freenet will be configured after the installation.", "М свободного места. Точное его количество выделяемое под Freenet будет настроено после установки.")
	Trans_Add("Status:", "Состояние:")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Если вы не выберете папку для 'Freenet', она будет создана автоматически.")
	Trans_Add("Invalid install path!", "Некорректный путь к папке назначения!")
	Trans_Add("(Too long for file system to handle)", "(слишком длинный для этой файловой системы)")
	Trans_Add("Not enough free space on installation drive!", "Недостаточно свободного места на диске!")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet уже установлен! Пожалуйста, удалите его или выберите другую папку!")
	Trans_Add("Installation directory OK!", "С папкой всё ништяк!")
	 
	; Installer - Main GUI - System service
	Trans_Add("System service", "Системная служба")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenet будет запущен как служба в фоновом режиме. Это нужно чтобы стать частью сети Freenet и не займёт много ресурсов. Кроме того, количество потребляемых ресурсов может быть отрегулировано после завершения установки.")
	 
	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "Дополниельные настройки")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Запускать Freenet и Tray Manager при загрузке Windows")
	Trans_Add("(Recommended)", "(Рекомендуется)")
	Trans_Add("Install &start menu shortcuts", "Установить ярлыки в Панели управления")
	Trans_Add("(Optional)", "(Выборочно)")
	Trans_Add("Install &desktop shortcut", "Установить ярлык на Рабочем столе")
	Trans_Add("Launch Freenet &after the installation", "Запустить Freenet после завершения установки")
	 
	; Installer - Main GUI - Footer
	Trans_Add("Version ", "")
	Trans_Add(" - Build ", "")
	Trans_Add("&Install", "")
	 
	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "Открывает Freenet Tray Manager в области уведомлений")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Открывает домашнюю страничку Freenet в браузере")
	Trans_Add("Start Freenet", "Запуск Freenet")
	Trans_Add("Stop Freenet", "Остановка Freenet")
	Trans_Add("Installation finished successfully!", "Установка успешно завершена!")
	Trans_Add("Freenet Installer by:", "О программе установки Freenet:")
	 
	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "не удалось обнаружить свободный системный порт в диапазоне")
	Trans_Add("Please free a system port in this range to install Freenet.", "Пожалуйста, освободите системный порт в этом диапазоне для установки Freenet.")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "не удалось создать сокет Winsock 2.0 для проверки порта на доступность.")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "при записи в указанную папку назначения возникли проблемы. Пожалуйста, выберите папку для которой у вас есть права на запись.")
	Trans_Add("Error: ", "Ошибка:")
	 
	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "не удалась попытка управления службой Freenet.")
	Trans_Add("Reason:", "Причина:")
	Trans_Add("Timeout while managing the service.", "Превышение таймаута.")
	Trans_Add("Could not access the service.", "Отказано в доступе.")
	Trans_Add("Service did not respond to signal.", "Не отвечает на сигнал.")
	 
	; Uninstaller
	Trans_Add("Freenet uninstaller", "Удаление Freenet")
	Trans_Add("was unable to recognize your Freenet installation at:", "не получилось распознать установку Freenet на:")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "Пожалуйста, запустите эту программу в папке 'bin', находящейся в установочной папке Freenet.")
	Trans_Add("Do you really want to uninstall Freenet?", "Вы действительно хотите удалить Freenet?")
	Trans_Add("The development team would appreciate it very much if you can spare a moment and fill out a short, anonymous online survey about the reason for your uninstallation.", "Разработчики были бы очень благодарны если бы вы уделили немного времени для коротенького анонимного опроса о причинах удаления.")
	Trans_Add("The survey, located on the Freenet website, will be opened in your browser after the uninstallation.", "Обзор на сайте Freenet будет открыт после удаления программы.")
	Trans_Add("Take the uninstallation survey?", "Убрать описание удаления?")
	Trans_Add("Stopping system service...", "Остановка системной службы...")
	Trans_Add("Shutting down tray managers...", "Завершение работы трей-менеджеров...")
	Trans_Add("Removing system service...", "Удаление системной службы...")
	Trans_Add("Removing files...", "Удаление файлов...")
	Trans_Add("Freenet uninstaller error", "Ошибка программы удаления Freenet")
	Trans_Add("was unable to delete the Freenet files located at:", "не удалось удалить файлы Freenet в:")
	Trans_Add("Please close all applications with open files inside this directory.", "Пожалуйста, закройте все программы которые используют файлы в этой директории.")
	Trans_Add("The uninstallation was aborted.", "Удаление программы отменено.")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "Пожалуйста, удалите вручную остатки установки Freenet")
	Trans_Add("Removing registry modifications...", "Откат изменений реестра...")
	Trans_Add("Freenet has been uninstalled!", "Freenet был успешно удалён!")
	 
	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "не удалось найти файл:")
	Trans_Add("Make sure that you are running", "Убедитесь что вы запустили")
	Trans_Add("from a Freenet installation directory.", "из каталога установки Freenet.")
	 
	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "Если проблема осталась попробуйте переустановить Freenet или сообщите об ошибке разработчикам.")
	 
	; Launcher
	Trans_Add("Freenet Launcher", "Запуск Freenet")
	Trans_Add("Freenet Launcher error", "Ошибка запуска Freenet")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "не удалось прочесть значение 'fproxy.port' из конфигурационного файла 'freenet.ini'.")
	 
	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "Настройки командной строки (только используемые):")
	Trans_Add("Hide info messages", "Скрыть уведомления")
	Trans_Add("Hide info and status messages", "Скрыть уведомления и индикаторы")
	Trans_Add("Return codes:", "Возвращённые коды:")
	Trans_Add("Success", "Выполнено")
	Trans_Add("Error occurred", "Произошла ошибка")
	Trans_Add("(no action)", "(нет действия)")
	 
	; Service starter
	Trans_Add("(service started)", "(служба запущена)")
	Trans_Add("Service was already running", "Служба уже работает")
	Trans_Add("Freenet Starter", "Запуск Freenet")
	Trans_Add("The Freenet service is starting...", "Служба Freenet запускается...")
	Trans_Add("The Freenet service has been started!", "Служба Freenet запущена!")
	Trans_Add("The Freenet service is already running!", "Служба Freenet уже работает!")
	Trans_Add("Freenet Starter error", "Ошибка запуска Freenet")
	 
	; Service stopper
	Trans_Add("(service stopped)", "(служба остановлена)")
	Trans_Add("Service was not running", "Служба не запущена")
	Trans_Add("Freenet Stopper", "Остановка Freenet")
	Trans_Add("The Freenet service is stopping...", "Остановка службы Freenet...")
	Trans_Add("The Freenet service has been stopped!", "Служба Freenet была остановлена!")
	Trans_Add("The Freenet service is already stopped!", "Служба Freenet уже была остановлена!")
	Trans_Add("Freenet Stopper error", "Ошибка остановки Freenet")
	 
	; Tray manager
	Trans_Add("Freenet Tray", "Freenet в трее")
	Trans_Add("Launch Freenet", "Запустить Freenet")
	Trans_Add("Start Freenet service", "Запустить службу Freenet")
	Trans_Add("Stop Freenet service", "Остановить службу Freenet")
	Trans_Add("Manual update check", "Проверка обновлений вручную")
	Trans_Add("View logfile", "Просмотр отчёта")
	Trans_Add("About", "О программе")
	Trans_Add("Exit", "Выход")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "С помощью иконки в трее вы можете запускать и останавливать Freenet.")
	Trans_Add("Doubleclick: Start/Browse Freenet", "Двойной клик: Открыть/Запустить Freenet")
	Trans_Add("Right-click: Advanced menu", "Правый клик: Расширенное меню")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "Внимание: Использование ручной проверки обновлений Freenet и его справки производится через официальный сайт Freenet")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenet уже имеет встроенное средство авто-обновления и может поддерживать свое действительное состояние автоматически.")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "Вы должны использовать эту ручную проверку обновлений если у вас глючит Freenet или нужно только обновление справки.")
	Trans_Add("Freenet Windows Tray Manager", "")
} 
