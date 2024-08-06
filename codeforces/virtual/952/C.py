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
        B = copy.deepcopy(A)
        for i in range(1, n):
            A[i] += A[i - 1]
        #
        for i in range(0, n):
            for j in range(i + 1, n):
                if (B[i] == B[j]):
                    B[j] = -1
        for i in range(0, n):
            for j in range(0, i + 1):
                if ((A[i] - B[j]) == B[j]):
                    count += 1
        #
        print(count)
        #
    #
    return

__main__()
