
Public Class MotorInput
    ' The Get Data procedure assigns values from the form to a motor object's properties
    Private Sub getData(ByVal objMotor As Motor)
        Try
            ' Get all Information
            objMotor.MotorID = txtId.Text
            objMotor.Desc = txtDesc.Text
            objMotor.MotorRPM = txtRPM.Text
            objMotor.MotorVoltage = txtVoltage.Text
            objMotor.MotorStatus = cboStatus.Text

        Catch ex As Exception
            MessageBox.Show("Enter proper values for all entries")

        End Try
    End Sub
    Private Sub resetData()
        Try
            ' Get all Information
            txtId.Text = ""
            txtDesc.Text = ""
            txtRPM.Text = ""
            txtVoltage.Text = ""
            cboStatus.Text = ""

        Catch ex As Exception
            MessageBox.Show("Error?")

        End Try
    End Sub

    ' ClearForm procedure
    Private Sub clearForm()
        txtDesc.Clear()
        txtId.Clear()
        txtRPM.Clear()
        cboStatus.Select()
        txtVoltage.Clear()
        ' Set focus
        txtId.Focus()
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Close the form
        Me.Close()
    End Sub

    Private Sub btnAdd_Click(sender As Object, e As EventArgs) Handles btnAdd.Click
        ' Create an instance of the motor class.
        If String.IsNullOrEmpty(txtId.Text) Then
            MessageBox.Show("Add an ID before proceeding...")
            resetData()

        Else
            Dim objmotor As New Motor
            ' Get data from the form.
            getData(objmotor)
            ' Add the motor object to the collection
            addMotor(objmotor)
            ' Display a confirmation message.
            MessageBox.Show("Motor record added successfully")
        End If
    End Sub

    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Create an instance of the display form
        Dim frmDisplay As New DisplayValues
        ' Display the form
        frmDisplay.ShowDialog()
    End Sub

    Private Sub MotorInput_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        cboStatus.Items.Add("ON")
        cboStatus.Items.Add("OFF")
        cboStatus.Items.Add("MNT")
        cboStatus.Items.Add("NA")
    End Sub
End Class

Public Class Motor
    ' Member variables for ID, Description, RPM, Voltage, Status.
    Public Motorid As String
    Public Description As String
    Public RPM As Double
    Public Voltage As Double
    Public Status As String


    ' Motor ID Property.

    Public Property Passid() As String
        Get
            If Motorid = Nothing Then
                MessageBox.Show("Nothing in MotorID Field Entered... Try Again")
            End If
            Return Motorid
        End Get
        Set(ByVal id As String)
            id = MotorInput.txtId.Text
        End Set
    End Property
    ' Description Property
    Public Property Desc() As String
        Get
            Return Description
        End Get
        Set(ByVal value As String)
            Description = MotorInput.txtDesc.Text
        End Set
    End Property
    ' RPM Property
    Public Property MotorRPM() As String
        Get
            Return RPM
        End Get
        Set(ByVal value As String)
            RPM = MotorInput.txtRPM.Text
        End Set
    End Property
    ' Voltage Property
    Public Property MotorVoltage() As String
        Get
            Return Voltage
        End Get
        Set(ByVal value As String)
            Voltage = MotorInput.txtVoltage.Text
        End Set
    End Property
    ' Status Property
    Public Property MotorStatus() As String
        Get
            Return Status
        End Get
        Set(ByVal value As String)
            Status = MotorInput.cboStatus.Text
        End Set
    End Property
    ' Overrides ToString Method


    Public Overrides Function ToString() As String
        Dim str As String
        str = "Motor ID: " & Passid & ", " & "Description: " & Description & ", " & "RPM: " & RPM & ", " & "Voltage: " & Voltage & ", " & "Status: " & Status
        Return str
    End Function

End Class