"""
sbhatore
13 Nov 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. a
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

import math

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        if (n < 3):
            print("-1")
        else:
            num1 = sum(a) / n
            a = sorted(a)
            if (n % 2 == 0):
                if (a[n // 2] < num1):
                    print("0")
                else:
                    x = math.ceil((n * (a[n // 2] - sum(a))))
                    print(x)
                #
            else:
                if (a[n // 2 + 1] < num1):
                    print("0")
                else:
                    x = math.ceil((n * (a[n // 2 + 1] - sum(a))))
                    print(x)
                #
            #
        #
    #
    return



__main__()
