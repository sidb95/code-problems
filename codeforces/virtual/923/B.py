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
        vis = []
        itr = n - 1
        num2 = 0
        while (itr >= 0):
            ptr = itr - 1
            num1 = a[itr]
            count = 1
            b[itr] = chr(ord('a') + num2)
            c1 = b[itr]
            while ((ptr >= 0) and (count != num1)):
                if (a[ptr] == num1 - count):
                    b[ptr] = c1
                    vis.append(ptr)
                count += 1
                ptr -= 1
            #
            



__main__()
