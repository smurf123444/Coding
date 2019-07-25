Public Class DisplayMotorCollection
    Private Sub disp_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        ' Declare an object variable that can reference a motor object
        Dim objmotor As Motor
        ' Get each object in the collection and add its data to the list box
        For Each objmotor In motorCollection
            'uses overrided tostring function defined in MotorInput.VB. 
            'This is then used to loop through each added item and list them with corresponding text.
            lstOut.Items.Add(objmotor.ToString())
        Next
    End Sub
    Private Sub btnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        Me.Close()
    End Sub
End Class