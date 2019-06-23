<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()>
Partial Class DistanceCalculator
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()>
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
    <System.Diagnostics.DebuggerStepThrough()>
    Private Sub InitializeComponent()
        Me.Calculate = New System.Windows.Forms.Button()
        Me.Quit = New System.Windows.Forms.Button()
        Me.DataDisplay = New System.Windows.Forms.ListBox()
        Me.SuspendLayout()
        '
        'Calculate
        '
        Me.Calculate.Location = New System.Drawing.Point(16, 300)
        Me.Calculate.Name = "Calculate"
        Me.Calculate.Size = New System.Drawing.Size(108, 48)
        Me.Calculate.TabIndex = 1
        Me.Calculate.Text = "Calculate"
        Me.Calculate.UseVisualStyleBackColor = True
        '
        'Quit
        '
        Me.Quit.Location = New System.Drawing.Point(142, 300)
        Me.Quit.Name = "Quit"
        Me.Quit.Size = New System.Drawing.Size(108, 48)
        Me.Quit.TabIndex = 2
        Me.Quit.Text = "Exit"
        Me.Quit.UseVisualStyleBackColor = True
        '
        'DataDisplay
        '
        Me.DataDisplay.FormattingEnabled = True
        Me.DataDisplay.Location = New System.Drawing.Point(12, 12)
        Me.DataDisplay.Name = "DataDisplay"
        Me.DataDisplay.Size = New System.Drawing.Size(234, 264)
        Me.DataDisplay.TabIndex = 6
        '
        'DistanceCalculator
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(266, 375)
        Me.Controls.Add(Me.DataDisplay)
        Me.Controls.Add(Me.Quit)
        Me.Controls.Add(Me.Calculate)
        Me.Name = "DistanceCalculator"
        Me.Text = "Distance Calculator"
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents Calculate As Button
    Friend WithEvents Quit As Button
    Friend WithEvents DataDisplay As ListBox
End Class
