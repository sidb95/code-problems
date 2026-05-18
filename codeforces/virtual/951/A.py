"""
sbhatore
17 August 2024

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
        itr = 0
        ptr = 1
        maxVal = 10000000000
        while (ptr != n):
            maxVal = min(maxVal, max(a[itr], a[ptr]))
            itr += 1
            ptr += 1
        print(maxVal - 1)
    #
    return


__main__()
