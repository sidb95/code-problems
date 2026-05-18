def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        answer = 0
        while (n != 0):
            answer += (n % 10)
            n = int(n / 10)
        print(answer)
        #
    #
    return

__main__()
