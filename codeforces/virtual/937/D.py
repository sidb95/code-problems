"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
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

def isLargeDecimal(n):
    while (n != 0):
        if ((n % 10) != 0 and (n % 10) != 1):
            return False
        n = int(n / 10)
    return True

def calcAnswer(n):
    for i in range(1, int(n / 2) + 1):
        if ((n % i) == 0):
            if (isLargeDecimal(i)):
                if ((isLargeDecimal(int(n / i))) or (calcAnswer(int(n / i)))):
                    return True
                #
            #
        #
    #
    return False


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        if (calcAnswer(n)):
            print("YES")
        else:
            print("NO")
        #
    #
    return


__main__()
