
;
; Windows Freenet Launcher by Zero3 (zero3 that-a-thingy zero3 that-dot-thingy dk) - http://freenetproject.org/
;

;
; Don't-touch-unless-you-know-what-you-are-doing settings
;
#NoEnv								; Recommended for performance and compatibility with future AutoHotkey releases
#NoTrayIcon							; We won't need this...
#SingleInstance	ignore						; Only allow one instance at any given time

#Include ..\include_translator\Include_Translator.ahk		; Include translator

SendMode, Input							; Recommended for new scripts due to its superior speed and reliability
StringCaseSense, Off						; Treat A-Z as equal to a-z when comparing strings. Useful when dealing with folders, as Windows treat them as equals.
SetWorkingDir, %A_ScriptDir%					; Look for other files relative to our own location

;
; Customizable settings
;
_SecureSuffix = ?incognito=true					; fproxy address suffix for incognito-enabled browsers. Will make fproxy hide warning messages about it.
_FileRequirements = freenet.exe|freenet.ini			; List of files that must exist for the launcher to work. Paths are relative to own location.
_CheckInterval := 3000						; (ms) How long to wait between each check to see if fproxy is running yet?
_CheckTimes := 10						; How many times to check if fproxy is running? (Timeout then becomes _CheckTimes * _CheckInterval)

;
; General init stuff
;
InitTranslations()

Loop, Parse, _FileRequirements, |
{
	IfNotExist, %A_LoopField%
	{
		PopupErrorMessage(Trans("Freenet Launcher") " " Trans("was unable to find the following file:") "`n`n" A_LoopField "`n`n" Trans("Make sure that you are running") " " Trans("Freenet Launcher") " " Trans("from a Freenet installation directory.") "`n`n" Trans("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers."))
		ExitApp, 1
	}	
}

;
; Make sure that node is running
;
FileRead, _TrayPID, freenet.pid

If (ErrorLevel <> 0 || !IsWrapperRunning(_TrayPID))
{
	Run, freenet.exe, , UseErrorLevel
}

;
; Find fproxy port and compile fproxy URL
;
FileRead, _INI, freenet.ini
If (RegExMatch(_INI, "i)fproxy.port=([0-9]{1,5})", _Port) == 0 || !_Port1)
{
	PopupErrorMessage(Trans("Freenet Launcher") " " Trans("was unable to read the 'fproxy.port' value from the 'freenet.ini' configuration file.") "`n`n" Trans("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers."))
	ExitApp, 1
}
_URL = http://localhost:%_Port1%/ ; Windows 8 needs localhost not 127.0.0.1, but it does HAVE an IPv4 localhost adapter, the issue is in IE

;
; Wait for the node HTTP interface to become available
;

While (TestPortAvailability(_Port1))
{
	If (A_Index >= _CheckTimes)
	{
		PopupErrorMessage(Trans("Freenet Launcher") " " Trans("was unable to connect to the Freenet node at port ") _Port1 "." "`n`n" Trans("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers."))
		ExitApp, 1
	}

	Sleep, _CheckInterval
}

;
; Try browser: Google Chrome in incognito mode (Tested versions: 1.0.154)
;
; Note: Older versions of Google Chrome suffer from a bug that causes launching with the incognito option to open a new window without incognito in some cases. See http://code.google.com/p/chromium/issues/detail?id=9636 or our bug 3376.
;
RegRead, _ChromeInstallDir, HKEY_CURRENT_USER, Software\Microsoft\Windows\CurrentVersion\Uninstall\Google Chrome, InstallLocation

If (!ErrorLevel && _ChromeInstallDir <> "")
{
	_ChromePath = %_ChromeInstallDir%\chrome.exe

	IfExist, %_ChromePath%
	{
		Run, %_ChromePath% --incognito "%_URL%%_SecureSuffix%", , UseErrorLevel	; All versions of Chrome should support incognito mode
		ExitApp, 0
	}
}

;
; Try browser: Mozilla Firfox in Private browsing mode (Tested versions: 3.6)
;
RegRead, _FFVersion, HKEY_LOCAL_MACHINE, Software\Mozilla\Mozilla Firefox, CurrentVersion

If (!ErrorLevel && _FFVersion <> "")
{
	StringSplit, _FFVersionNum, _FFVersion, %A_Space%	; Strip language suffix from version string (example: "3.6 (en-GB)")

	If (_FFVersionNum1 >= "3.6.19")				; Private browsing supported since version 3.6, but 3.6.18 and earlier do bad things, specifically dumping all tabs without saving them
	{
		RegRead, _FFPath, HKEY_LOCAL_MACHINE, Software\Mozilla\Mozilla Firefox\%_FFVersion%\Main, PathToExe

		If (!ErrorLevel && _FFPath <> "" && FileExist(_FFPath))
		{
			Run, %_FFPath% -private "%_URL%%_SecureSuffix%", , UseErrorLevel
			ExitApp, 0
		}
	}
}

;
; Try browser: Mozilla Firefox (Tested versions: 3.0, 3.5)
;
RegRead, _FFVersion, HKEY_LOCAL_MACHINE, Software\Mozilla\Mozilla Firefox, CurrentVersion

If (!ErrorLevel && _FFVersion <> "")
{
	RegRead, _FFPath, HKEY_LOCAL_MACHINE, Software\Mozilla\Mozilla Firefox\%_FFVersion%\Main, PathToExe

	If (!ErrorLevel && _FFPath <> "" && FileExist(_FFPath))
	{
		Run, %_FFPath% "%_URL%", , UseErrorLevel
		ExitApp, 0
	}
}

;
; Try browser: Opera (Tested versions: 12.15)
;
RegRead, _OperaPath, HKEY_LOCAL_MACHINE, Software\Clients\StartMenuInternet\Opera\shell\open\command

If (!ErrorLevel && _OperaPath <> "")
{
	StringReplace, _OperaPath, _OperaPath, ", , All

	IfExist, %_OperaPath%
	{
		Run, %_OperaPath% -newprivatetab "%_URL%%_SecureSuffix%", , UseErrorLevel
		ExitApp, 0
	}
}

;
; Try browser: Opera (Tested versions: 9.6)
;
RegRead, _OperaPath, HKEY_LOCAL_MACHINE, Software\Clients\StartMenuInternet\Opera.exe\shell\open\command

If (!ErrorLevel && _OperaPath <> "")
{
	StringReplace, _OperaPath, _OperaPath, ", , All

	IfExist, %_OperaPath%
	{
		Run, %_OperaPath% "%_URL%", , UseErrorLevel
		ExitApp, 0
	}
}

;
; No prioritized browser found. Fall back to system URL call.
;
Run, %_URL%, , UseErrorLevel
ExitApp, 1

;
; Helper functions
;
PopupErrorMessage(_ErrorMessage)
{
	MsgBox, 16, % Trans("Freenet Launcher error"), %_ErrorMessage%	; 16 = Icon Hand (stop/error)
}

IsWrapperRunning(_PID)
{
	Process, Exist, %_PID%

	If (ErrorLevel == 0)
	{
		Return, 0
	}
	Else
	{
		Return, 1
	}
}

TestPortAvailability(_Port)
{
	global

	VarSetCapacity(wsaData, 32)
	_Result := DllCall("Ws2_32\WSAStartup", "UShort", 0x0002, "UInt", &wsaData)				; Request Winsock 2.0 (0x0002)

	If (ErrorLevel)
	{
		PopupErrorMessage(Trans("Freenet Launcher") " " Trans("was not able to create a Winsock 2.0 socket for port availability testing."))
		ExitApp, 1
	}
	Else If (_Result)											; Non-zero, which means it failed (most Winsock functions return 0 upon success)
	{
		_Error := DllCall("Ws2_32\WSAGetLastError")
		DllCall("Ws2_32\WSACleanup")
		PopupErrorMessage(Trans("Freenet Launcher") " " Trans("was not able to create a Winsock 2.0 socket for port availability testing.") " (" Trans("Error: ") _Error ")")
		ExitApp, 1
	}

	AF_INET = 2
	SOCK_STREAM = 1
	IPPROTO_TCP = 6

	_Socket := DllCall("Ws2_32\socket", "Int", AF_INET, "Int", SOCK_STREAM, "Int", IPPROTO_TCP)
	if (_Socket = -1)
	{
		_Error := DllCall("Ws2_32\WSAGetLastError")
		DllCall("Ws2_32\WSACleanup")
		PopupErrorMessage(Trans("Freenet Launcher") " " Trans("was not able to create a Winsock 2.0 socket for port availability testing.") " (" Trans("Error: ") _Error ")")
		ExitApp, 1
	}

	SizeOfSocketAddress = 16
	VarSetCapacity(SocketAddress, SizeOfSocketAddress)
	InsertInteger(2, SocketAddress, 0, AF_INET)
	InsertInteger(DllCall("Ws2_32\htons", "UShort", _Port), SocketAddress, 2, 2)
	InsertInteger(DllCall("Ws2_32\inet_addr", "AStr", "127.0.0.1"), SocketAddress, 4, 4) ; this does not take a DNS name, so use 127.blah

	If DllCall("Ws2_32\connect", "UInt", _Socket, "UInt", &SocketAddress, "Int", SizeOfSocketAddress)
	{
		_Available := 1											; DllCall returned non-zero, e.g. fail - which means port is most likely free
	}
	Else
	{
		_Available := 0
	}

	DllCall("Ws2_32\WSACleanup")										; Do a cleanup (including closing of any open sockets)
	return _Available
}

InsertInteger(pInteger, ByRef pDest, pOffset = 0, pSize = 4)
{
	global

	Loop, %pSize%												; Copy each byte in the integer into the structure as raw binary data.
	{
		DllCall("RtlFillMemory", "UInt", &pDest + pOffset + A_Index-1, "UInt", 1, "UChar", pInteger >> 8*(A_Index-1) & 0xFF)
	}

}
