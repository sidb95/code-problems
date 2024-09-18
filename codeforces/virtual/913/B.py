"""
sbhatore
6 Sep 2024

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
# 1. place '-' on the place where it is to be deleted
#
#
# pseudocode:
"""

def calcAnswer(s, a, n, c):
    itr = 0
    ptr = 0
    while (itr < n):
        while ((itr < n) and (a[itr] != c)):
            itr += 1
        ptr = itr
        while ((ptr >= 0 and ptr < n) and (a[ptr] == c or a[ptr] == '-')):
            ptr -= 1
        if (ptr >= 0 and ptr < n):
            a[ptr] = '-'
        #
        itr += 1
    #
    return a


def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        n = len(s)
        a = []
        A = []
        c = []
        S = {}
        for i in range(0, n):
            if (s[i] in S):
                S[s[i]].append(i)
            else:
                S[s[i]] = [i]
            if (ord(s[i]) >= ord('a') and ord(s[i]) <= ord('z')):
                a.append(s[i])
            else:
                A.append(s[i])
            #
        #
        a = calcAnswer(s, a, len(a), 'b')
        A = calcAnswer(s, A, len(A), 'B')
        itr = 0
        ptr = 0
        while ((itr < len(a)) and (ptr < len(A))):
            while ((itr < len(a)) and (a[itr] == 'b' or a[itr] == '-')):
                itr += 1
            #
            while ((ptr < len(A)) and (A[ptr] == 'B' or A[ptr] == '-')):
                ptr += 1
            if (itr != len(a) and ptr != len(A)):
                if (S[a[itr]][0] < S[A[ptr]][0]):
                    c.append(a[itr])
                    S[a[itr]].pop(0)
                    itr += 1
                else:
                    c.append(A[ptr])
                    S[A[ptr]].pop(0)
                    ptr += 1
                #
            #
        #
        if (itr == len(a)):
            while (ptr < len(A)):
                c.append(A[ptr])
                ptr += 1
            #
        else:
            while (itr < len(a)):
                c.append(a[itr])
                itr += 1
            #
        #
        for i in range(0, len(c)):
            if (c[i] != 'B' and c[i] != 'b' and c[i] != '-'):
                print(c[i], end="")
        #
        print("")
    #
    return


__main__()
