Public Class HospitalCharges


    Function CalcStayCharges() As Decimal
        CalcStayCharges = (CDec(TxtLengthOfStay.Text) * 350)
    End Function

    Function CalcMiscCharges() As Decimal
        CalcMiscCharges = CDec(TxtMedication.Text) + CDec(txtLabFees.Text) + CDec(TxtPhysical.Text) + CDec(txtSurgicalCharges.Text)
    End Function

    Function CalcTotalCharges() As Decimal
        CalcTotalCharges = (CalcStayCharges() + CalcMiscCharges())
    End Function

    Function ValidateInputFields() As Decimal
        'Checking if empty
        If String.IsNullOrEmpty(TxtLengthOfStay.Text) Or String.IsNullOrEmpty(TxtMedication.Text) Or String.IsNullOrEmpty(txtSurgicalCharges.Text) Or String.IsNullOrEmpty(txtLabFees.Text) Or String.IsNullOrEmpty(TxtPhysical.Text) Then
            MessageBox.Show("Cannot be Empty")
            Return 1
        Else
            Return 0
        End If
    End Function

    Private Sub Clear_Click(sender As Object, e As EventArgs) Handles Clear.Click
        ' Clear Text Boxes
        TxtLengthOfStay.Clear()
        TxtMedication.Clear()
        txtSurgicalCharges.Clear()
        txtLabFees.Clear()
        TxtPhysical.Clear()
        lblTotalCost.Text = String.Empty
        lblTotalCost.Text = String.Empty
    End Sub

    Private Sub Exit_Click(sender As Object, e As EventArgs) Handles Quit.Click
        ' Close 
        Me.Close()
    End Sub

    Private Sub Calculate_Click(sender As Object, e As EventArgs) Handles Calculate.Click
        Dim decTotal As Decimal
        'class level declaration
        Const DayRate As Decimal = 350D 'cost per day
        'declare variables
        Dim Physical As Decimal
        Dim Surgical As Decimal
        Dim Lab As Decimal
        Dim Medication As Decimal
        Dim Stay As Decimal
        Try
            If ValidateInputFields() Then
                lblTotalCost.Text = String.Empty
                'Set up copy of CalcTotalCharges to be mutated ToString("c")
            Else
                decTotal = CalcTotalCharges()
                lblTotalCost.Text = decTotal.ToString("c")
            End If
            'Copy the scores into the variables
            Stay = CDec(TxtLengthOfStay.Text) * DayRate
            Medication = CDec(TxtMedication.Text)
            Surgical = CDec(txtSurgicalCharges.Text)
            Lab = CDec(txtLabFees.Text)
            Physical = CDec(TxtPhysical.Text)
            'Find out if box enteries are negative or not
            If Convert.ToDecimal(Lab) < 0 Then
                MessageBox.Show("No Negative Numbers", "Try Agian")
                Return
                txtLabFees.SelectAll()
            ElseIf Convert.ToDecimal(Medication) < 0 Then
                MessageBox.Show("No Negative Numbers", "Try Agian")
                Return
                TxtMedication.SelectAll()
            ElseIf Convert.ToDecimal(Surgical) < 0 Then
                MessageBox.Show("No Negative Numbers", "Try Agian")
                Return
                txtSurgicalCharges.SelectAll()
            ElseIf Convert.ToDecimal(Physical) < 0 Then
                MessageBox.Show("No Negative Numbers", "Try Agian")
                Return
                TxtPhysical.SelectAll()
            ElseIf Convert.ToDecimal(Stay) < 0 Then
                MessageBox.Show("No Negative Numbers", "Try Agian")
                Return
                TxtLengthOfStay.SelectAll()
            End If
            'Checks Input if Valid

        Catch
            MessageBox.Show("Please enter numeric values")
        End Try
    End Sub
End Class