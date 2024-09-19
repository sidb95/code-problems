"""
sbhatore
18 Sep 2024

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
        a = ['a', 'e', 'i', 'o', 'u']
        num1 = int(n / 5)
        s = ""
        s1 = "".join(a)
        a.reverse()
        s2 = "".join(a)
        for i in range(0, num1):
            if (i % 2 == 1):
                s += s2
            else:
                s += s1
        #
        for i in range(0, n % 5):
            if (num1 % 2 == 0):
                s += str(s1[i])
            else:
                s += str(s2[i])
        #
        print(s)
    #
    return

__main__()
