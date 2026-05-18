"""
sbhatore
23 Nov 2024

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
        if (n < 5):
            print(-1)
        else:
            for i in range(1, n + 1, 2):
                if (i != 5):
                    print(i, end=" ")
                #
            print(5, 4, end=" ")
            for i in range(2, n + 1, 2):
                if (i != 4):
                    print(i, end=" ")
            #
            print("")
        #
    #
    return


__main__()
