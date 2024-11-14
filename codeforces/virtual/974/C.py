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

def calcAnswer(a, n, i, numA, num1):
    x = 1
    while (num1 <= a[n // 2]):
        num1 = (numA + x) / 2
        x *= 2
    x = x // 2
    y = x // 2
    itr1 = y
    itr2 = x
    while (itr1 <= itr2):
        mid = itr1 + (itr2 - itr1) // 2
        num1 = (numA + mid) / n
        num2 = (numA + mid - 1) / n
        if (num2 <= a[n // 2] and num1 > a[n // 2]):
            print(mid)
            break
        elif (num2 <= a[n // 2]):
            itr2 = mid - 1
        else:
            itr1 = mid + 1
        #
    #


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        if (n < 3):
            print("-1")
        else:
            numA = sum(a)
            num1 = numA / n
            a = sorted(a)
            if (n % 2 == 0):
                calcAnswer(a, n, n // 2, numA, num1)
            else:
                calcAnswer(a, n, n // 2 + 1, numA, num1)
            #
        #
    #
    return



__main__()
