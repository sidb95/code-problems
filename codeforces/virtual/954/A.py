"""
sbhatore
04 August 2024

# Assumptions:
# 1. The problem has a solution,
# 2. The solution is definite, correct and finite,
# 3. The solution can be coded in Python3
#
# In:
# 1. x1, x2, x3
#
#
#
# Out:
# 1.
#
#
# Solution:
# 1. If the middle point exists, be it
# 2. if two points coincide, be it
# 3.
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        x1, x2, x3 = map(int, input().split())
        if (x1 == x2):
            print(abs(x1 - x3))
        elif (x2 == x3):
            print(abs(x1 - x3))
        elif (x1 == x3):
            print(abs(x1 - x2))
        else:
            nums = [x1, x2, x3]
            nums = sorted(nums)
            print((abs(nums[0] - nums[1])) + abs(nums[2] - nums[1]))
        #
    #
    return

__main__()
