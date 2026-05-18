def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = []
        for i in range(0, n):
            TEMP = int(input())
            a.append(TEMP)
        #
        a = sorted(a)
        i = 0
        while (i < n):
            j = i
            c = a[j]
            count = 0
            while ((j < n) and (a[j] == c)):
                count += 1
                j += 1
            if (count == 1):
                print(a[j - 1])
                break
            i = j
    #
    return

__main__()
