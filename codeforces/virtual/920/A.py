"""
sbhatore
1 Sep 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The 
#
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
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        a1, b1 = map(int, input().split())
        a2, b2 = map(int, input().split())
        a3, b3 = map(int, input().split())
        a4, b4 = map(int, input().split())
        num1 = -1
        if (a1 == a2):
            num1 = abs(b1 - b2)
        elif (a1 == a3):
            num1 = abs(b1 - b3)
        else:
            num1 = abs(b1 - b4)
        print(num1 * num1)
    #
    return


__main__()
