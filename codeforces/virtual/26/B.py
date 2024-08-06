"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. x
#
#
#
# Out:
# 1. YES / NO
#
#
# Solution:
#
#
#
# pseudocode:
"""

nums = {}

def isLarge(n):
    while (n != 0):
        if (chr(n % 10) < '5'):
            return False
        n = int(n / 10)
    return True

def __main__():
    T = int(input())
    for t in range(0, T):
        x = int(input())
        y = x
        n = len(str(x))
        str1 = ("5" * (n - 1))
        str2 = ("9" * (n - 1))
        n1 = int(str1)
        n2 = int(str2)
        FLAG1 = True
        if ((x % 10) == 9):
            FLAG1 = False
        if (x > (2 * n2) or (not FLAG1)):
            print("NO")
        else:
            FLAG = False
            for i in range(n2, n1 - 1, -1):
                j = (x - i)
                if (j not in nums):
                    if (isLarge(i) and isLarge(j)):
                        FLAG = True
                        break
                    else:
                        nums[j] = True
                    #
                #
            #
            if (FLAG):
                print("YES")
            else:
                print("NO")
            #
        #
    #
    return


__main__()
