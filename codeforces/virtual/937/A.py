"""
sbhatore
09 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3
# In:
# 1. 
#
#
#
# Out:
# 1.
#
#
# Solution:
# 1.
#
#
#
rough -work

#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        a, b, c = map(int, input().split())
        if ((a < b) and (a < c) and (b < c)):
            print("STAIR")
        elif ((b > a) and (b > c)):
            print("PEAK")
        else:
            print("NONE")
        #
    #
    return


__main__()
