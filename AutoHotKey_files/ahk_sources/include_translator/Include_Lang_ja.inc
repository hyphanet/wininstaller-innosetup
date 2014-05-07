
; Windows Freenet Installer Japanese Translation by Emmanuel Goldstein <emmanuelgoldstein@eureka.freemail>
; Updated: 2012-10-01

LoadLanguage_ja()
{
	; Translation credit string. Remember to change language and name to your own in the translated string (not in the english one). Don't add personal comments or website links here - add those to the header of this file instead if you want.
	Trans_Add("English localization by: Christian Funder Sommerlund (Zero3)", "日本語訳: Emmanuel Goldstein")

	; Shared strings (Installer, Uninstaller)
	Trans_Add("was not able to unpack necessary files to:", "は必須ファイルをこちらに解凍できませんでした:")
	Trans_Add("Please make sure that this program has full access to the system's temporary files folder.", "このプログラムがシステムのフルアクセス権を持っていることをご確認ください。")

	; Shared strings (Installer, Uninstaller, Service starter, Service stopper)
	Trans_Add("requires administrator privileges to manage the Freenet service. Please make sure that your user account has administrative access to the system, and this program is executed with access to use these privileges.", "はFreenetサービスの管理に管理者権限が必要です。あなたのユーザアカウントがシステムへの管理者アクセスができ、このプログラムが管理者権限で実行されていることを確認してください。")

	; Installer - Common
	Trans_Add("Freenet Installer error", "Freenetインストーラにエラーが発生しました")
	Trans_Add("Freenet Installer", "Freenetインストーラ")
	Trans_Add("Welcome to the Freenet Installer!", "Freenetインストーラにようこそ!")
	Trans_Add("Installation Problem", "インストールに問題が発生しました")
	Trans_Add("E&xit", "終了(&X)")

	; Installer - Unsupported Windows version
	Trans_Add("Freenet only supports the following versions of the Windows operating system:", "Freenetは以下のバージョンのWindows OS上での動作のみがサポートされています:")
	Trans_Add("Please install one of these versions if you want to use Freenet on Windows.", "WindowsでFreenetを利用するためには、このうちどれかのバージョンをインストールしてください。")

	; Installer - Java missing
	Trans_Add("Freenet requires the Java Runtime Environment, but your system does not appear to have an up-to-date version installed. You can install Java by using the included online installer, which will download and install the necessary files from the Java website automatically:", "FreenetはJavaランタイム環境を必要としますが、あなたのシステムでは最新版が確認できませんでした。同梱のオンラインインストーラでJavaをインストールできます。これはJavaのウェブサイトから自動的に必要なファイルをダウンロードします。")
	Trans_Add("&Install Java", "Javaをインストールする(&I)")
	Trans_Add("The installation will continue once Java version", "インストールは")
	Trans_Add("or later has been installed.", "以降のバージョンのJavaがインストールされてから継続します。")

	; Installer - Old installation detected
	Trans_Add("has detected that you already have Freenet installed. Your current installation was installed using an older, unsupported installer. To continue, you must first uninstall your current version of Freenet using the previously created uninstaller:", "は、あなたが既にFreenetをインストールしていることを検知しました。現在のインストールは古いバージョンで、インストーラをサポートしていません。続けるには、以前作成されたアンインストーラで現在のバージョンを削除してください。")
	Trans_Add("&Uninstall", "アンインストール(&U)")
	Trans_Add("The installation will continue once the old installation has been removed.", "インストールは旧バージョンが削除されると継続します。")

	; Installer - Main GUI - Header
	Trans_Add("Please check the following default settings before continuing with the installation of Freenet.", "Freenetのインストールを継続する前に以下のデフォルトの設定を確認してください。")

	; Installer - Main GUI - Install folder
	Trans_Add("Installation directory", "インストールするディレクトリ")
	Trans_Add("&Browse", "参照(&B)")
	Trans_Add("De&fault", "デフォルト(&f)")
	Trans_Add("Freenet requires the installation drive to have at least", "Freenetは少なくとも")
	Trans_Add("MB free disk space. The actual amount of space reserved to Freenet will be configured after the installation.", "MBの空き容量がディスクにが必要です。実際にFreenetのために確保される容量の設定はインストールの後で設定されます。")
	Trans_Add("Status:", "状況:")
	Trans_Add("If you do not choose a folder containing 'Freenet' in the path, a folder will be created for you automatically.", "パスに'Freenet'を含まないフォルダを選択した場合、自動的にフォルダが作成されます。")
	Trans_Add("Invalid install path!", "インストールパスが無効です!")
	Trans_Add("(Too long for file system to handle)", "ファイルシステムが扱うのに長すぎます")
	Trans_Add("Not enough free space on installation drive!", "インストールするドライブに空き容量が不足しています!")
	Trans_Add("Freenet already installed! Please uninstall first or choose another directory!", "Freenetが既にインストールされています!まずそれを削除するか別のディレクトリを選んでください!")
	Trans_Add("Installation directory OK!", "インストールディレクトリ OK!")	
	
	; Installer - Main GUI - System service
	Trans_Add("System service", "システムサービス")
	Trans_Add("Freenet will automatically start in the background as a system service. This is required to be a part of the Freenet network, and will use a small amount of system resources. The amount of resources used can be adjusted after installation.", "Freenetはシステムサービスとして自動的に起動します。これはFreenetネットワークに接続するのに必要で、システムリソースをやや消費します。使用するシステムリソースの程度はインストール後に調節できます。")
	
	; Installer - Main GUI - Additional settings
	Trans_Add("Additional settings", "追加の設定")
	Trans_Add("Start Freenet &Tray Manager on Windows startup", "Windowsの起動時にFreenetトレイマネージャを起動する(&T)")
	Trans_Add("Start Freenet on Windows startup", "Windowsの起動時にFreenetを自動的に起動する")
	Trans_Add("(Recommended)", "(オヌヌメ)")
	Trans_Add("Install &start menu shortcuts", "スタートメニューにショートカットをインストールする(&s)")
	Trans_Add("(Optional)", "(オプション)")
	Trans_Add("Install &desktop shortcut", "デスクトップショートカットを作成")
	Trans_Add("Launch Freenet &after the installation", "インストール後にFreenetを起動させる(&a)")
	
	; Running Freenet box
	Trans_Add("Running Freenet", "Freenetを稼動させる")
	Trans_Add("When running, Freenet will use a moderate amount of system resources in order to take part in the Freenet peer-to-peer network. This amount can be adjusted after the installation.", "稼動の際はFreenetは小さな量のシステムリソースを、Freenet P2Pネットワークに接続するために消費します。この程度はインスト^ルの後で調節できます。")

	; Installer - Main GUI - Footer
	Trans_Add("Version ", "バージョン")
	Trans_Add(" - Build ", " - ビルド")
	Trans_Add("&Install", "インストール(&I)")
	
	; Installer - Actual installation
	Trans_Add("Opens Freenet Tray Manager in the notification area", "通知領域にFreenetトレイマネージャを開く")
	Trans_Add("Opens the Freenet proxy homepage in a web browser", "WebブラウザでFreenetプロキシホームページを開く")
	Trans_Add("Start Freenet", "Freenetを開始")
	Trans_Add("Stop Freenet", "Freenetを停止")
	Trans_Add("Installation finished successfully!", "インストールは正常に完了しました!")
	Trans_Add("Freenet Installer by:", "Freenet インストーラの作者は:")
	
	; Installer - Error messageboxes
	Trans_Add("was not able to find a free port on your system in the range", "は範囲内で空きポートを見付けられませんでした")
	Trans_Add("Please free a system port in this range to install Freenet.", "Freenetをインストールするために、この範囲のポートを開放してください。")
	Trans_Add("was not able to create a Winsock 2.0 socket for port availability testing.", "はポートの可用性テストのためのWinsock 2.0ソケットを作成できませんでした。")
	Trans_Add("was not able to write to the selected installation directory. Please select one to which you have write access.", "は指定したインストールディレクトリに書き込めませんでした。書き込み権限のあるディレクトリを指定してください。")
	Trans_Add("Error: ", "エラー: ")

	; Shared strings (Uninstaller, Service starter, Service stopper)
	Trans_Add("was unable to control the Freenet system service.", "はFreenetシステムサービスを制御できませんでした。")
	Trans_Add("Reason:", "理由:")
	Trans_Add("Timeout while managing the service.", "サービスの管理中にタイムアウトが発生しました。")
	Trans_Add("Could not access the service.", "サービスにアクセスできませんでした。")
	Trans_Add("Service did not respond to signal.", "サービスがシグナルに応答しませんでした。")
	
	; Uninstaller
	Trans_Add("Freenet uninstaller", "Freenetアンインストーラ")
	Trans_Add("was unable to recognize your Freenet installation at:", "はここへのFreenetのインストールを認識できませんでした:")
	Trans_Add("Please run this program from the 'bin' folder of a Freenet installation.", "このプログラムはFreenetインストールの'bin'フォルダで起動してください。")
	Trans_Add("Do you really want to uninstall Freenet?", "Freenetを本当にアンインストールしてもよろしいですか？")
	Trans_Add("Stopping system service...", "システムサービスを停止中...")
	Trans_Add("Shutting down tray managers...", "トレイマネージャを停止中...")
	Trans_Add("Removing system service...", "システムサービスを解除中...")
	Trans_Add("Removing files...", "ファイルを削除中...")
	Trans_Add("Freenet uninstaller error", "Freenetアンインストールエラー")
	Trans_Add("was unable to delete the Freenet files located at:", "はここのFreenetファイルを削除できませんでした:")
	Trans_Add("Please close all applications with open files inside this directory.", "このディレクトリ内のファイルを開いているすべてのアプリケーションを終了してください。")
	Trans_Add("The uninstallation was aborted.", "アンインストールは中止されました。")
	Trans_Add("Please manually remove the rest of your Freenet installation.", "残りのFreenetインストールは全て手動で削除してください。")
	Trans_Add("Removing registry modifications...", "レジストリへの変更を削除中...")
	Trans_Add("Freenet has been uninstalled!", "Freenetは削除されました!")

	; Shared strings (Launcher, Tray manager)
	Trans_Add("was unable to find the following file:", "はこのファイルを見付けられませんでした:")
	Trans_Add("Make sure that you are running", "")
	Trans_Add("from a Freenet installation directory.", "がFreenetインストールディレクトリで実行されていることを確認してください。")
	
	; Shared Strings (Launcher, Service starter, Service stopper, Tray manager)
	Trans_Add("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers.", "問題が発生し続けるなら、Freenetを再インストールするかエラーメッセージを開発者に送信してください。")
	
	; Launcher
	Trans_Add("Freenet Launcher", "Freenetランチャ")
	Trans_Add("Freenet Launcher error", "Freenetランチャエラー")
	Trans_Add("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.", "は'fproxy.port'の値を'freenet.ini'設定ファイルから読み取れませんでした。")

	; Shared strings (Service starter, Service stopper)
	Trans_Add("Command line options (only use one):", "コマンドラインオプション(一つのみ使う)")
	Trans_Add("Hide info messages", "情報メッセージを隠す")
	Trans_Add("Hide info and status messages", "情報メッセージと状況メッセージを隠す")
	Trans_Add("Return codes:", "返却コード:")
	Trans_Add("Success", "成功")
	Trans_Add("Error occurred", "エラー発生")
	Trans_Add("(no action)", "(ノーアクション)")
	
	; Service starter
	Trans_Add("(service started)", "(サービス開始)")
	Trans_Add("Service was already running", "サービスは既に稼働中です")
	Trans_Add("Freenet Starter", "Freenetスタータ")
	Trans_Add("The Freenet service is starting...", "Freenetサービスは起動中です...")
	Trans_Add("The Freenet service has been started!", "Freenetサービスが起動しました!")
	Trans_Add("The Freenet service is already running!", "Freenetサービスは既に起動しています!")
	Trans_Add("Freenet Starter error", "Freenetスタータエラー")
	
	; Service stopper
	Trans_Add("(service stopped)", "(サービス停止)")
	Trans_Add("Service was not running", "サービスは稼動していません")
	Trans_Add("Freenet Stopper", "Freenet停止装置")
	Trans_Add("The Freenet service is stopping...", "Freenetサービスを停止しています...")
	Trans_Add("The Freenet service has been stopped!", "Freenetサービスは停止しました!")
	Trans_Add("The Freenet service is already stopped!", "Freenetサービスは既に停止しています!")
	Trans_Add("Freenet Stopper error", "Freenet停止装置エラー")

	; Tray manager
	Trans_Add("Freenet Tray", "Freenetトレイ")
	Trans_Add("Launch Freenet", "Freenetを開く")
	Trans_Add("Start Freenet service", "Freenetサービスを開始")
	Trans_Add("Stop Freenet service", "Freenetサービスを停止")
	Trans_Add("Manual update check", "手動アップデート確認")
	Trans_Add("View logfile", "ログファイルを見る")
	Trans_Add("About", "")
	Trans_Add("Exit", "終了")
	Trans_Add("You can browse, start and stop Freenet along with other useful things from this tray icon.", "このトレイアイコンからFreenetをブラウズ・開始・停止したり他の有用な機能を利用できます。")
	Trans_Add("Left-click: Start/Browse Freenet", "左クリック: Freenetを開始/ブラウズ")
	Trans_Add("Right-click: Advanced menu", "右クリック: 詳細メニュー")
	Trans_Add("Warning: Using the manual update check will update Freenet and its helper tools from the official Freenet website.", "注意: 手動アップデート確認はFreenet公式サイトからFreenetとヘルパーツールを更新します。")
	Trans_Add("Freenet already has a secure built-in autoupdate feature that will keep itself up-to-date automatically.", "Freenetは既に安全で自動的に最新の状態を保つ、自動更新機能があります。")
	Trans_Add("You should only use this manual update check if your installation is broken or you need updated versions of the helper tools.", "インストールが破損している時かヘルパーツールの更新が必要な時にのみこの手動アップデート確認を使用してください。")
	Trans_Add("Freenet Windows Tray Manager", "Freenet Windows トレイマネージャ")
}
