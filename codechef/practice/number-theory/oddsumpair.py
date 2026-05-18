def __main__():
    T = int(input())
    for t in range(0, T):
        a = list(map(int, input().split()))
        if ((a[0] + a[1]) % 2 == 1):
            print("YES")
        elif ((a[1] + a[2]) % 2 == 1):
            print("YES")
        elif ((a[0] + a[2]) % 2 == 1):
            print("YES")
        else:
            print("NO")
        #
    #
    return

__main__()
