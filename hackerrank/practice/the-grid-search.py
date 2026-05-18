"""
the-grid-search.py
sidb95
bhatoresiddharth@gmail.com
08 Sep 2024
"""

def __main__():
    T = int(input())
    for t in range(0, T):
        R, C = map(int, input().split())
        G = []
        for i in range(0, R):
            s = input()
            G.append(s)
        #
        r, c = map(int, input().split())
        P = []
        for i in range(0, r):
            s = input()
            P.append(s)
        #
        for i in range(0, R - r):
            num1 = C - c + 1
            count = 0
            k = -1
            for j in range(0, num1):
                if (G[i][j:j + c] == P[0]):
                    k = j
                    count = 1
                    break
                #
            #
            FLAG = True
            if (k != -1):
                if ((i + r) <= R):
                    while (count != r):
                        if (G[i + count][j:j + c] == P[count]):
                            count += 1
                        else:
                            break
                    if (count == r):
                        FLAG = False
                        break
                    #
                #
            #
        #
        if (not FLAG):
            print("YES")
        else:
            print("NO")
        #
    #
    return

                

__main__()
