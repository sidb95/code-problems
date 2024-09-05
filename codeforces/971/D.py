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

import operator

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = []
        c = []
        e = []
        f = []
        for i in range(0, n):
            b = list(map(int, input().split()))
            a.append(b[0])
            c.append(b[1])
            if (b[1] == 0):
                e.append(b)
            else:
                f.append(b)
        #
        d = list(set(a))
        count = 0
        nums = []
        for i in range(0, len(d)):
            if (a.count(d[i]) == 2):
                count += 1
            #
        #
        e = sorted(e, key=operator.itemgetter(0))
        num1 = 0
        itr = 0
        while (itr != len(e)):
            num2 = e[itr][0]
            j = itr
            while ((itr < len(e)) and (e[itr][0] - num2 != 2)):
                itr += 1
            itr = j + 1
            if (itr == len(e)):
                break
            if ([num2 + 1, 1] in f):
                num1 += 1
            #
        #
        if (count > 0):
            print(len(a) - (count * 2) + num1)
        else:
            print(num1)
        #
    return

__main__()
