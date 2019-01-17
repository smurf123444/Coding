# function for two variables

def max(val1, val2):
    if val1 < val2:
        return val2
    elif val1 > val2:
        return val1
    else:
        print("Values are equal!")

# prompt user for both values
print("Maximum of Two values")
print("First Value:")
val1 = int(input())
print("Second Value:")
val2 = int(input())

# print the answer through max' return
print(max(val1,val2))