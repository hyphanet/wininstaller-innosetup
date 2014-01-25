
;
; Freenet Windows Installer translation file synchronizer
;
; This script should be run every time the translation template has been updated. It will basically create new translation files
; based on the template and pretranslate all strings that already are translated in the current translations.
;
; This allow translators to simply check their translation file for non-translated strings from time to time, while this script
; will make sure that new/moved/modified/removed/... strings automatically are updated in the individual translation files.
;

#NoEnv				; Recommended for performance and compatibility with future AutoHotkey releases.
SendMode Input			; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%	; Ensures a consistent starting directory.

_TranslationsUpdated := 0

IfNotExist, TranslationTemplate.inc
{
	MsgBox, Error: TranslationTemplate.inc doesn't exist in the current directory! Quitting.
	ExitApp
}

Loop, Include_Lang_*.inc
{
	SplitPath, A_LoopFileFullPath, , , , _OldTranslationName
	_NewTranslationPath = %_OldTranslationName%_updated.inc

	IfExist, %_NewTranslationPath%
	{
		FileDelete, %_NewTranslationPath%
	}
	
	FileRead, _OldTranslation, %A_LoopFileFullPath%

	Loop, Read, %A_LoopFileFullPath%, %_NewTranslationPath%
	{
		If (RegExMatch(A_LoopReadLine, "^[\s]*\{[\s]*"))
		{
			Break
		}
		Else
		{
			FileAppend, %A_LoopReadLine%`n
		}
	}

	_StartBracketFound := 0
	
	Loop, Read, TranslationTemplate.inc, %_NewTranslationPath%
	{
		If (!_StartBracketFound && RegExMatch(A_LoopReadLine, "^[\s]*\{[\s]*"))
		{
			_StartBracketFound := 1
		}

		If (_StartBracketFound)
		{
			_Newline := A_LoopReadLine
			
			If (RegExMatch(_Newline, "^[\s]*Trans_Add\(""([^""]+)""[\s]*,[\s]*""""\)", _OriginalString))
			{
				If (RegExMatch(_OldTranslation, "m`a)^[\s]*Trans_Add\(""\Q" _OriginalString1 "\E""[\s]*,[\s]*""([^""]+)""\)", _TranslatedString))
				{
					_Newline := RegExReplace(_Newline, "^([\s]*Trans_Add\(""[^""]+""[\s]*,[\s]*"")(""\))", "$1" _TranslatedString1 "$2")
				}
			}
	
			FileAppend, %_Newline%`n
		}
	}

	_TranslationsUpdated++
}

MsgBox, Done!`n`n%_TranslationsUpdated% translations were processed. Please manually check the "_updated" files and replace the original ones if everything looks okay.