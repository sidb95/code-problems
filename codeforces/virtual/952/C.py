"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. T
# 2. n
# 3. a_i, 0 <= i < n
#
# Out:
#
#
#
# Solution:
#
#
#
# pseudocode:
#
# rough-work:
# 1. 1 2 3 4 5
"""

import copy

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        A = list(map(int, input().split()))
        sum = 0
        count = 0
        B = tuple(A)
        for i in range(1, n):
            A[i] += A[i - 1]
        #
        maxVal = -1
        minVal = 1000000001
        #
        arr = []
        for i in range(0, n):
            maxVal = max(maxVal, B[i])
            if (A[i] % 2 == 0):
                num1 = int(A[i] / 2)
                if (A[i] - maxVal == maxVal):
                    count += 1
        #
        print(count)
        #
    #
    return

__main__()
