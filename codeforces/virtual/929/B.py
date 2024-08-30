"""
sbhatore
10 August 2024

# Assumptions:
#
#
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

import copy

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        b = copy.deepcopy(a)
        num1 = sum(a)
        num2 = num1
        FLAG = False
        if ((num1 % 3) == 0):
            print(0)
        elif ((num1 % 3) == 2):
            print(1)
        else:
            for i in range(0, n):
                num1 -= a[i]
                if ((num1 % 3) == 0):
                    FLAG = True
                    print(1)
                    break
                num1 = num2
            if (not FLAG):
                print(2)
            #
        #
    #
    return

__main__()
