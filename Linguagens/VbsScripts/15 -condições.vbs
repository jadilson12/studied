Dim myValue
myValue = Int(Rnd*lO+l) 'generate random number between 1 & 10
Select Case myValue
Case 2
	WScript.Echo "2"
Case 5
	WScript.Echo "5"
Case 9
	WScript.Echo "9"
Case Else
	WScript.Echo "Not 2, 5 or 9"
End Select