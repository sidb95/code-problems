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
        s = input()
        a = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
        b = ['1', '2', '3', '4', '5', '6', '7', '8']
        for elmt in a:
            if (elmt != s[0]):
                print(str(elmt) + str(s[1]))
            #
        #
        for elmt in b:
            if (elmt != s[1]):
                print(str(s[0]) + str(elmt))
            #
        #
    #
    return


__main__()
