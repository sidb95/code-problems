"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. k
# 3. a_i, 0 < i < k
#
# Out:
# 1. minVal
#
#
# Solution:
# 1. if not maxVal and not 1, count += (a_i - 1) + a_i
# 2. if maxVal is 1: return k - 1
# 3. if k is 1: return k
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        #
        maxVal = max(a)
        count = 0
        #
        if (k == 1):
            print(k)
        elif (a.count(1) == k):
            print(k - 1)
        else:
            FLAG = True
            for i in range(0, k):
                if ((a[i] != maxVal) or (not FLAG)):
                    count += (a[i] - 1) + a[i]
                else:
                    FLAG = False
            print(count)

__main__()
