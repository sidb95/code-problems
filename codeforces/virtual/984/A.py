"""
sbhatore
12 Nov 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
# In:
# 1. T
# 2. n
# 3. a
#
# Out:
# 1. YES / NO
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
        a = list(map(int, input().split()))
        FLAG = True
        for i in range(0, n - 1):
            if (abs(a[i] - a[i + 1]) != 5 and (abs(a[i] - a[i + 1]) != 7)):
                FLAG = False
                break
            #
        #
        if (FLAG):
            print("YES")
        else:
            print("NO")
        #
    #
    return

__main__()
