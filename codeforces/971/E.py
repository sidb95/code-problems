"""
sbhatore
3, 6 Sep 2024

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
- a_0 + a_1 + ... + a_m - (a_m+1 +  .. + a_n)
- summation(0 <= i <= m - 1): a_i
- 2 * 
# Solution:
#
#
#
# pseudocode:
"""

def calcAnswer(m, k, n):
    return ((2 * m - n) * k + (m * (m - 1) - int((n * (n - 1)) / 2)))


def __main__():
    T = int(input())
    for t in range(0, T):
        n, k = map(int, input().split())
        num1 = -1
        itr = 0
        ptr = n - 1
        while (itr < ptr):
            mid = itr + int((ptr - itr) / 2)
            if (calcAnswer(mid, k, n) < 0):
                if ((mid + 1) < n):
                    if (calcAnswer(mid + 1, k, n) >= 0):
                        num1 = mid
                        break
                    #
                    else:
                        itr = mid + 1
                    #
                #
                else:
                    itr = mid
            #
            else:
                ptr = mid - 1
        #
        if (num1 == -1):
            if (itr + 1 < n):
                if (calcAnswer(itr, k, n) < 0):
                    if (calcAnswer(itr + 1, k, n) >= 0):
                        num1 = itr
                    #
                #
                else:
                    num1 = itr - 1
            #
            else:
                num1 = itr - 1
        #
        print(min(abs(calcAnswer(num1, k, n)), abs(calcAnswer(num1 + 1, k, n))))
        #
    #
    return


__main__()
