def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        a = sorted(a)
        maxVal = 0
        i = 0
        while (i < n):
            j = i
            num1 = a[j]
            count = 0
            while ((j < n) and (a[j] == num1)):
                count += 1
                j += 1
            maxVal = max(maxVal, count)
            i = j
        print(n - maxVal)
    #
    return

__main__()
