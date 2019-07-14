<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class AddingStudentsToClubs
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
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(AddingStudentsToClubs))
        Me.GeneralStudents = New System.Windows.Forms.ListBox()
        Me.ClubMembers = New System.Windows.Forms.ListBox()
        Me.Course = New System.Windows.Forms.ComboBox()
        Me.AddStudent = New System.Windows.Forms.Button()
        Me.RemoveStudent = New System.Windows.Forms.Button()
        Me.Count = New System.Windows.Forms.Label()
        Me.Top = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'GeneralStudents
        '
        Me.GeneralStudents.FormattingEnabled = True
        Me.GeneralStudents.Location = New System.Drawing.Point(29, 132)
        Me.GeneralStudents.Name = "GeneralStudents"
        Me.GeneralStudents.Size = New System.Drawing.Size(220, 238)
        Me.GeneralStudents.TabIndex = 0
        '
        'ClubMembers
        '
        Me.ClubMembers.FormattingEnabled = True
        Me.ClubMembers.Location = New System.Drawing.Point(408, 132)
        Me.ClubMembers.Name = "ClubMembers"
        Me.ClubMembers.Size = New System.Drawing.Size(229, 238)
        Me.ClubMembers.TabIndex = 1
        '
        'Course
        '
        Me.Course.FormattingEnabled = True
        Me.Course.Location = New System.Drawing.Point(281, 98)
        Me.Course.Name = "Course"
        Me.Course.Size = New System.Drawing.Size(121, 21)
        Me.Course.TabIndex = 2
        '
        'AddStudent
        '
        Me.AddStudent.Location = New System.Drawing.Point(255, 231)
        Me.AddStudent.Name = "AddStudent"
        Me.AddStudent.Size = New System.Drawing.Size(147, 40)
        Me.AddStudent.TabIndex = 3
        Me.AddStudent.Text = "Add Student to Club"
        Me.AddStudent.UseVisualStyleBackColor = True
        '
        'RemoveStudent
        '
        Me.RemoveStudent.Location = New System.Drawing.Point(643, 231)
        Me.RemoveStudent.Name = "RemoveStudent"
        Me.RemoveStudent.Size = New System.Drawing.Size(147, 40)
        Me.RemoveStudent.TabIndex = 4
        Me.RemoveStudent.Text = "Remove Student from Club"
        Me.RemoveStudent.UseVisualStyleBackColor = True
        '
        'Count
        '
        Me.Count.AutoSize = True
        Me.Count.Location = New System.Drawing.Point(640, 391)
        Me.Count.Name = "Count"
        Me.Count.Size = New System.Drawing.Size(39, 13)
        Me.Count.TabIndex = 5
        Me.Count.Text = "Label1"
        '
        'Top
        '
        Me.Top.Location = New System.Drawing.Point(88, 25)
        Me.Top.Name = "Top"
        Me.Top.Size = New System.Drawing.Size(600, 40)
        Me.Top.TabIndex = 6
        Me.Top.Text = resources.GetString("Top.Text")
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(40, 99)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(185, 20)
        Me.Label1.TabIndex = 7
        Me.Label1.Text = "General Students List"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 12.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.Location = New System.Drawing.Point(436, 99)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(181, 20)
        Me.Label2.TabIndex = 8
        Me.Label2.Text = "Club Membership List"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Font = New System.Drawing.Font("Microsoft Sans Serif", 10.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label3.Location = New System.Drawing.Point(318, 78)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(40, 17)
        Me.Label3.TabIndex = 9
        Me.Label3.Text = "Club"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(800, 450)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.Top)
        Me.Controls.Add(Me.Count)
        Me.Controls.Add(Me.RemoveStudent)
        Me.Controls.Add(Me.AddStudent)
        Me.Controls.Add(Me.Course)
        Me.Controls.Add(Me.ClubMembers)
        Me.Controls.Add(Me.GeneralStudents)
        Me.Name = "Form1"
        Me.Text = "Adding Students to Clubs"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents GeneralStudents As ListBox
    Friend WithEvents ClubMembers As ListBox
    Friend WithEvents Course As ComboBox
    Friend WithEvents AddStudent As Button
    Friend WithEvents RemoveStudent As Button
    Friend WithEvents Count As Label
    Friend WithEvents Top As Label
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
End Class
