class Solution:
    pass

def __main__():
    T = int(input())
    for t in range(0, T):
        N, X = map(int, input().split())
        A = []
        #
        for i in range(0, N):
            A = list(map(int, input().split()))
        #
        sum = 0
        #
        for i in range(0, N):
            if (A[i] > X):
                sum += A[i] - X
                A[i] = X
        #
        A = sorted(A)
        for i in range(N - 1, -1, -1):
            if ((X - A[i]) > 0):
                if (sum > (X - A[i])):
                    A[i] = X
                    sum -= (X - A[i])
                else:
                    break
            else:
                continue
        #
        count = 0
        for i in range(0, N):
            if (A[i] == X):
                count += 1
        print(count)
    return

__main__()
