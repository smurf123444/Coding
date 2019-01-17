# Set total to 0
total = 0

# For each day collected, initiate loop
for day in range(1,8):

    # ask input
    print('Enter the bugs collected on day', day)

    #take input into bugs.
    bugs = int(input())

    # total input from bugs into total.
    total += bugs
    # repeat loop until base case has been met.

# print total collected bugs at end of loop.
print('You collected a total of', total, 'bugs.')