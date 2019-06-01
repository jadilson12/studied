Set objshell = createobject("wscript.shell")
Set ping = objshell.exec("cmd /c ipconfig /all")
Msgbox ping.stdout.readall
