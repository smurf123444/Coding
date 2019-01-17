weight = float(input("Input Weight : " ))

if weight <= 2.0:
    print("Rate Per Amount : $1.50")
elif weight > 2.0 and weight <= 6.0:
    print("Rate per Amount : $3.00")
elif weight > 6.0 and weight <=10.0:
    print("Rate per Amount : $4.00")
else:
    print("Rate per Amount : $4.75")