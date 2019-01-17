# import random library
import random

# initiate global variables
MAX_DIGITS = 7
START = 0
END = 9

# define main function
def main():

    # set up list with array of 7
    numbers = [0] * 7

    # for each number on the list being 7
    for index in range(MAX_DIGITS):

        # assign a random int 1-9 to the list then iterate to next array
        numbers[index] = random.randint(START, END)

    # print answer using loop to iterate through list again, but this time to print and cap with null at end.
    print('Here are your lottery numbers:')
    for index in range(MAX_DIGITS):
        print(numbers[index], end='')
    
# removes % (breaks to new line)
print()

main()