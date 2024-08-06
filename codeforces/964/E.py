"""
sbhatore
06 August 2024

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

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        l, r = map(int, input().split())
        nums = []
        for i in range(l, r + 1):
            nums.append(i)
        count = 0
        n = len(nums)
        i = 0
        j = n - 1
        while (max(nums) > 0):
            while (nums[j] != 0):
                nums[i] *= 3
                nums[j] = int(nums[j] / 3)
                count += 1
            nums = sorted(nums)
        print(count)
        #
    #
    return


__main__()
