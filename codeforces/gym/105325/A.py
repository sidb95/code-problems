"""
sbhatore
2 Sep 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
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
rough-work:
-
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    n = int(input())
    count = 1
    num1 = n - 1
    while (count < (int((n * (n - 1)) / 2) + 1)):
        for i in range(0, num1 - 1):
            print(count, end=" ")
            count += 1
        print(count)
        count += 1
        num1 -= 1
    #
    return


__main__()
