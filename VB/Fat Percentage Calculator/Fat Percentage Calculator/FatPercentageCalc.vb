Public Class FatPercentageForm
    Private Sub clear_Click(sender As Object, e As EventArgs) Handles clear.Click
        caloriesInFood.Clear()
        fatGramsInFood.Clear()
        result.Clear()

    End Sub

    Private Sub quit_Click(sender As Object, e As EventArgs) Handles quit.Click
        Close()
    End Sub

    Private Sub calculate_Click(sender As Object, e As EventArgs) Handles calculate.Click
        Dim ResultCopy As Decimal
        Dim Calories As Single
        Dim Fat As Single
        Dim fatToCalories As Single
        Dim FatPercent As Single
        Dim TotalCalories As Single
        Dim ErrorCatch As Decimal
        'Calories.Text to Single
        Calories = Val(caloriesInFood.Text)
        'Fat.Text to Single
        Fat = Val(fatGramsInFood.Text)
        'Calculates Fat to Calories
        fatToCalories = Fat * 9
        'ErrorHandle For Fat ratio less than 30%
        ErrorCatch = 0.3
        'Calculating into Single for later use. 
        FatPercent = fatToCalories / Calories
        Try
            'Is fat greater than total calories?
            If Val(Fat) > Val(Calories) Then
                MessageBox.Show("Fat cannot be greater than Calories", "Calculation Error")
                result.Clear()
            Else
                If Val(caloriesInFood.Text) < 1 Or Val(fatGramsInFood.Text) < 1 Then
                    MessageBox.Show("Value not greater than 1", "Input Error")
                    result.Clear()
                Else
                    If FatPercent < ErrorCatch Then
                        MessageBox.Show("Food is low in Fat", "Low Fat")
                        'copy result into new area for mutation
                        ResultCopy = FatPercent
                        'Print copied result as Percentage using ToString("p") Function
                        result.Text = ResultCopy.ToString("p")
                    Else
                        'copy result into new area for mutation
                        ResultCopy = FatPercent
                        'Print copied result as Percentage using ToString("p") Function
                        result.Text = ResultCopy.ToString("p")
                    End If
                End If
            End If
            'Calculates TotalCalories involved for Error Handling
            TotalCalories = fatToCalories + Calories
            'is fat less then 30% of total calories?
        Catch
            MessageBox.Show("Only Numbers Aloud!")
        End Try
    End Sub
    Private Sub result_TextChanged(sender As Object, e As EventArgs) Handles result.TextChanged
        'disables input or deletion of result text.
        result.ReadOnly = True
    End Sub
End Class