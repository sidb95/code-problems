"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n, m
# 2. nums
#
#
# Out:
# 1. after stablization
#
#
# Solution:
#
#
#
# pseudocode:
"""
import copy

def inBounds(i, j, n, m):
    return ((i >= 0) and (i < n) and (j >= 0) and (j < m))

def calcAnswer(A, arr, i, j, n, m):
    if (not inBounds(i, j, n, m)):
        return A
    FLAG = True
    maxVal = 0
    for k in range(0, len(arr)):
        if (inBounds(arr[k][0], arr[k][1], n, m)):
            if ((A[arr[k][0]][arr[k][1]] >= A[i][j])):
                FLAG = False
                break
            else:
                maxVal = max(maxVal, A[arr[k][0]][arr[k][1]])
            #
        #
    #
    if (FLAG):
        A[i][j] = maxVal
    return A

def __main__():
    T = int(input())
    for t in range(0, T):
        n, m = map(int, input().split())
        nums = []
        D = []
        #
        for i in range(0, n):
            TEMP = input()
            D.append(TEMP)
        for i in range(0, len(D)):
            E = list(map(int, D[i].split()))
            nums.append(E)
        #
        FLAG = True
        # while (FLAG):
        i = 0
        j = 0
        #
        while ((i < n) or (j < m)):
            arr = ((i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1))
            A = calcAnswer(nums, arr, i, j, n, m)
            for k in range(j + 1, m):
                arr = ((i + 1, k), (i - 1, k), (i, k + 1), (i, k - 1))
                A = calcAnswer(A, arr, i, k, n, m)
            for k in range(i + 1, n):
                arr = ((k + 1, j), (k - 1, j), (k, j + 1), (k, j - 1))
                A = calcAnswer(A, arr, k, j, n, m)
            #
            i += 1
            j += 1
        nums = A
            #
        #
        for i in range(0, n):
            for j in range(0, m - 1):
                print(nums[i][j], end=" ")
            print(nums[i][m - 1])
        #   
    #
    return


__main__()
