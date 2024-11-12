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
        s = input()
        q = int(input())
        for i in range(0, q):
            x, v = map(int, input().split())
            s = s[:x - 1] + str(v) + s[x:]
            if ("1100" in s):
                print("YES")
            else:
                print("NO")
            #
        #
    #
    return


__main__()
