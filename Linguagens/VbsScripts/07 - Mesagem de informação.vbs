Response = WshShl.Popup("This is a text message", ," Test Script", 5)
If Response = 4 Then
WshShl.Popup "You clicked on Retry"
End If