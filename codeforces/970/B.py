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
        s = input()
        num1 = int(n ** (0.5))
        num2 = None
        if (num1 < 3):
            num2 = 0
        else:
            num2 = (num1 - 2) * (num1 - 2)
        if (num1 * num1 == n):
            if (s.count('0') == num2):
                print("Yes")
            else:
                print("No")
            #
        else:
            print("No")
        #
    return


__main__()
