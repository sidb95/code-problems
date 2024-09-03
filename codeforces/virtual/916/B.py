"""
sbhatore
3 Sep 2024

# Assumptions:
#
#
#
# In:
# 1. n, k
#
#
#
# Out:
# 1. a
#
#
# Solution:
# 1. take a_0 = n - k
# 2. while a_i != 0, a_i = a_i-1 - 1
# 3. a_i+1 = n - k + 1
# 4. 
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n, k = map(int, input().split())
        a = []
        num1 = n - k
        while (num1 != 0):
            a.append(num1)
            num1 -= 1
        #
        num1 = n - k + 1
        while (num1 != (n + 1)):
            a.append(num1)
            num1 += 1
        #
        for i in range(0, n - 1):
            print(a[i], end=" ")
        #
        print(a[n - 1])
    #
    return


__main__()
