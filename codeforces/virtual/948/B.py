"""
sbhatore
25 August 2024

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
# 1. n
# 2. a
#
# Solution:
#
#
#
# pseudocode:
"""

def calcAnswer(x, arr, sum, a, i, propn1):
    if (sum == x):
        return arr
    if (i == 32):
        return []
    else:
        num1 = a[0] * (2 ** i)
        num2 = a[1] * (2 ** i)
        num3 = a[2] * (2 ** i)
        if (not propn1):
            s1 = calcAnswer(x, arr + [num1], sum + num1, a, i + 1, True)
            if (s1 != []):
                return s1
            s2 = calcAnswer(x, arr + [num2], sum + num2, a, i + 1, False)
            if (s2 != []):
                return s2
            s3 = calcAnswer(x, arr + [num3], sum + num3, a, i + 1, True)
            if (s3 != []):
                return s3
        else:
            s1 = calcAnswer(x, arr + [num2], sum + num2, a, i + 1, False)
            if (s1 != []):
                return s1
            #
        #
        return []



def __main__():
    T = int(input())
    for t in range(0, T):
        x = int(input())
        a = (1, 0, -1)
        b = calcAnswer(x, [], 0, a, 0, False)
        n = len(b)
        print(n)
        for i in range(0, n - 1):
            print(b[i], end=" ")
        if (n != 0):
            print(b[n - 1])
        #
    #
    return

__main__()
