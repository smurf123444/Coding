# define main function

def main():
    # prompt user for input of name to be initiald
    name = input('Type your name and press ENTER. ')
    name_list = name.split()

    for part in name_list:
        print(part[0].upper() + ". ", end="")
    print()

main()