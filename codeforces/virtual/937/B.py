"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
#
#
#
# Out:
# 1. #, .
#
#
# Solution:
# 1. j: 0 -> 2n - 1, j = 0 -> 2n - 1, (j % n == 0), c = ? change c c initially '.'
# 2. if (i % n == 0): c = ? change c
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        i = 0
        A = []
        while (i < (2 * n)):
            c = ''
            if ((i % 4 == 0) or ((i - 1) % 4 == 0)):
                c = '#'
            else:
                c = '.'
            arr1 = []
            for j in range(0, n):
                arr1.append(c)
                arr1.append(c)
                if (c == '#'):
                    c = '.'
                else:
                    c = '#'
            A.append(arr1)
            i += 1
        #
        for i in range(0, (2 * n)):
            for j in range(0, (2 * n) - 1):
                print(A[i][j], end="")
            print(A[i][(2 * n) - 1])
        #
    #
    return
            



__main__()
