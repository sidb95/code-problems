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
        V = {}
        maxVal = -1
        i1 = -1
        for i in range(0, n):
            maxVal = max(maxVal, a[i])
            V[i] = maxVal
        FLAG = True
        count = 0
        while (FLAG):
            FLAG = False
            count1 = 0
            for i in range(n - 1, -1, -1):
                if (a[i] < V[i]):
                    a[i] += 1
                    count1 += 1
                    FLAG = True
            count += (count1 + 1)
        #
        print(count - 1)
    #
    return

        



__main__()
