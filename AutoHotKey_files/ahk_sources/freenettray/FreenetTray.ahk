
;
; Freenet Windows Tray Manager by Zero3 (zero3 that-a-thingy zero3 that-dot-thingy dk) - http://freenetproject.org/
;

;
; Don't-touch-unless-you-know-what-you-are-doing settings
;
#NoEnv									; Recommended for performance and compatibility with future AutoHotkey releases
#Persistent								; Keep script alive even after we "return" from the main thread
#SingleInstance	ignore							; Only allow one instance at a time

#Include ..\include_translator\Include_Translator.ahk			; Include translator

_CurrentState := 0							; Initial running state

SendMode, Input								; Recommended for new scripts due to its superior speed and reliability
StringCaseSense, Off							; Treat A-Z as equal to a-z when comparing strings. Useful when dealing with folders, as Windows treat them as equals.
DetectHiddenWindows, On							; As we are going to manipulate a hidden widow, we need to actually look for it too
OnExit, ExitHandler							; No matter what reason we are exiting, run this first

;
; Customizable settings
;
_FileRequirements = installid.dat|freenet.ico|freenetoffline.ico|freenetlauncher.exe	; List of files that must exist for the tray manager to work. Paths are relative to own location.
_UpdateInterval := 15000								; (ms) How long between each wrapper crash check?
_WrapperTimeout := 30									; (seconds) How long before timing out waiting for the wrapper

;
; General init stuff
;
SetWorkingDir, %A_ScriptDir%						; Look for other files relative to our own location

FileDelete, freenet.pid
FileAppend, % DllCall("GetCurrentProcessId"), freenet.pid

InitTranslations()

Loop, Parse, _FileRequirements, |
{
	IfNotExist, %A_LoopField%
	{
		ExitWithError(Trans("Freenet Tray") " " Trans("was unable to find the following file:") "`n`n" A_LoopField "`n`n" Trans("Make sure that you are running") " " Trans("Freenet Tray") " " Trans("from a Freenet installation directory.") "`n`n" Trans("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers."))
	}	
}

FileReadLine, _InstallSuffix, installid.dat, 1				; Read our install suffix from installid.dat

;
; Fix up a tray icon and a tray menu
;
Menu, TRAY, NoStandard							; Remove default tray menu items
Menu, TRAY, Click, 1							; Activate default menu entry after a single click only (instead of default which most likely is doubleclick)
Menu, TRAY, Icon, freenetoffline.ico, , 1				; As we don't know if the node is running yet, show as offline
Menu, TRAY, Tip, % Trans("Freenet Tray") _InstallSuffix

Menu, TRAY, Add, % Trans("Open Freenet"), BrowseFreenet
Menu, TRAY, Add								; Separator
Menu, TRAY, Add, % Trans("Start Freenet"), Start
Menu, TRAY, Add, % Trans("Stop Freenet"), Stop
Menu, TRAY, Add								; Separator
Menu, TRAY, Add, % Trans("View logfile"), OpenLog
Menu, TRAY, Add								; Separator
Menu, TRAY, Add, % Trans("About"), About
Menu, TRAY, Add, % Trans("Exit"), Exit

; Initially disable these
Menu, TRAY, Disable, % Trans("Open Freenet")
Menu, TRAY, Disable, % Trans("Start Freenet")
Menu, TRAY, Disable, % Trans("Stop Freenet")

;
; Display a welcome balloontip if requested in the command line
;
_Arg1 = %1%
If (_Arg1 == "/welcome")
{
	TrayTip, % Trans("Freenet Tray"),% Trans("You can browse, start and stop Freenet along with other useful things from this tray icon.") "`n`n" Trans("Left-click: Start/Browse Freenet") "`n" Trans("Right-click: Advanced menu"), , 1	; 1 = Info icon
}

;
; Start wrapper
;
StartWrapper()

;
; Setup regular status checks and do one now. Then return to idle.
;
SetTimer, StatusUpdate, %_UpdateInterval%
DoStatusUpdate()

return

;
; Label subroutine: BrowseFreenet
;
BrowseFreenet:

RunWait, freenetlauncher.exe, , UseErrorLevel

return

;
; Label subroutine: Start
;
Start:

StartWrapper()

return

;
; Label subroutine: Stop
;
Stop:

StopWrapper()

return

;
; Label subroutine: OpenLog
;
OpenLog:

Run, wrapper\wrapper.log, , UseErrorLevel

return

;
; Label subroutine: About
;
About:

MsgBox, 64, % Trans("Freenet Tray"), % Trans("By:") " Christian Funder Sommerlund (Zero3)`n`nhttp://freenetproject.org/"	; 64 = Icon Asterisk (info)

return

;
; Label subroutine: Exit
;
Exit:

Menu, TRAY, Disable, % Trans("Exit")
ExitApp

return

;
; Label subroutine: ExitHandler
;
ExitHandler:

StopWrapper()
FileDelete, freenet.pid

ExitApp

;
; Label subroutine: StatusUpdate
;
StatusUpdate:

DoStatusUpdate()

return

;
; Helper functions
;
ExitWithError(_ErrorMessage)
{
	MsgBox, 16, % Trans("Freenet Tray"), %_ErrorMessage%		; 16 = Icon Hand (stop/error)
	ExitApp
}

DoStatusUpdate()
{
	global

	; Crash check
	If (_CurrentState == 1 && !IsWrapperRunning(_PID))
	{
		; Wrapper has crashed. Crap.
		ExitWithError(Trans("The Freenet wrapper terminated unexpectedly.") "`n`n" Trans("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers."))
	}
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

StartWrapper()
{
	global

	If (_CurrentState == 0)
	{
		_CurrentState := 1

		Menu, TRAY, Disable, % Trans("Start Freenet")
		Menu, TRAY, NoDefault

		Run, wrapper\freenetwrapper.exe -c wrapper.conf, , Hide UseErrorLevel, _PID

		If (ErrorLevel == "ERROR")
		{
			ExitWithError(Trans("Freenet Tray") " " Trans("was not able to start the Freenet node using the Freenet wrapper. Error code: ") "`n`n" A_LastError "`n`n" Trans("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers."))
		}

		Menu, TRAY, Icon, freenet.ico, , 1
		Menu, TRAY, Enable, % Trans("Open Freenet")
		Menu, TRAY, Enable, % Trans("Stop Freenet")
		Menu, TRAY, Default, % Trans("Open Freenet")
	}
}

StopWrapper()
{
	global

	If (_CurrentState == 1)
	{
		_CurrentState := 0

		Menu, TRAY, Icon, freenetoffline.ico, , 1
		Menu, TRAY, Disable, % Trans("Open Freenet")
		Menu, TRAY, Disable, % Trans("Stop Freenet")
		Menu, TRAY, NoDefault

		; Send CTRL + C to wrapper to make it shut down the node and itself
		ControlSend, , ^c, ahk_pid %_PID%

		; Check if wrapper is still running
		WinWaitClose, ahk_pid %_PID%, , _WrapperTimeout
		If (ErrorLevel == 1)
		{
			; Wrapper didn't exit within timeout. We shouldn't really force close the wrapper as we risk damaging the node - and we really want such issues reported anyway
			ExitWithError(Trans("The Freenet wrapper failed to stop Freenet.") " " Trans("Please manually terminate the wrapper and node, or restart your system.") "`n`n" Trans("If the problem keeps occurring, try reinstalling Freenet or report this error message to the developers."))
		}

		Menu, TRAY, Enable, % Trans("Start Freenet")
		Menu, TRAY, Default, % Trans("Start Freenet")
	}
}

