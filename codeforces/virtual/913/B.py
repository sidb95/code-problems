"""
sbhatore
6 Sep 2024

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
# 1. place '-' on the place where it is to be deleted
#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        n = len(s)
        a = []
        A = []
        for i in range(0, n):
            if (ord(s[i]) >= ord('a') and ord(s[i]) <= ord('z')):
                if (s[i] == 'b'):
                    num1 = len(a)
                    if (num1 != 0):
                        num2 = a[num1 - 1]
                        s = s[:num2] + "-" + s[num2 + 1:]
                        a.pop(num1 - 1)
                    #
                else:
                    a.append(i)
                #
            else:
                if (s[i] == 'B'):
                    num3 = len(A)
                    if (num3 != 0):
                        num4 = A[num3 - 1]
                        s = s[:num4] + "-" + s[num4 + 1:]
                        A.pop(num3 - 1)
                    #
                else:
                    A.append(i)
                #
            #
        #
        for i in range(0, n):
            if (s[i] != '-' and s[i] != 'b' and s[i] != 'B'):
                print(s[i], end="")
            #
        #
        print("")
    #
    return


__main__()
