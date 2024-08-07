"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. T
# 2. A_i, 0 <= i < 16
#
#
# Out:
# 1. count of number of matches he can win
#
#
rough-work:
1. 8 matches, bottom 8
2. 4 matches, bottom 4
3. 2 matches, bottom 2
4. 1 match, bottom 1
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
        A = list(map(int, input().split()))
        D = {}
        for i in range(0, 16):
            D[A[i]] = i
        A = sorted(A)
        nums = []
        for i in range(0, 16):
            nums.append(0)
        nums[D[A[0]]] = 0
        nums[D[A[1]]] = 1
        nums[D[A[2]]] = 1
        nums[D[A[3]]] = 2
        nums[D[A[4]]] = 2
        nums[D[A[5]]] = 2
        nums[D[A[6]]] = 2
        nums[D[A[7]]] = 3
        nums[D[A[8]]] = 3
        nums[D[A[9]]] = 3
        nums[D[A[10]]] = 3
        nums[D[A[11]]] = 3
        nums[D[A[12]]] = 3
        nums[D[A[13]]] = 3
        nums[D[A[14]]] = 3
        nums[D[A[15]]] = 4
        #
        for i in range(0, 15):
            print(nums[i], end=" ")
        print(nums[15])
    #
    return

__main__()
