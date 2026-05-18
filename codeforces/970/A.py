"""
sbhatore
1 Sep 2024

# Assumptions:
# 1. The rpoblem is solvable,
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
        a, b = map(int, input().split())
        if (a % 2 == 0):
            if (b % 2 == 0):
                print("YES")
            else:
                if (a >= 2):
                    print("YES")
                else:
                    print("NO")
                #
            #
        else:
            print("NO")
        #
    #
    return


__main__()
