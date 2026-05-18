def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        maxVal = max(a)
        print(maxVal)
    #
    return

__main__()
