def __main__():
    n = int(input())
    a = []
    for i in range(0, n):
        TEMP = int(input())
        a.append(TEMP)
    #
    a = sorted(a)
    for i in range(0, n):
        print(a[i])
    return

__main__()
