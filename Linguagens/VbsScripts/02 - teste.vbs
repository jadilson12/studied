Dim myValue
myValue = Int(Rnd*l0+l) 'generate random number between 1 & 10 
If (myValue > 5) Then
	WScript.Echo "Greater than or equal to 5"
Elseif myValue = 2
	WScript.Echo "2"
Else
	WScript.Echo "Less than 5 and not 2"
End If