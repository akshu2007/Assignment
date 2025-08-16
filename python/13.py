a = int(input())
b = int(input())
c = int(input())
if a <= b and a <= c:
    x = a
elif b <= a and b <= c:
    x = b
else:
    x = c
print("The smallest number is:", x)