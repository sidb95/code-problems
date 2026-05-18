"""
sbhatore
28 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
# In:
# 1.
#
#
#
# Out:
# 1.
#
#
rough-work:
-
-
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
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        i = 0
        j = 0
        count = 0
        while (j != n):
            if (b[j] < a[i]):
                j += 1
                count += 1
            else:
                i += 1
                j += 1
            #
        print(count)
    #
    return


__main__()
