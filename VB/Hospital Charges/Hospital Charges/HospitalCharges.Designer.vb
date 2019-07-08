<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class HospitalCharges
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.ListBox1 = New System.Windows.Forms.ListBox()
        Me.lblTotalCost = New System.Windows.Forms.Label()
        Me.Calculate = New System.Windows.Forms.Button()
        Me.Clear = New System.Windows.Forms.Button()
        Me.Quit = New System.Windows.Forms.Button()
        Me.TxtLengthOfStay = New System.Windows.Forms.TextBox()
        Me.TxtMedication = New System.Windows.Forms.TextBox()
        Me.txtSurgicalCharges = New System.Windows.Forms.TextBox()
        Me.txtLabFees = New System.Windows.Forms.TextBox()
        Me.TxtPhysical = New System.Windows.Forms.TextBox()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'ListBox1
        '
        Me.ListBox1.BackColor = System.Drawing.SystemColors.WindowFrame
        Me.ListBox1.FormattingEnabled = True
        Me.ListBox1.Location = New System.Drawing.Point(12, 12)
        Me.ListBox1.Name = "ListBox1"
        Me.ListBox1.Size = New System.Drawing.Size(391, 212)
        Me.ListBox1.TabIndex = 0
        '
        'lblTotalCost
        '
        Me.lblTotalCost.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblTotalCost.Location = New System.Drawing.Point(13, 227)
        Me.lblTotalCost.Margin = New System.Windows.Forms.Padding(0)
        Me.lblTotalCost.Name = "lblTotalCost"
        Me.lblTotalCost.Padding = New System.Windows.Forms.Padding(20)
        Me.lblTotalCost.Size = New System.Drawing.Size(390, 58)
        Me.lblTotalCost.TabIndex = 1
        Me.lblTotalCost.TextAlign = System.Drawing.ContentAlignment.TopCenter
        '
        'Calculate
        '
        Me.Calculate.Location = New System.Drawing.Point(12, 288)
        Me.Calculate.Name = "Calculate"
        Me.Calculate.Size = New System.Drawing.Size(134, 54)
        Me.Calculate.TabIndex = 2
        Me.Calculate.Text = "Calculate Charges"
        Me.Calculate.UseVisualStyleBackColor = True
        '
        'Clear
        '
        Me.Clear.Location = New System.Drawing.Point(180, 288)
        Me.Clear.Name = "Clear"
        Me.Clear.Size = New System.Drawing.Size(107, 54)
        Me.Clear.TabIndex = 3
        Me.Clear.Text = "Clear Form"
        Me.Clear.UseVisualStyleBackColor = True
        '
        'Quit
        '
        Me.Quit.Location = New System.Drawing.Point(320, 288)
        Me.Quit.Name = "Quit"
        Me.Quit.Size = New System.Drawing.Size(82, 54)
        Me.Quit.TabIndex = 4
        Me.Quit.Text = "Exit"
        Me.Quit.UseVisualStyleBackColor = True
        '
        'TxtLengthOfStay
        '
        Me.TxtLengthOfStay.Location = New System.Drawing.Point(187, 51)
        Me.TxtLengthOfStay.Name = "TxtLengthOfStay"
        Me.TxtLengthOfStay.Size = New System.Drawing.Size(100, 20)
        Me.TxtLengthOfStay.TabIndex = 5
        '
        'TxtMedication
        '
        Me.TxtMedication.Location = New System.Drawing.Point(187, 77)
        Me.TxtMedication.Name = "TxtMedication"
        Me.TxtMedication.Size = New System.Drawing.Size(100, 20)
        Me.TxtMedication.TabIndex = 6
        '
        'txtSurgicalCharges
        '
        Me.txtSurgicalCharges.Location = New System.Drawing.Point(187, 103)
        Me.txtSurgicalCharges.Name = "txtSurgicalCharges"
        Me.txtSurgicalCharges.Size = New System.Drawing.Size(100, 20)
        Me.txtSurgicalCharges.TabIndex = 7
        '
        'txtLabFees
        '
        Me.txtLabFees.Location = New System.Drawing.Point(187, 129)
        Me.txtLabFees.Name = "txtLabFees"
        Me.txtLabFees.Size = New System.Drawing.Size(100, 20)
        Me.txtLabFees.TabIndex = 8
        '
        'TxtPhysical
        '
        Me.TxtPhysical.Location = New System.Drawing.Point(187, 155)
        Me.TxtPhysical.Name = "TxtPhysical"
        Me.TxtPhysical.Size = New System.Drawing.Size(100, 20)
        Me.TxtPhysical.TabIndex = 9
        '
        'Label2
        '
        Me.Label2.BackColor = System.Drawing.SystemColors.WindowFrame
        Me.Label2.Location = New System.Drawing.Point(61, 57)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(120, 17)
        Me.Label2.TabIndex = 10
        Me.Label2.Text = "Length of Stay (Days)"
        '
        'Label3
        '
        Me.Label3.BackColor = System.Drawing.SystemColors.WindowFrame
        Me.Label3.Location = New System.Drawing.Point(61, 80)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(120, 17)
        Me.Label3.TabIndex = 11
        Me.Label3.Text = "Medication"
        '
        'Label4
        '
        Me.Label4.BackColor = System.Drawing.SystemColors.WindowFrame
        Me.Label4.Location = New System.Drawing.Point(61, 106)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(120, 17)
        Me.Label4.TabIndex = 12
        Me.Label4.Text = "Surgical Charges"
        '
        'Label5
        '
        Me.Label5.BackColor = System.Drawing.SystemColors.WindowFrame
        Me.Label5.Location = New System.Drawing.Point(61, 132)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(120, 17)
        Me.Label5.TabIndex = 13
        Me.Label5.Text = "Lab Fees"
        '
        'Label6
        '
        Me.Label6.BackColor = System.Drawing.SystemColors.WindowFrame
        Me.Label6.Location = New System.Drawing.Point(61, 158)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(120, 17)
        Me.Label6.TabIndex = 14
        Me.Label6.Text = "Physical Rehab"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(415, 370)
        Me.Controls.Add(Me.Label6)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.TxtPhysical)
        Me.Controls.Add(Me.txtLabFees)
        Me.Controls.Add(Me.txtSurgicalCharges)
        Me.Controls.Add(Me.TxtMedication)
        Me.Controls.Add(Me.TxtLengthOfStay)
        Me.Controls.Add(Me.Quit)
        Me.Controls.Add(Me.Clear)
        Me.Controls.Add(Me.Calculate)
        Me.Controls.Add(Me.lblTotalCost)
        Me.Controls.Add(Me.ListBox1)
        Me.Name = "Form1"
        Me.Text = "Hospital Charges"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents ListBox1 As ListBox
    Friend WithEvents lblTotalCost As Label
    Friend WithEvents Calculate As Button
    Friend WithEvents Clear As Button
    Friend WithEvents Quit As Button
    Friend WithEvents TxtLengthOfStay As TextBox
    Friend WithEvents TxtMedication As TextBox
    Friend WithEvents txtSurgicalCharges As TextBox
    Friend WithEvents txtLabFees As TextBox
    Friend WithEvents TxtPhysical As TextBox
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents Label6 As Label
End Class
