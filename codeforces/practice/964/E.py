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
        nums = sorted(nums)
        n = len(nums)
        if (nums[0] == 0):
            pass
        elif (nums[0] % 3 == 0):
            count += int(nums[0] / 3)
            nums[0] = 0
        else:
            count += int(nums[0] / 3) + 1
            nums[0] = 0
        num1 = count
        for i in range(1, n - 1):
            if (nums[i] == 0):
                pass
            elif (nums[i] % 3 == 0):
                count += int(nums[i] / 3)
            else:
                count += int(nums[i] / 3) + 1
            #
        #
        count += num1
        if (nums[n - 1] == 0):
            pass
        elif (nums[n - 1] % 3 == 0):
            count += int(nums[n - 1] / 3)
        else:
            count += int(nums[n - 1] / 3) + 1
        #
        print(count)
    #
    return


__main__()
