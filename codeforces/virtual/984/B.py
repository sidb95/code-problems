"""
sbhatore
3 Sep 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. k
# 3. 
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
        C = {}
        for i in range(0, k):
            b_i, c_i = map(int, input().split())
            if (b_i in C):
                C[b_i] += c_i
            else:
                C[b_i] = c_i
        a = sorted(C.values())
        a.reverse()
        count = 0
        for i in range(0, min(n, len(a))):
            count += a[i]
        #
        print(count)
    #
    return


__main__()
