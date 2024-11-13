"""
sbhatore
13 Nov 2024

# Assumptions:
#
#
#
# In:
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
        n, k = map(int, input().split())
        if (n < k):
            count = 0
            for i in range(1, n + 1):
                count += (i ** i)
            #
            if ((count % 2) == 0):
                print("YES")
            else:
                print("NO")
            #
        else:
            count = 0
            for i in range(n - k + 1, n + 1):
                count += (i ** i)
            #
            if ((count % 2) == 0):
                print("YES")
            else:
                print("NO")
            #
        #
    return


__main__()
