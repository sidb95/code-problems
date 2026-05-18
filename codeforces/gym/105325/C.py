"""
sbhatore
10 August 2024

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
#
#
#
# pseudocode:
"""

def calcAnswer(nums, a):
    S = {}
    S[0] = True
    FLAG = False
    for i in range(1, len(nums)):
        if (not (S[i - 1] and (nums[i - 1] > a[i][0]))):
            FLAG = True
            break
        else:
            S[i] = True
        #
    #
    return FLAG


import copy

def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = []
        for i in range(0, n):
            b = list(map(int, input().split()))
            a.append(b)
        #
        nums = []
        for i in range(0, n):
            nums.append(a[i][0] + a[i][1])
        #
        FLAG1 = False
        for i in range(0, n):
            b = copy.deepcopy(a)
            nums1 = copy.deepcopy(nums)
            b.pop(i)
            nums1.pop(i)
            if (calcAnswer(nums1, b)):
                FLAG1 = True
                break
            #
        #
        S = {}
        S[0] = True
        FLAG = False
        for i in range(1, n):
            if (not (S[i - 1] and (nums[i - 1] > a[i][0]))):
                FLAG = True
                break
            else:
                S[i] = True
            #
        #
        if (FLAG):
            print("Pep")
        else:
            if (FLAG1):
                print("Ivet")
            else:
                print("Cesc")
            #
        #
    #
    return


__main__()
