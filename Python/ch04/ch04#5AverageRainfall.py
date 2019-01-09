# Print Input prompt
print("Type amount of years to record rain")

# Take input for prompt
years = int(input())

# Set up variable for diplaying and reading data separately
dis_years = 1
months = 0
dis_months = 1

# temp inches storage var 
inches = 0

# destination for all inches to store in
total_inches = 0

# initiate nested for loop (outer loop representing years)
for i in range(1, years+1):

    # inner for loop representing months
    for p in range(1, 13):

        # display current month and year
        print("Inches of Rain for Month:", dis_months, "in the Year:", dis_years)

        # iterate through display and calculated months vars
        dis_months += 1
        months += 1

        # prompt for float to store within inches
        inches = float(input())

        # sum total_inches using value within inches
        total_inches += inches

    # set display month back to 1
    dis_months = 1

    # set display year to the next
    dis_years += 1

# print months, total_inches for display
print("Total Months Recorded :", months)
print("Total Inches of Rain :", total_inches)

# calculate avg using total_inches / months
avg = total_inches / months 

# print avg for display
print("Average Rainfall for each month for entire period recorded:", avg)