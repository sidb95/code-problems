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
        a1, a2, b1 ,b2 = map(int, input().split())
        nums = [(a1, a2, b1, b2), (a2, a1, b1, b2), (a1, a2, b2, b1), (a2, a1, b2, b1)]
        n = len(nums)
        count = 0
        for i in range(0, n):
            if ((nums[i][0] > nums[i][2]) and (nums[i][1] > nums[i][3])):
                count += 1
            elif ((nums[i][0] == nums[i][2]) and (nums[i][1] > nums[i][3])):
                count += 1
            elif ((nums[i][0] > nums[i][2]) and (nums[i][1] == nums[i][3])):
                count += 1
        print(count)
        #
    #
    return


__main__()
