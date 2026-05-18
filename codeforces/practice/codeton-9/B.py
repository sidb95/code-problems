"""
sbhatore
29 Nov 2024

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
        n = len(s)
        a = list(s)
        FLAG = False
        for i in range(0, n - 1):
            if (s[i] == s[i + 1]):
                FLAG = True
                print(s[i] * 2)
                break
            #
        #
        if (not FLAG):
            for i in range(0, n - 2):
                if ((s[i] != s[i + 1]) and (s[i + 1] != s[i + 2]) and (s[i] != s[i + 2])):
                    print(str(s[i]) + str(s[i + 1]) + str(s[i + 2]))
                    FLAG = True
                    break
                #
            #
        #
        if (not FLAG):
            print("-1")
    #
    return


__main__()
