# receive the value for first rectangle (length * width)
rectangle_one_width = float(input("Width of First #1 Rectangle : "))
rectangle_one_length = float(input("Length of First #1 Rectangle : "))

# store calculation within rectangle_one var
rectangle_one = rectangle_one_width * rectangle_one_length 

# receive the value for second rectangle (length * width)
rectangle_two_width = float(input("Width of Second #2 Rectangle : "))
rectangle_two_length = float(input("Length of Second #2 Rectangle : "))

# store calculation within rectangle_two var
rectangle_two = rectangle_two_width * rectangle_two_length

# logic if/else for deciding which rectangle is bigger
if rectangle_one < rectangle_two:
    print("Rectangle two #2 is bigger")
elif rectangle_two < rectangle_one:
    print("Rectangle one #1 is bigger")
else :
    print("both rectangles are equal in size")
