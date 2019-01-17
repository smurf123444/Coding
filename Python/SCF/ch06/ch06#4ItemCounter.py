# opens file in "numbers.txt"
myfile = open('names.txt', 'r')

# initiate variables
num_lines = 0

# for each line in myfile, add it to count
for line in myfile:
    num_lines += 1

print("Number of lines:")
print(num_lines)

# close file when finished
myfile.close()