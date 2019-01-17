# opens file in "numbers.txt"
myfile = open('numbers.txt', 'r')

# for each line in myfile, read each number and print in seperate variable
for line in myfile:
    number = int(line)
    print(number)

# close file when finished
myfile.close()