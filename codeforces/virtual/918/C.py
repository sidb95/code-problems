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
        n = int(input())
        a = list(map(int, input().split()))
        num1 = sum(a)
        num2 = int(num1 ** 0.5)
        if (num2 * num2 == num1):
            print("YES")
        else:
            print("NO")
        #
    #
    return


__main__()
