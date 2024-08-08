def __main__():
    T = int(input())
    for t in range(0, T):
        A, B = map(int, input().split())
        print(A % B)
    #
    return

__main__()
