Set objShell = CreateObject("WScript.Shell")
strCommand = "cmd /k netsh interface ip show config"
objShell.Run strCommand, 1