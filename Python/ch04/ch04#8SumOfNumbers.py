# initiate variables
i = 1
bank = 0

# initiate while loop, as long as i is greater than -1
while i > 0:

    # prompt user to enter values to be added, until reaching a negative number or 0
    print("Please Enter values to be added (-1 or 0 to exit)")
    i = int(input())

    # check if number is 0 or -1
    if i <= 0:
        print("Thanks for playing!")
        print("Total Value :", bank)

        # if so, break from while loop
        break
        
    # Add to bank if error check passes
    bank += i


