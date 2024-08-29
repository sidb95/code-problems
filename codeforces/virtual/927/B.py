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

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        itr = 1
        count = a[0]
        while (itr != n):
            k = 1
            m = int(count / a[itr])
            if (a[itr] * (m + 1) > count):
                count = a[itr] * (m + 1)
            itr += 1
        print(count)
    #
    return


__main__()
