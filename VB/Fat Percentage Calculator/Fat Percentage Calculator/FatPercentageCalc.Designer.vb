<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class FatPercentageForm
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
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.calculate = New System.Windows.Forms.Button()
        Me.clear = New System.Windows.Forms.Button()
        Me.quit = New System.Windows.Forms.Button()
        Me.caloriesInFood = New System.Windows.Forms.TextBox()
        Me.fatGramsInFood = New System.Windows.Forms.TextBox()
        Me.result = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(9, 65)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(184, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Enter the number of Calories in Food :"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(9, 124)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(213, 13)
        Me.Label2.TabIndex = 1
        Me.Label2.Text = "Percentage of Calories that comes from fat :"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(9, 93)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(177, 13)
        Me.Label3.TabIndex = 2
        Me.Label3.Text = "Enter number of Fat Grams in Food :"
        '
        'calculate
        '
        Me.calculate.Location = New System.Drawing.Point(12, 219)
        Me.calculate.Name = "calculate"
        Me.calculate.Size = New System.Drawing.Size(131, 43)
        Me.calculate.TabIndex = 3
        Me.calculate.Text = "Calculate"
        Me.calculate.UseVisualStyleBackColor = True
        '
        'clear
        '
        Me.clear.Location = New System.Drawing.Point(149, 219)
        Me.clear.Name = "clear"
        Me.clear.Size = New System.Drawing.Size(131, 43)
        Me.clear.TabIndex = 4
        Me.clear.Text = "Clear"
        Me.clear.UseVisualStyleBackColor = True
        '
        'quit
        '
        Me.quit.Location = New System.Drawing.Point(286, 219)
        Me.quit.Name = "quit"
        Me.quit.Size = New System.Drawing.Size(131, 43)
        Me.quit.TabIndex = 5
        Me.quit.Text = "Exit"
        Me.quit.UseVisualStyleBackColor = True
        '
        'caloriesInFood
        '
        Me.caloriesInFood.Location = New System.Drawing.Point(287, 65)
        Me.caloriesInFood.Name = "caloriesInFood"
        Me.caloriesInFood.Size = New System.Drawing.Size(100, 20)
        Me.caloriesInFood.TabIndex = 6
        '
        'fatGramsInFood
        '
        Me.fatGramsInFood.Location = New System.Drawing.Point(287, 93)
        Me.fatGramsInFood.Name = "fatGramsInFood"
        Me.fatGramsInFood.Size = New System.Drawing.Size(100, 20)
        Me.fatGramsInFood.TabIndex = 7
        '
        'result
        '
        Me.result.BackColor = System.Drawing.SystemColors.ScrollBar
        Me.result.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.result.Location = New System.Drawing.Point(287, 124)
        Me.result.Name = "result"
        Me.result.Size = New System.Drawing.Size(100, 20)
        Me.result.TabIndex = 8
        '
        'FatPercentageForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.ControlLightLight
        Me.ClientSize = New System.Drawing.Size(424, 287)
        Me.Controls.Add(Me.result)
        Me.Controls.Add(Me.fatGramsInFood)
        Me.Controls.Add(Me.caloriesInFood)
        Me.Controls.Add(Me.quit)
        Me.Controls.Add(Me.clear)
        Me.Controls.Add(Me.calculate)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow
        Me.Name = "FatPercentageForm"
        Me.Text = "Fat Percentage Calculator"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents calculate As Button
    Friend WithEvents clear As Button
    Friend WithEvents quit As Button
    Friend WithEvents caloriesInFood As TextBox
    Friend WithEvents fatGramsInFood As TextBox
    Friend WithEvents result As TextBox
End Class
