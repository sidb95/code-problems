def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        if (((n % 10) >= 5) or (n % 10 == 0)):
            if ((n % 10) == 0):
                print(100 - n)
            else:
                n += (10 - (n % 10))
                print(100 - n)
        else:
            n -= (n % 10)
            print(100 - n)
        #
    #
    return

__main__()
