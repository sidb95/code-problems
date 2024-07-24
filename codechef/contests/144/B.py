def __main__():
    T = int(input())
    for t in range(0, T):
        X, Y, Z = map(int, input().split())
        #
        sum = Y
        count = 1
        #
        while (count < X and sum < Z):
            count += 1
            sum += Y
        if (sum < Z):
            print(0)
        else:
            print(count - 1)

__main__()
