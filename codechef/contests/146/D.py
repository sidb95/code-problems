"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. a_i, 0 <= i < n
#
#
# Out:
# 1. count, the number of ways the ball can be placed
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
        n = int(input())
        if (n == 1):
            print(1)
        elif (n == 2):
            print(1, 2)
        else:
            nums = []
            i = 1
            j = n
            while (i <= j):
                if (i == j):
                    nums.append(i)
                else:
                    nums.append(i)
                    nums.append(j)
                i += 1
                j -= 1
            for i in range(0, n - 1):
                print(nums[i], end=" ")
            print(nums[n - 1])
        #
    return

        


__main__()
