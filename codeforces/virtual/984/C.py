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

def calcAnswer(s, n, b, k, a, m, i, FLAG):
    if (FLAG):
        for j in range (i - 3, i + 4):
            if (j in b):
                b.remove(j)
            #
        #
    #
    if ((i + 3) < n):
        if (s[i:i + 4] == "1100"):
            if i not in b:
                b.append(i)
            #
        #
    if ((i - 1 >= 0) and (i + 2 < n)):
        if (s[i - 1:i + 3] == "1100"):
            if (i - 1) not in b:
                b.append(i - 1)
            #
        #
    if ((i - 2 >= 0) and (i + 1 < n)):
        if (s[i - 2:i + 2] == "1100"):
            if ((i -2) not in b):
                b.append(i - 2)
            #
        #
    if ((i - 3 >= 0) and (i < n)):
        if (s[i - 3:i + 1] == "1100"):
            if (i - 3 not in b):
                b.append(i - 3)
            #
        #
    #
    return b


def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        q = int(input())
        a = []
        for i in range(0, q):
            x, v = map(int, input().split())
            a.append((x, v))
        #
        b = []
        n = len(s)
        for i in range(0, n - 4):
            if (s[i:i + 4] == "1100"):
                b.append(i)
            #
        #
        m = len(a)
        k = len(b)
        for i in range(0, m):
            FLAG1 = (a[i][1] != s[a[i][0] - 1])
            s = s[:a[i][0] - 1] + str(a[i][1]) + s[a[i][0]:]
            b = calcAnswer(s, n, b, k, a, m, i, FLAG1)
            if (len(b) > 0):
                print("YES")
            else:
                print("NO")
            #
        #
    #
    return


__main__()
