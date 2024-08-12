"""
sbhatore
12 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
# In:
# 1. x
#
#
#
# Out:
# 1. y
#
#
# Solution:
# 1. calculate for all y
#
#
# pseudocode:
"""

def gcd(a, b):
    if (a == 0):
        return b
    return (gcd(b % a, a))


def __main__():
    T = int(input())
    for t in range(0, T):
        x = int(input())
        maxVal = 0
        i1 = -1
        for i in range(1, x):
            num1 = (gcd(i, x) + i)
            if (maxVal < num1):
                maxVal = num1
                i1 = i
        print(i1)
    #
    return

__main__()
