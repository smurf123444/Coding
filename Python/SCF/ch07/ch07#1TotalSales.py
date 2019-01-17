# initiate list variable
lst = []

# for each day
for n in range(1,8):

    #Enter Sales in prompt
    print("Enter Sales for Day", n)
    numbers = int(input())

    # append each answer to lst from numbers value
    lst.append(numbers)

# print answer after complete
print("Sum of elements in given list is (Total Sales):", sum(lst))