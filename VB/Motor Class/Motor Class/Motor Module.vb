Module Motor_Module
    ' Collection for motor list
    Public motorCollection As New Collection
    ' The addMotor or procedure adds a motor object to the collection and uses the ID property as the key.
    Public Sub addMotor(ByVal objMotor As Motor)
        Try
            If motorCollection.Contains(objMotor.Motorid) Then
                motorCollection.Remove(objMotor.Motorid)
                motorCollection.Add(objMotor, objMotor.Motorid)
                MessageBox.Show("Replaced")
            Else
                motorCollection.Add(objMotor, objMotor.Motorid)
                MessageBox.Show("New")
            End If
        Catch ex As Exception
            MessageBox.Show("Somethings Wrong")
        End Try
    End Sub
End Module
