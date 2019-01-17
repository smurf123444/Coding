#create a dictionary for rooms per course number
dictionary_room = {'CS101':'3004',
                 
                'CS102':'4501',
                 
                'CS103':'6755',
                
                'NT110':'1244',
                
                'CM241':'1411'}

#create a dictionary for instructors per course number
dictionary_insturctor = {'CS101':'Haynes', 

                        'CS102':'Alvarado', 

                        'CS103':'Rich', 

                        'NT110':'Burke', 

                        'CM241':'Lee'}

#create a dictionary for time per course number
dictionary_time = {'CS101':'8.00 a.m.', 

                    'CS102':'9.00 a.m.', 

                    'CS103':'10.00 a.m.', 

                    'NT110':'11.00 a.m.', 

                    'CM241':'1:00 p.m.'}

# prompt user to input course number
print("Course #:")
course_num = input()

# check if course number exists
if course_num in dictionary_room:

    # print answers
    print("Room Number:", dictionary_room[course_num])
    print("Instructor:", dictionary_insturctor[course_num])
    print("Time of Course:", dictionary_time[course_num])

# error handle
else:
    print("Course does not exist...")