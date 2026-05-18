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
        i = 0
        j = 1
        b = []
        while (j < n):
            b.append(a[j])
            b.append(a[i])
            i += 2
            j += 2
        if (i == n - 1):
            b.append(a[i])
            TEMP = b[i - 1]
            b[i - 1] = b[i]
            b[i] = TEMP
        for i in range(0, n - 1):
            print(b[i], end=" ")
        print(b[n - 1])
    #
    return
                


__main__()
