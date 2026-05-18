"""
sbhatore
04 August 2024

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
        s1 = ""
        i = 1
        while ((i < n) and (s[i] == s[i - 1])):
            i += 1
        if (i == n):
            print("NO")
        else:
            print("YES")
            s1 = s[::-1]
            if (s != s1):
                print(s1)
            else:
                TEMP = s[i]
                s1 = s1[:i - 1] + TEMP + s1[i - 1] + s1[i + 1:]
                print(s1)
        #
    #
    return


__main__()
