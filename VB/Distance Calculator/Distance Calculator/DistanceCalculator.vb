Public Class DistanceCalculator
    Private Sub Calculate_Click(sender As Object, e As EventArgs) Handles Calculate.Click
        Dim mile As Integer
        Dim time As Integer
        Dim i As Byte = 0
        Dim distance As Integer
        Try



            mile = CInt(InputBox("Enther the speed of the vehicle (MPH):", "Input Needed"))
        time = CInt(InputBox("Enther the amount of the time, in hours:", "Input Needed"))

            DataDisplay.Items.Add("Vehicle Speed: " & mile.ToString())
            DataDisplay.Items.Add("Time Traveled: " & time.ToString())
            DataDisplay.Items.Add(">Hours<" & " >Distance Traveled<")
            DataDisplay.Items.Add("---------------------------------------------")

            For i = 1 To CByte(time)
                distance = mile * i
                DataDisplay.Text = i.ToString()
                DataDisplay.Text = distance.ToString()
                DataDisplay.Items.Add(i.ToString() + ": " + distance.ToString())
            Next
        Catch
            MessageBox.Show("Only Numbers Aloud!")

        End Try
    End Sub

    Private Sub Quit_Click(sender As Object, e As EventArgs) Handles Quit.Click
        Close()
    End Sub
End Class
