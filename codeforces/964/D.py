"""
sbhatore
06 August 2024

# Assumptions:
#
#
#
# In:
# 1. 
#
#
#
# Out:
#
#
#
# Solution:
#
# rough-work
# - _ _ _ _ _
# - _ _ _
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        t = input()
        n = len(s)
        m = len(t)
        i = 0
        j = 0
        i1 = -1
        D = {}
        for i in range(0, n):
            if s[i] in D:
                D[s[i]] += 1
            else:
                D[s[i]] = 1
        if (s.count('?') >= m):
            print("YES")
            p = 0
            q = 0
            str1 = ""
            while (p < n):
                if (s[p] == '?'):
                    if (q >= m):
                        str1 += 'x'
                    else:
                        str1 += t[q]
                    q += 1
                else:
                    str1 += s[p]
                p += 1
            print(str1)
        else:
            q = 0
            count = 0
            str1 = ""
            for i in range(0, n):
                if (t[q] == s[i]):
                    D[s[i]] -= 1
                    q += 1
                elif (s[i] == '?'):
                    if (q < m):
                        str1 += t[q]
                        q += 1
                    else:
                        str1 += "x"
                else:
                    str1 += s[i]
                #
            #
            if (q == m):
                print("YES")
                print(str1)
            else:
                print("NO")
        #
    #
    return

__main__()
