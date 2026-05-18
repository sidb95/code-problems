"""
sbhatore
12, 13 Nov 2024

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

def calcAnswer(s, n, b, i, count, FLAG):
    if (FLAG):
        for j in range (i - 3, i + 1):
            if (j >= 0):
                if (b[j]):
                    b[j] = False
                    count -= 1
                #
            #
        #
    #
    if ((i + 3) < n):
        if (''.join(s[i:i + 4]) == "1100"):
            if not b[i]:
                b[i] = True
                count += 1
            #
        #
    if ((i - 1 >= 0) and (i + 2 < n)):
        if (''.join(s[i - 1:i + 3]) == "1100"):
            if not b[i - 1]:
                b[i - 1] = True
                count += 1
            #
        #
    if ((i - 2 >= 0) and (i + 1 < n)):
        if (''.join(s[i - 2:i + 2]) == "1100"):
            if (not b[i - 2]):
                b[i - 2] = True
                count += 1
            #
        #
    if ((i - 3 >= 0) and (i < n)):
        if (''.join(s[i - 3:i + 1]) == "1100"):
            if (not b[i - 3]):
                b[i - 3] = True
                count += 1
            #
        #
    #
    return b, count


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
        n = len(s)
        b = [True] * n
        count = 0
        s = list(s)
        for i in range(0, n - 3):
            if (''.join(s[i:i + 4]) == "1100"):
                b[i] = True
                count += 1
                i += 3
            else:
                b[i] = False
            #
        #
        for i in range(n - 3, n):
            b[i] = False
        for i in range(0, q):
            FLAG1 = (a[i][1] != s[a[i][0] - 1])
            if (FLAG1):
                s[a[i][0] - 1] = str(a[i][1])
                b, count = calcAnswer(s, n, b, a[i][0] - 1, count, FLAG1)
            if (count > 0):
                print("YES")
            else:
                print("NO")
            #
        #
    #
    return


__main__()
