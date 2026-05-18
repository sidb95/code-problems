"""
sbhatore
30 August 2024

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
        if (n <= 28):
            print("aa" + str(chr(ord('z') - (28 - n))))
        elif ((n > 28) and (n <= 53)):
            print("a" + str(chr(ord('a') + n - 28)) + "z")
        else:
            print(str(chr(ord('a') + n - 53)) + "zz")
        #
    #
    return


__main__()
