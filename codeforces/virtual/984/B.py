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
        c = [0] * k
        for i in range(0, k):
            b_i, c_i = map(int, input().split())
            c[b_i - 1] += c_i
        a = sorted(c)
        count = 0
        m = len(a)
        num1 = min(n, len(a))
        for i in range(m - 1, m - 1 - num1, -1):
            count += a[i]
        #
        print(count)
    #
    return


__main__()
