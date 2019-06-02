Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs)

    End Sub

    Private Sub GroupBox1_Enter(sender As Object, e As EventArgs) Handles GroupBox1.Enter

    End Sub

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load

    End Sub

    Private Sub GroupBox2_Enter(sender As Object, e As EventArgs) Handles GroupBox2.Enter

    End Sub

    Private Sub Button4_Click(sender As Object, e As EventArgs) Handles Button4.Click
        Close()
    End Sub

    Private Sub Button3_Click(sender As Object, e As EventArgs) Handles Button3.Click
        TextBox1.Clear()
        TextBox2.Clear()
        TextBox3.Clear()
        TextBox4.Clear()
        TextBox5.Clear()
        TextBox6.Clear()
        TextBox7.Clear()
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Dim int1 As Integer = Nothing
        Dim int2 As Integer = Nothing
        Dim int3 As Integer = Nothing
        Dim solution As Integer = Nothing

        Dim int1AsInt As Integer
        Dim int2AsInt As Integer
        Dim int3AsInt As Integer
        If Integer.TryParse(int1, int1asint) Then
            int1AsInt = TextBox1.Text * 15
            TextBox6.Text = int1AsInt
        Else
            TextBox6.Text = "Not an Integer"
        End If
        If Integer.TryParse(int2, int2AsInt) Then
            int2AsInt = TextBox1.Text * 12
            TextBox5.Text = int2AsInt
        Else
            TextBox5.Text = "Not an Integer"
        End If
        If Integer.TryParse(int3, int3AsInt) Then
            int3AsInt = TextBox1.Text * 9
            TextBox4.Text = int3AsInt
        Else
            TextBox4.Text = "Not an Integer"
        End If





        solution = int1AsInt + int2AsInt + int3AsInt
        TextBox7.Text = solution
    End Sub
End Class
