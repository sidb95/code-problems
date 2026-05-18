"""
sbhatore
31 August 2024

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
rough-work:

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
        num1 = -1
        if (l % 2 == 0):
            if (r % 2 == 0):
                num1 = (r - l - 1)
            else:
                num1 = (r - l)
            #
        else:
            if (r % 2 == 0):
                num1 = (r - l)
            else:
                num1 = (r - l + 1)
            #
        #
        print(int((num1 + 1) / 4))
    #
    return

__main__()
