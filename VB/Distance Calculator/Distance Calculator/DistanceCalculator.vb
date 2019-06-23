Public Class DistanceCalculator
    Private Sub Calculate_Click(sender As Object, e As EventArgs) Handles Calculate.Click
        'take integers of mile and time
        Dim mile As Integer
        Dim time As Integer
        'use index for loop in form of a Byte
        Dim i As Byte = 0
        'store the answer in distance
        Dim distance As Integer
        'set up an area for computation and error catch
        Try


            'take user input for mile and time
            mile = CInt(InputBox("Enther the speed of the vehicle (MPH):", "Input Needed"))
            time = CInt(InputBox("Enther the amount of the time, in hours:", "Input Needed"))
            'display items in List box
            DataDisplay.Items.Add("Vehicle Speed: " & mile.ToString())
            DataDisplay.Items.Add("Time Traveled: " & time.ToString())
            DataDisplay.Items.Add("Hours" & "       Distance Traveled")
            DataDisplay.Items.Add("---------------------------------------------")
            'set up for loop at first index to the max amount of time
            For i = 1 To CByte(time)
                'calculate the distance for each hour using the index (i)
                distance = mile * i
                'parse and display information
                DataDisplay.Items.Add(i.ToString() + ":              " + distance.ToString())
                'continue the loop
            Next
            'at end of loop, display an empty space
            DataDisplay.Items.Add("")
            'then display the total distance.
            DataDisplay.Items.Add("Total Distance:" & distance.ToString())
        Catch
            'if the computation fails (usually false input) display messageBox
            MessageBox.Show("Only Numbers Aloud!")

        End Try
    End Sub
    'quit form
    Private Sub Quit_Click(sender As Object, e As EventArgs) Handles Quit.Click
        Close()
    End Sub

End Class
