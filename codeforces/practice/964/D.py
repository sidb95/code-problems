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

def calcAnswer(s1, s):
    itr = 0
    ptr = 0
    n = len(s)
    m = len(s1)
    while ((ptr < n) and (itr < m)):
        if (s[ptr] == s1[itr]):
            ptr += 1
        itr += 1
    #
    if (ptr == n):
        return True
    else:
        return False
    #



def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        t = input()
        a = list(s)
        b = list(t)
        n = len(s)
        m = len(t)
        S = {}
        count = 0
        for i in range(0, n):
            if ((count < m) and (a[i] == b[count])):
                count += 1
            elif (a[i] == '?'):
                count += 1
            S[i] = count
            #
        #
        num1 = 0
        for i in range(0, n):
            if (a[i] == '?'):
                if (S[i] <= m and (S[i] != 0)):
                    a[i] = b[S[i] - 1]
                elif ((num1 < m) and (S[i] == 0)):
                    a[i] = b[num1]
                    num1 += 1
                else:
                    a[i] = 'a'
                #
            #
        #
        s1 = ""
        for i in range(0, n):
            s1 += a[i]
        if (calcAnswer(s1, t)):
            print("YES")
            print(s1)
        else:
            print("NO")
        #
    #   
    return

__main__()
