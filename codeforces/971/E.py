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

def calcAnswer(mid, n, k):
    return (2 * mid - n) * k + mid * (mid - 1) + int((n * (n - 1)) / 2)


def __main__():
    T = int(input())
    for t in range(0, T):
        n, k = map(int, input().split())
        minVal = 1000000001
        itr = 0
        ptr = n - 1
        while (itr <= ptr):
            mid = itr + int((ptr - itr) / 2)
            num1 = abs(calcAnswer(mid, n, k))
            if (abs(num1) < abs(calcAnswer(itr, n, k))):
                itr = mid + 1
            else:
                ptr = mid - 1
            #
        #
        print(min(min(abs(calcAnswer(itr, n, k)), abs(calcAnswer(ptr, n, k))), num1))
    #
    return


__main__()
