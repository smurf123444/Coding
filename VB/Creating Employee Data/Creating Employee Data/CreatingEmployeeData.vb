Imports System.IO
Public Class CreatingEmployeeData
    ' Declare global variables
    Dim fileName As String
    Dim firstName As String
    Dim middleName As String
    Dim lastName As String
    Dim employeeNumber As Integer
    Dim department As String
    Dim telephone As String
    Dim extension As Integer
    Dim emailAddress As String
    Dim valid As Boolean = True

    Private Sub EmployeeData_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        cboDepartment.Items.Add("Accounting")
        cboDepartment.Items.Add("Administration")
        cboDepartment.Items.Add("Marketing and MIS")
        cboDepartment.Items.Add("Sales")
        Do
            fileName = InputBox("Input Needed", "Enter the name of the file.")
            If System.IO.File.Exists(fileName) Then
                System.IO.File.Delete(fileName)
            End If
            If fileName = Nothing Or fileName = "" Then
                MessageBox.Show("No file name entered.")
            Else
                Exit Do
            End If
        Loop
    End Sub

    Private Sub btnSave_Click(sender As Object, e As EventArgs) Handles btnSave.Click
        valid = True ' reset value to account for prior invalid input
        If System.IO.File.Exists(fileName) Then
            System.IO.File.Delete(fileName)
        End If
        InputData()
        If valid = True Then
            WriteDataToFile()
        Else
            InputData()
        End If
    End Sub

    Private Sub btnClear_Click(sender As Object, e As EventArgs) Handles btnClear.Click
        txtFirstName.Text = ""
        txtMiddleName.Text = ""
        txtLastName.Text = ""
        txtEmployeeNumber.Text = ""
        cboDepartment.SelectedIndex = -1
        txtTelephone.Text = ""
        txtExtension.Text = ""
        txtEmail.Text = ""
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Ends the program when the user clicks on the Exit button
        End
    End Sub

    Sub InputData()
        ' populate the variables
        firstName = txtFirstName.Text
        If (firstName.ToUpper >= "A") And (firstName.ToUpper <= "Z") Then
            firstName = firstName
        Else
            valid = False
            MessageBox.Show("First Name must start with a letter")
        End If
        middleName = txtMiddleName.Text
        If (middleName.ToUpper >= "A") And (middleName.ToUpper <= "Z") Then
            middleName = middleName
        Else
            valid = False
            MessageBox.Show("Middle Name must start with a letter")
        End If
        lastName = txtLastName.Text
        If (lastName.ToUpper >= "A") And (lastName.ToUpper <= "Z") Then
            lastName = lastName
        Else
            valid = False
            MessageBox.Show("Last Name must start with a letter")
        End If
        Try
            employeeNumber = CInt(txtEmployeeNumber.Text)
        Catch
            MessageBox.Show("You must enter an integer for Employee Number.")
            valid = False
        End Try
        If cboDepartment.SelectedIndex <> -1 Then
            department = cboDepartment.Text
        Else
            valid = False
            MessageBox.Show("You must select a department.")
        End If
        telephone = txtTelephone.Text
        Try
            extension = CInt(txtExtension.Text)
        Catch
            MessageBox.Show("You must enter an integer for Extension.")
            valid = False
        End Try
        emailAddress = txtEmail.Text
    End Sub

    Sub WriteDataToFile()
        ' write the data to the file
        Dim sw As StreamWriter = File.AppendText(fileName)
        sw.WriteLine(firstName)
        sw.WriteLine(middleName)
        sw.WriteLine(lastName)
        sw.WriteLine(employeeNumber)
        sw.WriteLine(department)
        sw.WriteLine(telephone)
        sw.WriteLine(extension)
        sw.WriteLine(emailAddress)
        sw.Close()
        MessageBox.Show("Record Saved.  Please clear the form and enter additional records or exit.")
    End Sub
End Class

