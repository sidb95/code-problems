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
        l, r = map(int, input().split())
        if (l == r):
            print(1)
            continue
        i = 1
        while (l + ((i * (i - 1)) // 2) <= r):
            i *= 2
        itr1 = i // 2
        itr2 = i
        FLAG = True
        while (itr1 <= itr2):
            mid = itr1 + (itr2 - itr1) // 2
            num1 = l + (mid * (mid - 1)) // 2
            num2 = l + ((mid + 1) * (mid)) // 2
            if (num1 <= r and num2 > r):
                print(mid)
                FLAG = False
                break
            elif (num1 > r):
                itr2 = mid
            else:
                itr1 = mid + 1
            #
        #
        if (FLAG):
            print(itr1)
        #
    #
    return


__main__()
