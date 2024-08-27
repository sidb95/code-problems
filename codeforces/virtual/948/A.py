"""
sbhatore
26 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
# In:
# 1.n, m 
#
#
#
# Out:
# 1. Yes / No
#
#
# Solution:
# 1.
#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n, m = map(int, input().split())
        if (n < m):
            print("No")
        elif (n == m):
            print("Yes")
        else:
            if ((n - m) % 2 == 0):
                print("Yes")
            else:
                print("No")
            #
        #
    #
    return


__main__()
