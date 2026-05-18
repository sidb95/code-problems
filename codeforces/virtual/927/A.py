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
        count = 0
        FLAG = False
        for i in range(0, n - 1):
            if (s[i] == '*' and s[i + 1] == '*'):
                FLAG = True
                break
            elif (s[i] == '@'):
                count += 1
            #
        #
        if (not FLAG):
            if (s[n - 1] == '@'):
                count += 1
            #
        #
        print(count)
    #
    return


__main__()
