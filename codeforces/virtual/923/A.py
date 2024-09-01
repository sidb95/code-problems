"""
sbhatore
01 Sep 2024

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
        s = input()
        itr = 0
        ptr = n - 1
        while ((itr < n) and (s[itr] != 'B')):
            itr += 1
        while ((ptr >= 0) and (s[ptr] != 'B')):
            ptr -= 1
        if (itr == ptr):
            print(1)
        elif (itr == n):
            print(0)
        else:
            print(ptr - itr + 1)
        #
    return


__main__()
