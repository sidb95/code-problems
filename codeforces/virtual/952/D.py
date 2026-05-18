"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n, m
# 2. A[][]
#
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
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n, m = map(int, input().split())
        A = []
        for i in range(0, n):
            TEMP = input()
            A.append(TEMP)
        #
        dict1 = {}
        for i in range(0, n):
            for j in range(0, m):
                if (A[i][j] == '#'):
                    dict1[(i, j)] = True
        #
        minVal = 1000000001
        i1 = -1
        i2 = -1
        keys = list(dict1.keys())
        keys1 = sorted(keys)
        for i in range(0, n):
            for j in range(0, m):
                maxVal = 0
                num1 = 0
                l1 = len(keys1)
                if (l1 == 1):
                    num1 = (abs(keys1[0][0] - i) + abs(keys1[0][1] - j))
                else:
                    num1 = max(abs(keys1[0][0] - i) + abs(keys1[0][1] - j), 
                               abs(keys1[l1 - 1][0] - i) + abs(keys1[l1 - 1][1] - j))
                if (maxVal < num1):
                    maxVal = num1
                if (minVal > maxVal):
                    minVal = maxVal
                    i1 = i
                    i2 = j
                #
            #
        #
        print(i1 + 1, i2 + 1)
    #
    return

__main__()
