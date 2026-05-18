"""
sbhatore
10 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3,
# In:
# 1. x_c, y_c, k
#
#
#
# Out:
# 1. k distinct points (a, b)
#
#
# Solution:
# - Take (0, 0):
    - if (x_c, y_c == (0, 0)): forEven(k), forOdd(k)
# - - else: (0, 0), forEven(k - 1) forOdd(k - 1)
# -
# pseudocode:
- 
- 
- 
"""

def calcAnswer():
    pass

def forEven(k):
    A = []
    if (k == 0):
        return A
    num1 = 0
    for i in range(0, int(k / 2)):
        num1 += 1
        A.append([num1, num1])
        A.append([-1 * num1, -1 * num1])
    return A

def forOdd(k):
    A = [[0, 0]]
    A += forEven(k - 1)
    return A

def __main__():
    T = int(input())
    for t in range(0, T):
        x_c, y_c, k = map(int, input().split())
        A = []
        if (k % 2 == 0):
            A = forEven(k)
        else:
            A = forOdd(k)
            #
        for i in range(0, k):
            A[i][0] += x_c
            A[i][1] += y_c
        #
        for i in range(0, len(A)):
            print(A[i][0], A[i][1])
        #
    #
    return

__main__()
