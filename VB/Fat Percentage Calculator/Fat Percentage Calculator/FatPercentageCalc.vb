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
        'Calculates Fat into fatToCalories
        fatToCalories = Fat * 9
        'Calculates TotalCalories involved for Error Handling
        TotalCalories = fatToCalories + Calories
        'ErrorHandle For Fat ratio less than 30%
        ErrorCatch = 0.3
        'Calculating into Single for later use. 
        FatPercent = fatToCalories / Calories
        'Is fat greater than total calories?
        Try



        End Try
        If Val(fatToCalories) > Val(TotalCalories) Then
            MessageBox.Show("Calculation Error", "Calculation Error")
        End If
        If Val(caloriesInFood.Text) < 1 Then
            MessageBox.Show("Value not greater than 1", "Input Error")
        End If
        If FatPercent < ErrorCatch Then
                MessageBox.Show("Food is low in Fat", "Low Fat")
            End If
            'Is the Value of calories less than 0 and 1?
            If Val(caloriesInFood.Text) < 1 Then
                MessageBox.Show("Value not greater than 1", "Input Error")
            End If
        'is fat less then 30% of total calories?
        'copy result into new area for mutation
        Catch ex As Exception
        ResultCopy = FatPercent
        'Print copied result as Percentage using ToString("p") Function
        result.Text = ResultCopy.ToString("p")
    End Sub
End Class
