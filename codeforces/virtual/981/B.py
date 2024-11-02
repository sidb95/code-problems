"""
sbhatore
3 Sep 2024

# Assumptions:
#
#
#
# In:
#
#
#
#
# Out:
#
#
#
# Solution:
# 1. Iterate over all rows and the corresponding columns line by line
# 2. change all the diagonals that start with a negative number
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        A = []
        for i in range(0, n):
            a = list(map(int, input().split()))
            A.append(a)
        #
        count = 0
        for i in range(0, n):
            for j in range(0, n):
                p = i
                q = j
                if ((p < n) and (q < n) and A[p][q] < 0):
                    x = n - p
                    y = n - q
                    maxVal = -1
                    for k in range(min(x, y)):
                        if (A[p + k][q + k] < 0):
                            maxVal = max(maxVal, abs(A[p + k][q + k]))
                            A[p + k][q + k] = 1
                        #
                    count += maxVal
                #
            #
        #
        print(count)
    #
    return

__main__()
