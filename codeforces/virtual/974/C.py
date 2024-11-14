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

def calcAnswer(a, n, a_i, numA, num1):
    if (a_i < num1):
        print("0")
        return
    x = 1
    while ((num1 / 2) <= a_i):
        num1 = (numA + x) / n
        x *= 2
    x = x // 2
    y = x // 2
    itr1 = y
    itr2 = x
    FLAG = True
    while (itr1 <= itr2):
        mid = itr1 + (itr2 - itr1) // 2
        num1 = (numA + mid) / n
        num2 = (numA + mid - 1) / n
        if ((num2 / 2) <= a_i and (num1 / 2) > a_i):
            print(mid)
            FLAG = False
            break
        elif ((num2 / 2) <= a_i):
            itr1 = mid + 1
        else:
            itr2 = mid - 1
        #
    #
    if (FLAG):
        print(itr1)


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
            calcAnswer(a, n, a[n // 2], numA, num1)
        #
    #
    return



__main__()
