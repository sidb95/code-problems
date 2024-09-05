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
        x, y, k = map(int, input().split())
        count1 = 0
        if (x % k == 0):
            count1 += int(x / k)
        else:
            count1 += int(x / k) + 1
        #
        count2 = 0
        if (y % k == 0):
            count2 += int(y / k)
        else:
            count2 += int(y / k) + 1
        #
        if (count1 < count2):
            print(2 * count2)
        elif (count1 == count2):
            print(count1 + count2)
        else:
            print(2 * count1 - 1)
    #
    return


__main__()
