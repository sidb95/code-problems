def __main__():
    n, x = map(int, (input().split()))
    A = list(map(int, input().split()))
    if x in A:
        print("YES")
    else:
        print("NO")
    #
    return

__main__()
