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

def calcAnswer(s1, n, C, V):
    s = ""
    i = -1
    if (len(s1) == 2):
        return s1
    elif (len(s1) == 3):
        return s1
    else:
        if (s1[0] in C and s1[1] in V and s1[2] in C):
            if (s1[3] not in V):
                s += s1[:3]
                i = 3
            else:
                s += s1[:2]
                i = 2
        else:
            s += s1[:2]
            i = 2
    while (i < n):
        if (i == (n - 2)):
            s += "." + s1[n - 2:n]
            i += 2
        elif (i == (n - 3)):
            s += "." + s1[n - 3:n]
            i += 3
        else:
            if (s1[i] in C and s1[i + 1] in V and s1[i + 2] in C):
                if (s1[i + 3] not in V):
                    s += "." + s1[i:i + 3]
                    i += 3
                else:
                    s += "." + s1[i:i + 2]
                    i += 2
            else:
                s += "." + s1[i:i + 2]
                i += 2
            #
        #
    #
    return s


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        s1 = input()
        C = ('b', 'c', 'd')
        V = ('a', 'e')
        s = calcAnswer(s1, n, C, V)
        print(s)
    #
    return


__main__()
