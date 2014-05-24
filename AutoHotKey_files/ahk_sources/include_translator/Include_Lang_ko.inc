
; Windows Freenet Installer Korean Translation by Ilbe123
; Updated: 2014-05-01

LoadLanguage_ko()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "한국어 번역: Ilbe123")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "은 필수 파일을 여기에 압축 해제 할 수 없습니다:")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "이 프로그램이 시스템의 모든 권한을 가지고 있는지 확인하십시오.")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "은 Freenet 서비스 관리에 관리자 권한이 필요합니다. 당신의 사용자 계정이 시스템에 대한 관리자 액세스가 이 프로그램을 관리자 권한으로 실행되고 있는지 확인하십시오. ")

	; Installer - Common
	Trans_Add("Freenet Installer error", "Freenet 설치 프로그램에 오류가 발생했습니다")
	Trans_Add("Freenet Installer", "Freenet 설치 프로그램")
	Trans_Add("Welcome to the Freenet Installer!", "Freenet 설치 프로그램에 오신 것을 환영합니다!")
	Trans_Add("Installation Problem", "설치에 문제가 발생했습니다")
	Trans_Add("E&xit", "종료(&X)")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenet는 다음 버전의 Windows OS에서만 작동이 지원됩니다:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "Windows에서 Freenet를 이용하기 위해서는 이 중 하나의 버전을 설치하십시오.")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "Freenet는 Java 런타임 환경을 필요로하지만, 당신의 시스템에서 최신 버전을 확인할 수 없습니다. 동봉된 온라인 설치 프로그램 Java를 설치할 수 있습니다. 이것은 Java 웹 사이트에서 자동으로 필요한 파일을 다운로드합니다.")
	Trans_Add("&Install Java", "Java 설치(&I)")
	Trans_Add("The installation will continue once Java version", "설치는 Java 버전을 확인하면 계속합니다")
	Trans_Add("or later has been installed.", "이후 버전의 Java가 설치되고 나서 계속합니다.")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "당신이 이미 Freenet을 설치하고 있음을 감지했습니다. 현재 설치는 이전 버전에서의 설치 프로그램을 지원하지 않습니다. 계속하려면 이전에 생성 된 제거 프로그램에서 현재 버전을 제거하십시오.")
	Trans_Add("&Uninstall", "제거(&U)")
	Trans_Add("The installation will continue once the old installation has been removed.", "설치는 이전 버전이 제거되면 계속합니다.")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Freenet 설치를 계속하기 전에 다음과 같은 기본 설정을 확인하십시오.")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "설치할 디렉토리")
	Trans_Add("&Browse", "찾아보기(&B)")
	Trans_Add("De&fault", "기본(&f)")
	Trans_Add("Freenet requires the installation drive to have at least", "Freenet는 적어도 설치할 드라이브가 필요합니다")
	Trans_Add("MB free disk space. The actual amount of space reserved to Freenet will be configured after the installation.", "MB의 여유 공간을 디스크가 필요합니다. 실제로 Freenet를 위해 비축되는 용량 설정은 설치 후에 설정됩니다.")
	Trans_Add("Status:", "")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "경로에 'Freenet'을 포함하지 않는 폴더를 선택하면 자동으로 폴더가 생성됩니다.")
	Trans_Add("Invalid install path!", "설치 경로가 유효하지 않습니다!")
	Trans_Add("(Too long for file system to handle)", "파일 시스템이 취급하기에 너무 깁니다")
	Trans_Add("Not enough free space on installation drive!", "설치할 드라이브에 공간이 부족합니다!")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenet이 이미 설치되어 있습니다! 먼저 제거하거나 다른 디렉토리를 선택하십시오!")
	Trans_Add("Installation directory OK!", "설치 디렉토리 OK!")	
	
	; Installer - Main GUI - System service
	Trans_Add("System service", "시스템 서비스")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenet이 시스템 서비스에서 자동으로 시작합니다. 이것은 Freenet 네트워크에 연결하는 데 필요한 시스템 리소스를 약간 소모합니다. 사용하는 시스템 자원의 정도는 설치 후 조절할 수 있습니다.")
	
	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "추가 설정")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Windows 시작시 Freenet 트레이 관리자 시작(&T)")
	Trans_Add("Start Freenet on Windows startup", "Windows 시작시 Freenet를 자동으로 시작")
	Trans_Add("(Recommended)", "(추천)")
	Trans_Add("Install &start menu shortcuts", "시작 메뉴에 바로 가기를 설치합니다(&s)")
	Trans_Add("(Optional)", "(옵션)")
	Trans_Add("Install &desktop shortcut", "바탕 화면 바로 가기 만들기")
	Trans_Add("Launch Freenet &after the installation", "설치 후 Freenet을 시작하기(&a)")
	
	; Running Freenet box
	Trans_Add("Running Freenet", "Freenet을 실행하다")
	Trans_Add("When running, Freenet will use a moderate amount of system resources in order to take part in the Freenet peer-to-peer network. This amount can be adjusted after the installation.", "실행시 Freenet이 작은 양의 시스템 리소스를 Freenet P2P 네트워크에 연결하는 데 사용합니다. 이 정도는 설치 후에 조절할 수 있습니다.")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "버전")
	Trans_Add(" - Build ", " - 빌드 ")
	Trans_Add("&Install", "설치(&I)")
	
	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "알림 영역에 Freenet 트레이 관리자 열기")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "Web 브라우저 Freenet 프록시 홈페이지 열기")
	Trans_Add("Start Freenet", "Freenet을 시작")
	Trans_Add("Stop Freenet", "Freenet을 중지")
	Trans_Add("Installation finished successfully!", "설치가 성공적으로 완료되었습니다!")
	Trans_Add("Freenet Installer by:", "Freenet 설치 프로그램의 저작자는:")
	
	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "은 범위 내에서 사용 가능한 포트를 찾을 수 없습니다")
	Trans_Add("Please free a system port in this range to install Freenet.", "Freenet을 설치하기 위해 이 범위의 포트를 개방합니다.")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "포트의 가용성 테스트 용 Winsock 2.0 소켓을 만들 수 없습니다.")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "지정한 설치 디렉토리에 쓸 수 없습니다. 쓰기 권한이 있는 디렉토리를 지정하십시오.")
	Trans_Add("Error: ", "오류: ")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "은 Freenet 시스템 서비스를 제어 할 수 없습니다.")
	Trans_Add("Reason:", "이유:")
	Trans_Add("Timeout while managing the service.", "서비스 관리 중 시간이 초과되었습니다.")
	Trans_Add("Could not access the service.", "서비스에 액세스 할 수 없습니다.")
	Trans_Add("Service did not respond to signal.", "서비스가 신호에 응답하지 않았습니다.")
	
	; Uninstaller
	Trans_Add("Freenet uninstaller", "Freenet 제거 프로그램")
	Trans_Add("was unable to recognize your Freenet installation at:", "여기에 Freenet의 설치를 인식하지 못했습니다:")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "이 프로그램을 Freenet 설치 할때'bin'폴더에서 시작하십시오.")
	Trans_Add("Do you really want to uninstall Freenet?", "Freenet을 정말 제거 하시겠습니까?")
	Trans_Add("Stopping system service...", "시스템 서비스를 중지하는 중 ...")
	Trans_Add("Shutting down tray managers...", "트레이 관리자를 중지 중 ...")
	Trans_Add("Removing system service...", "시스템 서비스를 해제 중 ...")
	Trans_Add("Removing files...", "파일을 삭제 중 ...")
	Trans_Add("Freenet uninstaller error", "Freenet 제거 오류")
	Trans_Add("was unable to delete the Freenet files located at:", "은 여기에 Freenet 파일을 삭제할 수 없습니다 :")
	Trans_Add("Please close all applications with open files inside this directory.", "이 디렉토리에있는 파일에 열려있는 모든 응용 프로그램을 종료하십시오.")
	Trans_Add("The uninstallation was aborted.", "제거가 중단되었습니다.")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "나머지 Freenet 설치는 모두 수동으로 제거하십시오.")
	Trans_Add("Removing registry modifications...", "레지스트리의 변경 내용을 삭제 중 ...")
	Trans_Add("Freenet has been uninstalled!", "Freenet은 삭제되었습니다!")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "은 이 파일을 찾지 못했습니다:")
	Trans_Add("Make sure that you are running", "실행을 확실히 하십시오")
	Trans_Add("from a Freenet installation directory.", "이 Freenet 설치 디렉토리에서 실행되고 있는지 확인하십시오.")
	
	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "문제가 계속 발생한다면, Freenet을 다시 설치하거나 오류 메시지를 개발자에게 전송하십시오.")
	
	; Launcher
	Trans_Add("Freenet Launcher", "Freenet 런처")
	Trans_Add("Freenet Launcher error", "Freenet 런처 오류")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "은 'fproxy.port'의 값을 'freenet.ini'설정 파일에서 읽을 수 없습니다.")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "커맨드 라인 옵션 (하나만 사용)")
	Trans_Add("Hide info messages", "정보 메시지 숨기기")
	Trans_Add("Hide info and status messages", "정보 메시지 및 상태 메시지 숨기기")
	Trans_Add("Return codes:", "반환 코드")
	Trans_Add("Success", "성공")
	Trans_Add("Error occurred", "오류 발생")
	Trans_Add("(no action)", "(반응 없음)")
	
	; Service starter
	Trans_Add("(service started)", "(서비스 시작)")
	Trans_Add("Service was already running", "서비스가 이미 실행 중입니다")
	Trans_Add("Freenet Starter", "Freenet 스타터")
	Trans_Add("The Freenet service is starting...", "Freenet 서비스가 시작 중입니다 ...")
	Trans_Add("The Freenet service has been started!", "Freenet 서비스를 시작했습니다!")
	Trans_Add("The Freenet service is already running!", "Freenet 서비스가 이미 시작하고 있습니다!")
	Trans_Add("Freenet Starter error", "Freenet 스타터 오류")
	
	; Service stopper
	Trans_Add("(service stopped)", "(서비스 중지)")
	Trans_Add("Service was not running", "서비스는 실행하지 않습니다")
	Trans_Add("Freenet Stopper", "Freenet 정지 장치")
	Trans_Add("The Freenet service is stopping...", "Freenet 서비스를 중지합니다 ...")
	Trans_Add("The Freenet service has been stopped!", "Freenet 서비스가 중지되었습니다!")
	Trans_Add("The Freenet service is already stopped!", "Freenet 서비스가 이미 중지합니다!")
	Trans_Add("Freenet Stopper error", "Freenet 정지 장치 오류")

	; Tray manager
	Trans_Add("Freenet Tray", "Freenet 트레이")
	Trans_Add("Launch Freenet", "Freenet 열기")
	Trans_Add("Start Freenet service", "Freenet 서비스를 시작")
	Trans_Add("Stop Freenet service", "Freenet 서비스를 중지")
	Trans_Add("Manual update check", "수동 업데이트 확인")
	Trans_Add("View logfile", "로그 파일보기")
	Trans_Add("About", "~에 관해")
	Trans_Add("Exit", "종료")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "이 트레이 아이콘에서 Freenet을 찾아보기 시작 · 중지하고 다른 유용한 기능을 사용할 수 있습니다.")
	Trans_Add("Left-click: Start/Browse Freenet", "왼쪽 클릭: Freenet을 시작/검색")
	Trans_Add("Right-click: Advanced menu", "오른쪽 클릭: 고급 메뉴")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "주의: 수동 업데이트 확인은 Freenet 공식 사이트에서 Freenet과 도우미 도구를 업데이트합니다.")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenet은 이미 안전하고 자동으로 최신 상태로 유지되고 자동 업데이트 기능이 있습니다.")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "설치가 손상된 순간 또는 도우미 도구의 업데이트가 필요한 경우에만 이 수동 업데이트 확인을 사용하십시오.")
	Trans_Add("Freenet Windows Tray Manager", "Freenet Windows 트레이 관리자")
}
