
; ------------------------   Translator -------------------------
;Name: Fernando Paladini
;Website: www.techsempre.com
;E-mail: fernandopalad@gmail.com
;Company: Tech Sempre / pCreations
; Enjoy the translation =D
; -------------------------  End -------------------------------------

LoadLanguage_pt_br()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "Tradução para Português do Brasil por: Fernando Paladini")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "não foi possível descompactar os arquivos necessários para:")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "Por favor tenha certeza que este programa tem TOTAL ACESSO às pastas temporárias do sistema.")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "é necessário privilégios de administrador para gerenciar os serviços do Freenet. Por favor, verifique se essa conta tem privilégios de administrador, e se este programa esta sendo executado de modo a permitir que ele use esses privilégios.")

	; Installer - Common
	Trans_Add("Freenet Installer error", "Erro no instalador da Freenet")
	Trans_Add("Freenet Installer", "Instalador da Freenet")
	Trans_Add("Welcome to the Freenet Installer!", "Bem vindo ao instalador da Freenet!")
	Trans_Add("Installation Problem", "Problema na instalação")
	Trans_Add("E&xit", "Sair")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet suporta apenas as seguintes versões do sistema operacional Windows:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Por favor, instale uma das outras versões se você deseja usar a Freenet no Windows.")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet precisa do Java Runtime Environment para funcionar, mas seu sistema não aparenta ter uma versão atualizada instalada. Você pode instalar o Java usando o instalador online, que irá baixar e instalar a versão mais recente do Java.")
	Trans_Add("&Install Java", "&Instalar Java")
	Trans_Add("The installation will continue once Java version", "A instalação vai continuará quando a versão Java")
	Trans_Add("or later has been installed.", "ou mais nova for instalada.")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "foi detectado que a Freenet já está instalada. Sua instalação atual foi instalada usando um antigo ou não-suportado instalador. Para continuar, você primeiro precisa desinstalar sua instalação antiga usando o desinstalador criado anteriormente.")
	Trans_Add("&Uninstall", "&Desinstalar")
	Trans_Add("The installation will continue once the old installation has been removed.", "&A instalação continuará somente quando a velha instalação for deletada.")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Por favor, veja as seguintes configurações padrões antes de continuar com a instalação do Freenet.")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "Diretório da Instalação")
	Trans_Add("&Browse", "Procurar")
	Trans_Add("De&fault", "Pa&drão")
	Trans_Add("Freenet requires the installation drive to have at least", "A instalação da Freenet no computador requer no mínimo")
	Trans_Add("MB free disk space. The actual amount of space reserved to Freenet will be configured after the installation.", "MB de espaço em disco livre. A quantidade atual de espaço reservada para a Freenet será configurada depois da instalação.")
	Trans_Add("Status:", "Status")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "Se você não escolher uma pasta contendo 'Freenet' no diretório, uma pasta será criada automaticamente para você.")
	Trans_Add("Invalid install path!", "Diretório de instalação inválido!")
	Trans_Add("(Too long for file system to handle)", "Arquivo do sistema muito longo para manipular")
	Trans_Add("Not enough free space on installation drive!", "Não há espaço livre no Disco Local em que a Freenet está sendo instalada.")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet já está instalada! Por favor unistale a Freenet ou escolha um outro diretório primeiro.")
	Trans_Add("Installation directory OK!", "Diretório da Instalação - Ok!")	

	; Installer - Main GUI - System service
	Trans_Add("System service", "Serviço do Sistema")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "A Freenet será executada automaticamente quando o Windows for iniciado. Isso é necessário para ser uma parte da rede Freenet, e será usado uma quantidade pequena de recursos do sistema. A quantidade de recursos usados do sistema podem ser ajustados após a instalação. ")

	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "Opções Adicionais")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Iniciar Freenet & Gerenciador de Tarefas no início do Windows")
	Trans_Add("Start Freenet on Windows startup", "Iniciar a Freenet juntamente com o Windows")
	Trans_Add("(Recommended)", "Recomendado")
	Trans_Add("Install &start menu shortcuts", "Criar atalhos no &Menu &Iniciar")
	Trans_Add("(Optional)", "Opcional")
	Trans_Add("Install &desktop shortcut", "Criar atalho na &Área de &Trabalho")
	Trans_Add("Launch Freenet &after the installation", "Executar Freenet &após a instalação")

	; Running Freenet box
	Trans_Add("Running Freenet", "Rodando a Freenet")
	Trans_Add("When running, Freenet will use a moderate amount of system resources in order to take part in the Freenet peer-to-peer network. This amount can be adjusted after the installation.", "Quando em execução, a Freenet vai usar uma quantia moderada de recursos do sistema de modo a fazer parte da rede ponto-a-ponto Freenet. Esta quantia poderá ser ajustada após a instalação.")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "Versão")
	Trans_Add(" - Build ", "Build")
	Trans_Add("&Install", "&Instalar")

	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "Abrir o Gerenciador do 'System Tray' da Freenet na área de notificação")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Abrir o FreeNet Proxy em um navegador da web")
	Trans_Add("Start Freenet", "Iniciar Freenet")
	Trans_Add("Stop Freenet", "Para Freenet")
	Trans_Add("Installation finished successfully!", "Instalação finalizada com sucesso")
	Trans_Add("Freenet Installer by:", "Freenet instalador por:")

	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "não é capaz de procurar uma porta livre no seu sistema.")
	Trans_Add("Please free a system port in this range to install Freenet.", "Por favor, libere uma porta do sistema nessa 'série' para instalar a Freenet.")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "não é capaz de criar um socket Winsock 2.0 para tester a disponibilidade das portas.")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "não é possível gravar no diretório de instalaçao selecionado. Por favor, seleciona outro diretório em que a Freenet possa ser instalada.")
	Trans_Add("Error: ", "Erro:")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "não foi possível controlar o serviço do sistema Freenet")
	Trans_Add("Reason:", "Razão:")
	Trans_Add("Timeout while managing the service.", "Tempo limite esgotado enquanto gerenciava o serviço.")
	Trans_Add("Could not access the service.", "Não foi possível acessar o serviço.")
	Trans_Add("Service did not respond to signal.", "Serviço não respondeu ao sinal.")

	; Uninstaller
	Trans_Add("Freenet uninstaller", "Desinstalador do Freenet")
	Trans_Add("was unable to recognize your Freenet installation at:", "foi incapaz de reconhecer a instalação do Freenet em:")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "Por favor, rode esse programa da pasta 'bin' que estão onde a Freenet foi instalada.")
	Trans_Add("Do you really want to uninstall Freenet?", "Você realmente deseja desinstalar a Freenet?")
	Trans_Add("Stopping system service...", "Parando serviços do sistema...")
	Trans_Add("Shutting down tray managers...", "Desligando gerenciadores de tarefas...")
	Trans_Add("Removing system service...", "Removendo serviços do sistema...")
	Trans_Add("Removing files...", "Removendo arquivos...")
	Trans_Add("Freenet uninstaller error", "Erro no desinstalador do Freenet")
	Trans_Add("was unable to delete the Freenet files located at:", "não foi possível deletar os arquivos do Freenet localizados em:")
	Trans_Add("Please close all applications with open files inside this directory.", "Por favor, feche todos os aplicativos abertos a partir dos diretórios acima.")
	Trans_Add("The uninstallation was aborted.", "A desinstalação foi abortada.")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "Por favor, remova manualmente o resto da instalação da Freenet.")
	Trans_Add("Removing registry modifications...", "Removendo modificações no registro...")
	Trans_Add("Freenet has been uninstalled!", "Freenet foi desinstalada!")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "não foi possível encontrar o seguinte arquivo:")
	Trans_Add("Make sure that you are running", "Tenha certeza que você está executando")
	Trans_Add("from a Freenet installation directory.", "de um diretório de instalação da Freenet.")

	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "Se os problemas continuarem ocorrendo, tente reinstalar a Freenet ou reportar esta mensagem de erro aos desenvolvedores.")

	; Launcher
	Trans_Add("Freenet Launcher", "Iniciador da Freenet")
	Trans_Add("Freenet Launcher error", "Erro no 'Iniciador da Freenet'")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "não foi possível ler o valor 'fproxy.port' do arquivo de configuração 'freenet.ini' .")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "Opções de linha de comando (use somente uma):")
	Trans_Add("Hide info messages", "Esconder mensagens de informação")
	Trans_Add("Hide info and status messages", "Esconder mensagens de informação e status")
	Trans_Add("Return codes:", "Retornar códigos:")
	Trans_Add("Success", "Sucesso")
	Trans_Add("Error occurred", "Erro aconteceu")
	Trans_Add("(no action)", "Sem ação")

	; Service starter
	Trans_Add("(service started)", "serviço iniciado")
	Trans_Add("Service was already running", "Serviço já está sendo executado")
	Trans_Add("Freenet Starter", "Iniciador da Freenet")
	Trans_Add("The Freenet service is starting...", "O serviço da Freenet está sendo iniciado...")
	Trans_Add("The Freenet service has been started!", "O serviço da Freenet foi iniciado!")
	Trans_Add("The Freenet service is already running!", "O serviço da Freenet já está sendo executado!")
	Trans_Add("Freenet Starter error", "Erro no 'Iniciador da Freenet' ")

	; Service stopper
	Trans_Add("(service stopped)", "(serviço parado)")
	Trans_Add("Service was not running", "Serviço não está sendo executado")
	Trans_Add("Freenet Stopper", "Parador da Freenet")
	Trans_Add("The Freenet service is stopping...", "O serviço Freenet está parando...")
	Trans_Add("The Freenet service has been stopped!", "O serviço Freenet foi parado!")
	Trans_Add("The Freenet service is already stopped!", "O serviço Freenet já foi parado!")
	Trans_Add("Freenet Stopper error", "Erro no 'Parador da Freenet' ")

	; Tray manager
	Trans_Add("Freenet Tray", "Freenet na bandeja do sistema")
	Trans_Add("Launch Freenet", "Iniciar Freenet")
	Trans_Add("Start Freenet service", "Começar serviço da Freenet")
	Trans_Add("Stop Freenet service", "Parar serviço da Freenet")
	Trans_Add("Manual update check", "Chechagem manual de atualizações")
	Trans_Add("View logfile", "Ver logfile")
	Trans_Add("About", "Sobre")
	Trans_Add("Exit", "Sair")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "Voccê pode buscar, iniciar e parar a Freenet por esse ícone que está na bandeja do sistema.")
	Trans_Add("Left-click: Start/Browse Freenet", "Botão esquerdo do mouse: Iniciar/Buscar Freenet")
	Trans_Add("Right-click: Advanced menu", "Botão direito do mouse: Menu avançado")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "Aviso: Usando a atualização manual irá atualizar a Freenet e suas ferramentas de ajuda direto do site oficial da Freenet.")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenet já está em um modo de auto-atualização isto irá atualizá-la automaticamente quando necessário.")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "Você deve apenas utilizar esta atualização manual se sua instalação estiver com problemas ou precisar de atualizações das ferramentas de ajuda.")
	Trans_Add("Freenet Windows Tray Manager", "Gerenciador do 'System Tray' do Windows")
}
