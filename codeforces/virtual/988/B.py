"""
sbhatore
22 Nov 2024

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
        k = int(input())
        b = list(map(int, input().split()))
        c = [0] * (k + 1)
        for elmt in b:
            c[elmt] += 1
        for i in range(1, k + 1):
            if ((i * i) == (k - 2)):
                if (c[i] > 1):
                    print(i, i)
                    break
                #
            else:
                if ((k - 2) % i == 0):
                    if (c[i] > 0 and c[(k - 2) // i] > 0):
                        print(i, (k - 2) // i)
                        break
                    #
                #
            #
        #
    #
    return


__main__()
