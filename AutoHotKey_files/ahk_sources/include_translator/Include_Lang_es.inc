
;
; Translation file - Spanish (es) - by Caco_Patane (cacopatane that-a-thingy gmail that-dot-thingy com)
;

LoadLanguage_es()
{
	; Installer - Common
	Trans_Add("Freenet Installer", "Instalador de Freenet")
	Trans_Add("Welcome to the Freenet Installer!", "Bienvenido al instalador de Freenet!")
	Trans_Add("Installation Problem", "Problemas de Instalacion")
	Trans_Add("Freenet Installer fatal error", "Error fatal en el instalador")
	Trans_Add("Freenet Installer error", "Error en el instalador")
	Trans_Add("Error: ", "Error:")
	Trans_Add("E&xit", "Salir")

	; Installer - Error messageboxes
	Trans_Add("Freenet Installer was not able to unpack necessary installation files to:", "El instalador no pudo descomprimir los archivos necesarios en:")
	Trans_Add("Please make sure that Freenet Installer has full access to the system's temporary files folder.", "Compruebe que el instalador de Freenet tenga permisos en el directorio temporal del sistema")
	Trans_Add("Freenet Installer requires administrator privileges to install Freenet.`nPlease make sure that your user account has administrative access to the system", "Se requieren permisos de administrador para instalar Freenet.`nAsegurese de que su usuario tenga permisos de administrador en el sistema,")
	Trans_Add("Freenet Installer was not able to write to the selected installation directory.`nPlease select one to which you have write access.", "El instalador no pudo escribir en el directorio seleccionado para la instalacion.`nSeleccione un directorio en donde Freenet pueda ser instalado.")
	Trans_Add("Freenet Installer was not able to find a free port on your system in the range ", "El instalador de Freenet no encontro un puerto libre en tu sistema")
	Trans_Add("Please free a system port in this range to install Freenet.", "Libera un puerto del sistema en este rango para instalar Freenet.")
	Trans_Add("Freenet Installer was not able to create a Winsock 2.0 socket`nfor port availability testing.", "El instalador no pudo crear un Winsock 2.0 socket`npara probar la disponibilidad de puertos.")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet solo soporta la ssiguientes versiones del sistema operativo Windows:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Instale una de las siguiente sversiones si quiere usar Freenet en Windows:")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet necesita Java Runtime Enviroment (JRE), pero tu sistema no parece tener una version actualizada instalda. Puede instalar Java usando el instalador en linea (incluido) que bajara e instalara automaticamente desde el sitio web de Java:")
	Trans_Add("&Install Java", "Instalar Java")
	Trans_Add("The installation will continue once Java version ", "La instalacion continuara cuando la version de Java ")
	Trans_Add(" or later has been installed.", "o posterior este instalada.")

	; Installer - Old installation detected
	; Trans_Add("Freenet Installer has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "Se detecto una version de Freenet instalada. Debe desinstalar esa version de Freenet ante sde proseguir con la instalacion actual:")
	Trans_Add("&Uninstall", "Desinstalar")
	Trans_Add("The installation will continue once the old installation has been removed.", "La instalacion continuara cuando la instalacion anterior de Freenet sea removida.")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Revise las siguientes configuraciones por defecto antes de continuar con la instalacion de Freenet.")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "Directorio de instalacion")
	Trans_Add("Freenet requires at least ", "Freenet requiere al menos ")
	Trans_Add(" MB free disk space, but will not install with less than ", " MB de espacio libre en disco, pero no instalara con menos de ")
	Trans_Add(" MB free. The amount of space reserved can be changed after installation.", " MB libres. La cantidad de espacio puede ser cambiada despues de la instalacion.")
	Trans_Add("&Browse", "Cambiar")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Si no elije un directorio que contiene 'Freenet' en su ruta, un directorio sera creado automaticamente.")
	; Trans_Add("De&fault", "")
	Trans_Add("Status:", "Estado:")
	Trans_Add("Invalid install path!", "Ruta de instalacion invallida!")
	Trans_Add("Invalid install path! (Too long for file system to handle)", "Ruta de instalacion invalida! (Muy larga de manejar para el sistema de archivos)")
	Trans_Add("Not enough free space on installation drive!", "No hay espacio suficiente en el disco!")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet ya esta instaladdo! Desinstale primero o elija otro directorio!")
	Trans_Add("Installation directory OK!", "Direcorio de instalacion: OK!")

	; Installer - Main GUI - System service
	Trans_Add("System service", "Servicio del sistema")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenet iniciara automaticamente como servicio del sistema. Esto usara una pequeña parte de los recursos del sistema. La cantidad de estos recursos puede ajustarse al finalizar la instalacion.")

	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "Configuraciones adicionales")
	Trans_Add("Install &start menu shortcuts (Freenet, Start Freenet, Stop Freenet)", "Instalar accesos directos en el menu de inicio (Iniciar Frenet, Finalizar Freenet)")
	Trans_Add("Install &desktop shortcut (Freenet)", "Instalar acceso directo en el escritorio")
	Trans_Add("Launch Freenet &after the installation", "Ejecutar Freenet cuando termine la instalacion")

	; Installer - Main GUI - Footer
	; Trans_Add("Version ", "")
	; Trans_Add(" - Build ", "")
	Trans_Add("&Install", "Instalar")

	; Installer - Actual installation
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Abre pagina de inicio de Freenet en un navegador")
	Trans_Add("Start Freenet", "Ejecutar Freenet")
	Trans_Add("Starts the background service needed to use Freenet", "Arrancar el servicio de Freenet")
	Trans_Add("Stop Freenet", "Frenar Freenet")
	Trans_Add("Stops the background service needed to use Freenet", "Detiene el servicio de Freenet")
	Trans_Add("Installation finished successfully!", "Instalacion completada satisfactoriamente!")

	; Uninstaller - Common
	Trans_Add("Freenet uninstaller", "Desintalador de Freenet")
	Trans_Add("Freenet uninstaller error", "Error en el desinstalador de Freenet")

	; Uninstaller - General
	Trans_Add("Freenet has been uninstalled!", "Freenet fue desinstalado!")
	Trans_Add("Do you really want to uninstall Freenet?", "Esta seguro que quiere desinstalar Freenet?")
	; Trans_Add("The development team would appreciate it very much if you can`nspare a moment and fill out a short, anonymous online`nsurvey about the reason for your uninstallation.`n`nThe survey, located on the Freenet website, will be opened`nin your browser after the uninstallation.`n`nTake the uninstallation survey?", "")

	; Uninstaller - Error messageboxes
	Trans_Add("The uninstaller requires administrator privileges to uninstall Freenet. Please make sure that your user account has administrative access to the system, and the uninstaller is executed with access to use these privileges.", "El desinstalador requiere permisos de administrador. Asegurese que su usuario tienen permisos de administrador en el sistema y que el desinstalador este corriendo con dichos privilegios.")
	Trans_Add("The uninstaller was not able to unpack necessary files to:", "El desinstalador no pudo descomprimir los archivos necessarios en:")
	Trans_Add("Please make sure that the uninstaller has full access to the system's temporary files folder.", "Asegurese que el desinstalador tiene acceso completo a la carpeta temporal del sistema")
	Trans_Add("The uninstaller was unable to recognize your Freenet installation at:", "El desinstalador no pudo reconocer su instalacion de Freenet en:")
	Trans_Add("Please run this uninstaller from the 'bin' folder of a Freenet installation.", "Por favor, ejecute este instalador desde el directorio 'bin' de una instalacion de Freenet")

	; Uninstaller - Service problems
	Trans_Add("The uninstaller was unable to control the Freenet system service as it appears to be stuck.`n`nPlease try again.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El desintalador no pudo controlar el servicio de Freenet que parece estar atascado.`n`nPor favor intente nuevamente.`n`nSi el problema persiste, reporte este mensaje de error a los desarrolladores de Freenet.")
	Trans_Add("The uninstaller was unable to find and control the Freenet system service.`n`nPlease try again.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El desinstalador no pudo encontrar el servicio de Freenet.`n`nPor favor, intente nuevamente.`n`nSi el problema persiste, reporte este mensaje de error a los desarrolladores de Freenet.")
	Trans_Add("The uninstaller was unable to stop the Freenet system service.`n`nPlease try again.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El desinstalador no pudo frenar el servicio de Freenet.`n`nPor favor intente nuevamente.`n`nSi el problema persiste, reporte este mensaje de error a los desarrolladores de Freenet.")

	; Uninstaller - Files undeletable
	Trans_Add("The uninstaller was unable to delete the Freenet files located at:", "El desinstalador no puedo eliminar los archivos de Freenet ubicados en:")
	Trans_Add("Please close all applications with open files inside this directory.", "Por favor cierre todas las aplicaciones que este ejecutando que tengan archivos abiertos dentro de este directorio.")
	Trans_Add("The uninstallation was aborted.`n`nPlease manually remove the rest of your Freenet installation.", "Se aborto el proceso de instalacion.`n`nPor favor, elimine Freenet manualmente.")

	; Uninstaller - Progress statuses
	Trans_Add("Stopping system service...", "Frenando servicio del sistema...")
	Trans_Add("Removing system service...", "Eliminando servicio del sistema...")
	Trans_Add("Removing custom user account rights...", "Eliminando cuenta y permisos personalizados...")
	Trans_Add("Removing files...", "Eliminando archivos...")
	Trans_Add("Removing registry modifications...", "Eliminando notificaciones del registro...")
	Trans_Add("Removing custom user...", "Eliminando usuario personalizado...")

	; Launcher
	Trans_Add("Freenet Launcher error", "Error al lanzar Freenet")
	Trans_Add("Freenet Launcher was unable to find the installid.dat ID file.`n`nMake sure that you are running Freenet Launcher from a Freenet installation directory.`nIf you are already doing so, please report this error message to the developers.", "El archivo installid.dat no pudo ser encontrador.`n`nCompruebe que esta ejecutando desde el directorio de instalacion.`nSi ya esta haciendo esto, reporte este mensaje de error a los desarroladores.")
	Trans_Add("Freenet Launcher was unable to find the bin\start.exe launcher.`n`nPlease reinstall Freenet.`n`nIf the problem keeps occurring, please report this error message to the developers.", "No se pudo encontrar bin\start.exe, vuelva`na instalar Freenet.`nSi el problema persiste, reporte este error a los desarroladores.")
	Trans_Add("Freenet Launcher was unable to find the freenet.ini configuration file.`n`nMake sure that you are running Freenet Launcher from a Freenet installation directory.`nIf you are already doing so, please report this error message to the developers.", "El archivo freenet.ini no pudo ser encontrado.`n`nCompruebe que esta ejecutando desde el directorio de instalacion.`nSi ya esta haciendo esto, reporte este mensaje de error a los desarroladores.")
	Trans_Add("Freenet Launcher was unable to read the 'fproxy.port' value from the freenet.ini configuration file.`n`nPlease reinstall Freenet.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El valor 'fproxy.port' del archivo freenet.ini, no pudo ser encontrado.`n`nCompruebe que esta ejecutando desde el directorio de instalacion.`nSi ya esta haciendo esto, reporte este mensaje de error a los desarroladores.")
	Trans_Add("Freenet Launcher was unable to find a supported browser.`n`nPlease install one of the supported browsers, or manually`nnavigate to: ", "El Lanzador de Freenet no pudo encontrar un navegador soportado.`n`nPor favor seleccione un navegador soportado o elija manualmente: ")
	Trans_Add("Freenet Launcher supports the following browsers:", "El lanzador de Freenet soporte los siguientes navegadores:")
	Trans_Add("not recommended", "no recomendado")

	; Service starter
	Trans_Add("Command line options (only use one):`n/silent - Hide info messages`n/verysilent - Hide info and status messages`n`nReturn codes:`n0 - Success (service started)`n1 - Error occurred`n2 - Service was already running (no action)", "Opciones de linea de comandos (usar solo una):`n/silent - No muestra mensajes de informacion`nverysilent - No muestra ni mensajes de informacion ni de status`n`nCodigos de retorno:`n0 - Exitoso (servicio iniciado)`n1 - Error`n2 - Servicio ya iniciado")
	Trans_Add("Freenet start script requires administrator privileges to start the Freenet service. Please make sure that your user account has administrative access to the system, and the start script is executed with access to use these privileges.", "El script que inicia freenet requiere privilegios de administrador para iniciar el servicio de Freenet. Asegurese que la su cuenta de usuario tenga privilegios de administrador y el script sea ejecutado con estos privilegios.")
	Trans_Add("Freenet start script was unable to find the installid.dat ID file.`n`nMake sure that you are running Freenet start script from the 'bin' folder of a Freenet installation directory. If you are already doing so, please report this error message to the developers.", "El archivo 'installidd.dat' no pudo ser encontrado por el script de instalacion de Freenet.`n`nAsegurese de estar corriendo el script desde el directorio 'bin' dentro de un directorio de instalacion de Freenet. Si ya esta haciendo esto, reporte este error a los desarroladores.")
	Trans_Add("Freenet start script was unable to control the Freenet system service as it appears to be stuck.`n`nPlease reinstall Freenet.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El script de inicio no pudo controlar el servicio de Freenet.`n`nSi el problema persiste, reporte este mensaje a los desarrolladores.")
	Trans_Add("Freenet start script was unable to find and control the Freenet system service.`n`nPlease reinstall Freenet.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El script de inicio no pudo encontrar el servicio de Freenet.`n`nSi el problema persiste, reporte este mensaje a los desarrolladores.")
	Trans_Add("Waiting for the Freenet background service to start...", "Esperando que inicie el servicio de Freenet...")
	Trans_Add("Freenet start script", "Script de inicio de Freenet")
	Trans_Add("Freenet start script was unable to start the Freenet system service.`n`nPlease reinstall Freenet.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El script de inicio no pudo iniciar Freenet como servicio del sistema.`n`nReinstale Freenet.`n`nSi el problema continua ocurriendo, reporte este mensaje a los desarrolladores.")
	Trans_Add("The Freenet service has been started!", "El servicio de Freenet se inicio correctamente!")
	Trans_Add("The Freenet service is already running!", "El servicio de Freenet ya esta siendo ejecutado!")
	Trans_Add("Freenet start script error", "Error en el script de inicio")

	; Service stopper
	Trans_Add("Command line options (only use one):`n/silent - Hide info messages`n/verysilent - Hide info and status messages`n`nReturn codes:`n0 - Success (service stopped)`n1 - Error occurred`n2 - Service was not running (no action)", "Opciones de linea de comandos (usar solo una):`nsilent - No muestra mensajes de informacion`n/verysilent - No muestra ni errores de informacion ni de estado`n`nCodigos de retorno:`n0 - Exito (servicio frenado)`n1 - Error`n2- Servicio no estaba corriendo")
	Trans_Add("Freenet stop script requires administrator privileges to stop the Freenet service. Please make sure that your user account has administrative access to the system, and the stop script is executed with access to use these privileges.", "El script que para el servicio de Freenet requiere privilegios de administrador. Asegurese que su cuenta de usuario posea estos privilegios.")
	Trans_Add("Freenet stop script was unable to find the installid.dat ID file.`n`nMake sure that you are running Freenet stop script from the 'bin' folder of a Freenet installation directory. If you are already doing so, please report this error message to the developers.", "El el archivo 'installid.dat' no pudo ser encontrado por el script que para el servicio de Freenet.`n`nAsegurese que esta corriendo el script desde el directorio 'bin' dentro del direcotorio de instalacion de Freenet. Si ya esta seguro, reporte este mensaje a los desarrolladores.")
	Trans_Add("Freenet stop script was unable to control the Freenet system service as it appears to be stuck.`n`nPlease reinstall Freenet.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El script que frena el servicio de Freenet no puede controlar el servicio y este parece estar trabado.`n`nReinstale Freenet.`n`nSi el problema persiste, contactese con los desarroladores.")
	Trans_Add("Freenet stop script was unable to find and control the Freenet system service.`n`nPlease reinstall Freenet.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El script que frena el servicio de Freenet no puede encontrar el servicio.`n`n`n`nReinstale Freenet.`n`nSi el problema persiste, contactese con los desarroladores.")
	Trans_Add("Waiting for the Freenet background service to stop...", "Esperando que el servicio de sistema de Freenet termine...")
	Trans_Add("Freenet stop script", "Script para finalizar el servicio de Freenet")
	Trans_Add("The Freenet service has been stopped!", "El servicio de Freenet fue finalizado!")
	Trans_Add("The Freenet service is already stopped!", "El servicio de Freenet no esta corriendo!")
	Trans_Add("Freenet stop script was unable to stop the Freenet system service.`n`nPlease reinstall Freenet.`n`nIf the problem keeps occurring, please report this error message to the developers.", "El script para finalizar Freenet no pudo finalizar el servicio de Freenet.`n`nReinstale Freenet.`n`nSi el problema persiste, contactese con los desarroladores.")
	Trans_Add("Freenet stop script error", "Error en el script que finaliza Freenet")
}
