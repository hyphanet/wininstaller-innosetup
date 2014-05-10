# Freenet Tray Application

This is a replacement for the AutoHotKey tray application. It aims to have more robust localization support, not be false-positived by overzelous antivirus hueristics that hate scripting languages, and have a few more features: setting which browser to open and hiding the tray icon.

Allows one instance open at a time. If another instance is given a command line command it will pass it to the existing instance. If not it will prompt the existing instance to show its icon. When left clicked it opens Freenet as in the top menu option.

It uses .NET 3.5 because it is [distributed with 7](http://msdn.microsoft.com/en-us/library/bb822049%28v=vs.110%29.aspx), which is [still supported](http://windows.microsoft.com/en-us/windows/lifecycle) and has a significant market share unlike Vista. 3.0 doesn't include some useful things. Existing installs can continue to use the old application. For UI it uses Winforms because it is [supported by mono](http://www.mono-project.com/Compatibility) which makes building on Linux much more straightforward.

TODO:
	Can the ntservice parts of wrapper.conf be removed?
	Installer should set language in freenet.ini to the one it was told to use.

TODO:
	How to handle this upgrade?
	Bundle .NET runtime / redistributable? Is XP worth supporting? Yeah - 20% market share still. :( Still, they use the old one because XP did not ship with .NET.
	The Designer resources are not compiled into the executable? They're in a separate DLL. I'd like a single file.

TODO:
	Disable start and stop menu entries when Freenet is not running.
	How to interface with the wrapper?
	How to check port availability? Is there a need to?
	How to read the registry to see where Freenet is installed? Is it sufficient to assume the tray is in the application directory?
	How to open notepad with a file?

Menu items | command line options:

## Open Freenet | \open

Open a browser in privacy mode to Freenet, if possible. The default preference is [same as AHK app], but a specific browser or command can be set as well. If Freenet is not running it is started.

TODO: Should this be "Open Freenet dashboard" instead?

## Start Freenet | \start

Start Freenet.

## Stop Freenet | \stop

Stop Freenet.

## View logs | \logs

Open `wrapper.log` and `freenet-latest.log` in notepad. TODO: Command line escaping / injection avoidance when invoking other applications?

## Preferences | \preferences

Set the browser to use, and whether to start the icon or start Freenet on startup.

## Hide icon | \hide

Hide the icon if Freenet is running. This menu option is not shown when Freenet is running.

## Exit | \exit

Stop Freenet if it is running and close the tray application.

TODO: On tray icon shutdown, shut down Freenet too. er... that'll just happen, right? Because the icon launched it? Will asking the wrapper to do it allow a nicer shutdown?
