"""
sbhatore
04 August 2024

# Assumptions:
# 1. That minute (answer), all the lights should be turned on!
#
#
# In:
# 1. n: int
# 2. k: int
# 3. a: List[int]
#
# Out:
# 1. c1: int
#
#
# Solution:
# 1. maintain a dictionary for every light, int:boolean, index:switchedOn?
#
#
# pseudocode:
"""

def calcAnswer(dict1, keys):
    for key in keys:
        if (not dict1[key]):
            return False
    return True


def __main__():
    T = int(input())
    for t in range(0, T):
        S = {}
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        a1 = []
        for i in range(0, n):
            a1.append(a[i])
        dict1 = {}
        for i in range(0, n):
            dict1[i] = False
            S[a[i]] = True
        for i in range(0, 1000):
            for j in range(0, n):
                a[j] += k
                S[a[j]] = True
        t = 0
        FLAG1 = True
        FLAG2 = False
        keys = tuple(dict1.keys())
        while (FLAG1):
            if (FLAG2):
                if(calcAnswer(dict1, keys)):
                    break
            for key in keys:
                if ((t - a1[key]) in S):
                    if (dict1[key]):
                        dict1[key] = False
                    else:
                        FLAG2 = True
                        dict1[key] = True
            if (t == 50000):
                FLAG1 = False
            t += 1
        if (FLAG1):
            print(t - 1)
        else:
            print(-1)
        #
    #
    return


__main__()
