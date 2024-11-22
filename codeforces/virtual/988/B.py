"""
sbhatore
3 Sep 2024

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
        a = set(b)
        A = {}
        for elmt in a:
            A[elmt] = True
        FLAG = True
        for elmt in a:
            if (elmt != 0):
                if ((k - 2) % elmt == 0):
                    if ((k - 2) // elmt == elmt):
                        if (b.count(elmt) > 1):
                            print(elmt, elmt)
                            break
                    else:
                        if (((k - 2) // elmt) in A):
                            print(elmt, (k - 2) // elmt)
                            break
                    #
                #
            #
        #
    #
    return


__main__()
