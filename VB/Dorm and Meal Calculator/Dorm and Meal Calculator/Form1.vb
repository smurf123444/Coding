Public Class Form1
    Dim totCost As Integer = 0
    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs)
        Dim frmMainForm1 As New Form1
        frmMainForm1.ShowDialog()
    End Sub
    Private Sub btnExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        ' Closes the forms
        Me.Close()
    End Sub
    Private Sub btnCalculate_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        Dim AllenHall As Integer = 1500
        Dim PikeHall As Integer = 1600
        Dim FathingHall As Integer = 1200
        Dim UniversitySuites As Integer = 1800
        Dim Cost As Integer
        Select Case Dorms.SelectedIndex
            Case -1
                MessageBox.Show("Select a meal plan", "Error")
            Case 0
                Dorms.Text = AllenHall.ToString
                Cost = AllenHall
            Case 1
                Dorms.Text = PikeHall.ToString
                Cost = PikeHall
            Case 2
                Dorms.Text = FathingHall.ToString
                Cost = FathingHall
            Case 3
                Dorms.Text = UniversitySuites.ToString
                Cost = UniversitySuites
        End Select
    End Sub
    Public Sub btnSelectMeal_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Select Case Dorms.SelectedIndex
            Case -1
                MessageBox.Show("Select a Dormitory", "Error")
        End Select
        Dim frmMealPlans As New frmMealPlans
        frmMealPlans.ShowDialog()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        lblDormCost.Clear()
        lblMealcost.Clear()
    End Sub
End Class
