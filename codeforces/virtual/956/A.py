"""
sbhatore
08 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
#
#
#
# Out:
# 1. a_i, 0 <= i < n (a_i divisible by all (i + 1)s that are factor)
#
#
# Solution:
# 1. loop from 2 to int(n / 2), multiply all
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
        nums = []
        nums.append(1)
        for i in range(2, n + 1):
            num1 = int(i / 2)
            num2 = 1
            for j in range(2, num1 + 1):
                if (i % j == 0):
                    num2 *= j
            num2 *= i
            nums.append(num2)
        for i in range(2, n + 1):
            num3 = 0
            for j in range(2, n + 1, i):
                num3 += j
            nums[i - 1] *= num3
        for i in range(0, n - 1):
            print(nums[i], end=" ")
        print(nums[n - 1])
    #
    return


__main__()
