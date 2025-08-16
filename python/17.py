x = float(input("Enter first number: "))
y = float(input("Enter second number: "))
a = input("Enter operation (+, -, *, /): ")

if a == '+':
    print("Result:", x + y)
elif a == '-':
    print("Result:", x - y)
elif a == '*':
    print("Result:", x * y)
elif a == '/':
    if y != 0:
        print("Result:", x / y)
    else:
        print("Cant be divided by zero")
