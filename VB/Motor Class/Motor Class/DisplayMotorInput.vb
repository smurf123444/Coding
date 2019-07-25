
Public Class DisplayMotorInput
    ' The Get Data procedure assigns values from the form to a motor object's properties
    Private Sub getData(ByVal objMotor As Motor)
        If Not String.IsNullOrEmpty(txtId.Text) Then
            Try
                ' Get all Information
                objMotor.Motorid = txtId.Text
                'error check for fun
            Catch ex As Exception
                MessageBox.Show("ERROR3: you broke it")
            End Try
            'error check for fun
        Else
            MessageBox.Show("ERROR2: Enter correct ID value.")
        End If
        If Not String.IsNullOrEmpty(txtDesc.Text) Then
            Try
                ' Get all Information
                objMotor.Description = txtDesc.Text
                'error check for fun
            Catch ex As Exception
                MessageBox.Show("ERROR3: you broke it")

            End Try
            'error check for fun
        Else
            MessageBox.Show("ERROR2: Enter correct Description value.")
        End If
        If Not String.IsNullOrEmpty(txtRPM.Text) Then
            Try
                objMotor.MotorRPM = txtRPM.Text
            Catch ex As Exception
                'error check for fun
                MessageBox.Show("ERROR3: you broke it")
            End Try
            'error check for fun
        Else
            MessageBox.Show("ERROR2: Enter correct RPM value.")
        End If
        If Not String.IsNullOrEmpty(txtVoltage.Text) Then
            Try
                objMotor.MotorVoltage = txtVoltage.Text
            Catch ex As Exception
                'error check for fun
                MessageBox.Show("ERROR3: you broke it")

            End Try
        Else
            'error check for fun
            MessageBox.Show("ERROR2: Enter correct Voltage value.")
        End If
        If Not String.IsNullOrEmpty(cboStatus.Text) Then
            Try
                objMotor.MotorStatus = cboStatus.Text

            Catch ex As Exception
                'error check for fun
                MessageBox.Show("ERROR3: you broke it")
            End Try
        Else
            'error check for fun
            MessageBox.Show("ERROR2: Enter correct Status value.")
        End If
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
            'error check for real yo
            MessageBox.Show("ERROR1: Add an ID before proceeding...")
        ElseIf String.IsNullOrEmpty(txtDesc.Text) Then
            'error check for real yo
            MessageBox.Show("ERROR1: Add an Description before proceeding...")
        ElseIf String.IsNullOrEmpty(txtRPM.Text) Then
            'error check for real yo
            MessageBox.Show("ERROR1: Add an RPM before proceeding...")
        ElseIf String.IsNullOrEmpty(txtVoltage.Text) Then
            'error check for real yo
            MessageBox.Show("ERROR1: Add an Voltage before proceeding...")
        ElseIf String.IsNullOrEmpty(cboStatus.Text) Then
            'error check for real yo
            MessageBox.Show("ERROR1: Add an Status before proceeding...")
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
        Dim frmDisplay As New DisplayMotorCollection
        ' Display the form
        frmDisplay.ShowDialog()
    End Sub
    Private Sub MotorInput_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'initialize combobox status with items
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
            Return Motorid
        End Get
        Set(ByVal id As String)
            id = DisplayMotorInput.txtId.Text
        End Set
    End Property
    ' Description Property
    Public Property Desc() As String
        Get
            Return Description
        End Get
        Set(ByVal value As String)
            Description = DisplayMotorInput.txtDesc.Text
        End Set
    End Property
    ' RPM Property
    Public Property MotorRPM() As String
        Get
            Return RPM
        End Get
        Set(ByVal value As String)
            RPM = DisplayMotorInput.txtRPM.Text
        End Set
    End Property
    ' Voltage Property
    Public Property MotorVoltage() As String
        Get
            Return Voltage
        End Get
        Set(ByVal value As String)
            Voltage = DisplayMotorInput.txtVoltage.Text
        End Set
    End Property
    ' Status Property
    Public Property MotorStatus() As String
        Get
            Return Status
        End Get
        Set(ByVal value As String)
            Status = DisplayMotorInput.cboStatus.Text
        End Set
    End Property
    ' Overrides ToString Method
    'parse information and return output 
    Public Overrides Function ToString() As String
        Dim str As String
        str = "Motor ID: " & Passid & ", " & "Description: " & Description & ", " & "RPM: " & RPM & ", " & "Voltage: " & Voltage & ", " & "Status: " & Status
        Return str
    End Function
End Class