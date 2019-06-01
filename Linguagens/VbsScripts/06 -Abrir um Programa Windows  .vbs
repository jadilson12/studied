Dim myValue
myValue = Int(Rnd*10+1) 'generate random number between 1 & 10 
If (myValue <= 5) Then
WScript. Echo "Greater than or equal to 5"
Else
WScript. Echo "Less than 5"
End If