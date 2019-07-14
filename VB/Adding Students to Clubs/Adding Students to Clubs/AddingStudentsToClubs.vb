' Arrays Dictionary ListBoxes

' ComboBox1, ListBox1, ListBox2
' Button1, Button 2 and Labels
' 1 through 5

Option Strict On
Option Explicit On
Class AddingStudentsToClubs
    'adds a dictionary to count amount of items in Catag Array
    Dim Dict As New Dictionary(Of String, String())
    'set up arrays
    Dim Catag() As String = {"Honors", "Golden Arrow", "Computer"}
    Dim Stud() As String = {"Adams, Ben", "Baker, Sally", "Canseco, Juan", "Davis, Sharon", "Etienne, Jean", "Gonzalez, Jose", "Johnson, Eric", "Koenig, Johann", "Matsunaga, Akiko", "Nakamura, Ken", "Ramirez, Maria", "whitedragon551", "zadzich", "leshay"}
    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        'Sort General Students
        GeneralStudents.Sorted = True
        'fill items in Membership box and remove items every time clicked from arrays
        fillStud()
        'count how many items are in Catag array
        For Each s As String In Catag
            Dim temp(0) As String
            temp(0) = Nothing
            Dict.Add(s, temp)
        Next
        'display items in Combobox 1
        Course.DataSource = Catag
    End Sub
    Sub fillStud()
        'add items to listbox1.items if not added
        For Each s As String In Stud
            If Not GeneralStudents.Items.Contains(s) Then
                GeneralStudents.Items.Add(s)
            End If
        Next
        'removes items from listbox 1 if added to list box 2
        For Each s As String In Stud
            If Me.ClubMembers.Items.Contains(s) Then
                GeneralStudents.Items.Remove(s)
            End If
        Next
        'Count of items in Listbox2
        Count.Text = ClubMembers.Items.Count.ToString + " members"
    End Sub

    Private Sub AddStudent_Click(sender As Object, e As EventArgs) Handles AddStudent.Click

        If GeneralStudents.SelectedItem Is Nothing Then Exit Sub
        'which item in the general student list have we selected by index?
        Dim ci As Integer = GeneralStudents.SelectedIndex
        'If list in ClubMembers does not contains item selected in GeneralStudents then add it
        If Not Me.ClubMembers.Items.Contains(GeneralStudents.SelectedItem.ToString) Then
            Me.ClubMembers.Items.Add(GeneralStudents.SelectedItem.ToString)
            'change the text count
            Count.Text = Me.ClubMembers.Items.Count.ToString
            'change the selected text to next item in list
            If ci < GeneralStudents.Items.Count - 1 Then
                GeneralStudents.SelectedIndex += 1
                'else just leave it alone
            Else
                GeneralStudents.SelectedIndex = 0
            End If
            'call fillStud to refresh lists and count with new items
            fillStud()
        End If
    End Sub
    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles RemoveStudent.Click
        If Me.ClubMembers.SelectedItem Is Nothing Then Exit Sub
        'remove item from clubmembers of item selected in club members.
        Me.ClubMembers.Items.Remove(Me.ClubMembers.SelectedItem.ToString)
        'call fillStud to refresh lists and count with new items
        fillStud()
    End Sub
    Private Sub ComboBox1_SelectedIndexChanged(sender As Object, e As EventArgs) Handles Course.SelectedIndexChanged
        'set selected course in static variable
        Static cor As String = Course.SelectedItem.ToString

        Dim i As String()
        'set index to amount of items in club members
        ReDim i(Me.ClubMembers.Items.Count - 1)
        'copy club members based on index to empty areas
        Me.ClubMembers.Items.CopyTo(i, 0)

        Dict(cor) = i
        'set cor to be new selected item
        cor = Course.SelectedItem.ToString
        'Clear Items in Club members each time Selected
        Me.ClubMembers.Items.Clear()
        're populate club members with correct students.
        For Each s As String In Dict(cor)
            If Not s Is Nothing Then
                Me.ClubMembers.Items.Add(s)
            End If
        Next
        'call fillStud to refresh lists and count with new items
        fillStud()
    End Sub

End Class