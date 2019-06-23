Public Class Form1
    Const RowA As Decimal = 15D
    Const RowB As Decimal = 12D
    Const RowC As Decimal = 9D
    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Close()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        TextBox1.Clear()
        TextBox2.Clear()
        TextBox3.Clear()
        TextBox4.Text = String.Empty
        TextBox5.Text = String.Empty
        TextBox6.Text = String.Empty
        TextBox7.Text = String.Empty
        TextBox1.Focus()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim First As Decimal
        Dim Second As Decimal
        Dim Third As Decimal
        Dim Total As Decimal
        Try


            'Calculate A seats  and display revenue for class A seats 
            First = CDec(TextBox1.Text) * RowA
            TextBox6.Text = First.ToString("c")
            'Calculate B seats and display revenue for class A seats 
            Second = CDec(TextBox2.Text) * RowB
            TextBox5.Text = Second.ToString("c")
            'Calculate C seats and display revenue for class A seats 
            Third = CDec(TextBox3.Text) * RowC
            TextBox4.Text = Third.ToString("c")
            'Calculate Total revenue for all seats 
            Total = First + Second + Third
            TextBox7.Text = Total.ToString("c")

        Catch
            MessageBox.Show("Only Numbers Aloud!")

        End Try
    End Sub
End Class
