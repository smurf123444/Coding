Public Class frmMealPlans
    Dim totCost As Integer
    Dim hallcost As Integer
    Dim Results As Integer
    Private Sub btnClose_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClose.Click
        ' Close the form.
        Me.Close()
    End Sub
    Private Sub BtnEnter_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnEnter.Click
        Dim Meals7 As Integer = 1560
        Dim Meals14 As Integer = 2095
        Dim Unlimited As Integer = 2500

        Select Case ListBox1.SelectedIndex
            Case -1
                MessageBox.Show("Select a meal plan", "Error")
            Case 0
                Results = Meals7
            Case 1
                Results = Meals14
            Case 2
                Results = Unlimited
        End Select
        Form1.lblMealcost.Text = Results.ToString("C")

        'Print copied result as Percentage using ToString("p") Function
        'result.Text = ResultCopy.ToString("p")
        Call Calculate(hallcost)
    End Sub
    Public Sub Calculate(ByVal hallcost As Integer)
        Dim AllenHall As Integer = 2500
        Dim PikeHall As Integer = 2200
        Dim FathingHall As Integer = 2100
        Dim UniversitySuites As Integer = 2800
        Dim Cost As Integer
        Select Case Form1.Dorms.SelectedIndex
            Case 0
                Form1.lblDormCost.Text = AllenHall.ToString("C")
                Cost = AllenHall
            Case 1
                Form1.lblDormCost.Text = PikeHall.ToString("C")
                Cost = PikeHall
            Case 2
                Form1.lblDormCost.Text = FathingHall.ToString("C")
                Cost = FathingHall
            Case 3
                Form1.lblDormCost.Text = UniversitySuites.ToString("C")
                Cost = UniversitySuites
        End Select
        totCost = Cost + Results
        Form1.TextBox3.Text = totCost.ToString("C")
    End Sub
End Class