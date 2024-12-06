# sbhatore

def __main__():
    T = int(input())
    for t in range(0, T):
        n, m = map(int, input().split())
        A = []
        for i in range(0, n):
            s = input()
            A.append(s)
        #
        count = 0
        val = 0
        for i in range(0, n):
            val += len(A[i])
            if (val > m):
                break
            else:
                count += 1
            #
        #
        print(count)
    #
    return

__main__()
