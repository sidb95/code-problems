t = int(input())

while t > 0:
    a = int(input())
    if ((a % 2 == 0) and (a % 7 == 0)):
        print("Alice")
    elif ((a % 2 == 1) and (a % 9 == 0)):
        print("Bob")
    else:
        print("Charlie")
    t -= 1
