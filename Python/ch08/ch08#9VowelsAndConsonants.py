# define main output
def main():

    # prompt user input to string
    user_str = input("Enter a string of characters: ")

    # print results of num_vowels, num_consonants
    print("That string has", num_vowels(user_str), "Vowels and", \
            num_consonants(user_str), "Consonants.")

# define num_vowels
def num_vowels(s):

    # create list of vowels to reference
    vowels = ['a','e','i','o','u']

    # initialize an accumulator
    v_count = 0

    #count each vowel in string
    for ch in s:
        if ch.lower() in vowels:
            v_count += 1

    # return string count as answer
    return v_count

# define num_consonants
def num_consonants(s):

    # create list of vowels to reference
    vowels = ['a','e','i','o','u']

    # initialize an accumulator
    c_count = 0

    # count each letter that is alpha, lower case and not in vowels list.
    for ch in s:
        if ch.isalpha() and ch.lower() not in vowels:
            c_count += 1

    # return answer
    return c_count

# execute program
main()