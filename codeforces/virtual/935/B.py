"""
sbhatore
28 August 2024

# Assumptions:
#
#
#
# In:
# 1. n, c, d
#
#
#
# Out:
# 2. Yes / No
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
        n, c, d = map(int, input().split())
        b = list(map(int, input().split()))
        a = min(b)
        arr = []
        for i in range(0, n):
            count = a + (i * c)
            arr.append(count)
            for j in range(0, n - 1):
                count += d
                arr.append(count)
            #
        #
        arr = sorted(arr)
        b = sorted(b)
        if (arr == b):
            print("YES")
        else:
            print("NO")
        #
    #
    return

__main__()
