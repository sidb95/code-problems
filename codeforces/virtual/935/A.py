"""
sbhatore
25 August 2024

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
        n, a, b = map(int, input().split())
        num1 = n * a
        num2 = int(n / 2) * b
        if (n % 2 == 0):
            if (num1 < num2):
                print(num1)
            else:
                print(num2)
        else:
            if (num1 < (num2 + a)):
                print(num1)
            else:
                print(num2 + a)
            #
        #
    #
    return


__main__()
