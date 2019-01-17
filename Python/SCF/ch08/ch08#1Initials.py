# define main function

def main():
    
    # prompt user for input of name to be initiald
    name = input('Type your name and press ENTER. ')

    # use .split() function from each string, insert results into name_list arrays
    name_list = name.split()

    # for each part of the list(index) capitalized the first letter.
    for part in name_list:
        print(part[0].upper() + ". ", end="")

    # break to new line
    print()

# execute main function
main()