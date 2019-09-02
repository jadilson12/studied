Set objShell = CreateObject("WScript.Shell")
strCommand = "cmd /k netstat -a"
objShell.Run strCommand, 1
