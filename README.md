Alternative installer for Freenet using Inno Setup further to [this](https://bugs.freenetproject.org/view.php?id=5456#c9883).

## ⚠ Status: Only for testing purpose ! ⚠ ##


### Current limitations: ###
* Doesn't check port availability ([ref](https://github.com/freenet/wininstaller-staging/blob/master/src/freenetinstaller/FreenetInstaller.ahk#L292))
* Doesn't set wrapper.java.maxmemory ([ref](https://github.com/freenet/wininstaller-staging/blob/master/src/freenetinstaller/FreenetInstaller.ahk#L341))
* No translations (but can always be manually imported [from current installer translations](https://github.com/freenet/wininstaller-staging/tree/master/src/include_translator))
* *maybe I forget other ?*