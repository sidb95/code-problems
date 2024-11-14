"""
sbhatore
3 Sep 2024

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
rough-work:
_ _ _ _ _
i, n - i - 1
count1, count2
# Solution:
# 1. make swaps such that count1 and count2 are reduced to their minimal
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
        itr1 = 0
        itr2 = n - 1
        FLAG = True
        count = -1
        while (FLAG):
            if ((itr1 == n // 2)):
                FLAG = False
            else:
                count1 = 0
                count2 = 0
                j = itr1 + 1
                while ((j <= n // 2) and (a[j] == a[j - 1])):
                    count1 += 1
                    j += 1
                k = itr2 - 1
                while ((k > n // 2) and (a[k] == a[k - 1])):
                    count2 += 1
                    k += 1
                count3 = 0
                count4 = 0
                count5 = 0
                count6 = 0
                #
                if (count1 == 0):
                    itr1 += 1
                elif (count1 == 1):
                    if ((itr1 + 1) <= (n // 2)):
                        if (a[itr1])

    return



__main__()
