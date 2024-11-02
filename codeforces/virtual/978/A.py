"""
sbhatore
16 Oct 2024

# Assumptions:
#
#
#
# In:
# 1. n, r, a_i
#
#
#
# Out:
# 1. max_h
#
#
rough-work:
_ _
_ _
_ _
num1 = 2 * r


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
        n, r = map(int, input().split())
        a = list(map(int, input().split()))
        max_h = 0
        count = 0
        for i in range(0, n):
            if (a[i] % 2 == 1): 
                count += 1
                max_h += a[i] - 1
            else: 
                max_h += a[i]
        if (count <= (r - (max_h // 2))): 
            max_h += count
        else: 
            max_h += 2 * (r - (max_h // 2)) - count
        print(max_h)
    #
    return



__main__()
