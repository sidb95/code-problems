def __main__():
    t = input()
    T = int(t)
    for i in range(0, T):
        x, y = input().split()
        x = int(x)
        y = int(y)
        #
        if (x > 0):
            x1 = 1
            y1 = -1
            x1 += x - 1
            y1 -= (x - 1)
            y -= (x - 1)
            if (y1 <= y):
                print("YES")
            else:
                print("NO")
        elif (x == 0):
            x1 = 0
            y1 = -1
            if (y1 <= y):
                print("YES")
            else:
                print("NO")
        else:
            x1 = -1
            y1 = -1
            x1 -= abs(x) - 1
            y1 -= abs(x) - 1
            y -= abs(x) - 1
            if (y1 <= y):
                print("YES")
            else:
                print("NO")
__main__()