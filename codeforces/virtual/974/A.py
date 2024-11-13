"""
sbhatore
13 Nov 2024

# Assumptions:
#
#
#
# In:
# 1. n, k
# 2. a
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
        a = list(map(int, input().split()))
        count = 0
        answer = 0
        for i in range(0, n):
            if (a[i] >= k):
                count += a[i]
            if (a[i] == 0):
                if (count > 0):
                    answer += 1
                    count -= 1
                #
            #
        #
        print(answer)
        #
    return

__main__()
