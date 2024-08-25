"""
sbhatore
25 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
# In:
# 1. n
# 2. s
#
#
# Out:
# 1. Yes / No
#
#
# Solution:
# 1. s_0, s_1, s_2
# 2. s_n-1 != s_0
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
        if (s[0] != s[n - 1]):
            print("Yes")
        else:
            print("No")
        #
    #
    return


__main__()
