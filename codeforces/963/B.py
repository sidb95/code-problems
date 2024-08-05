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
        dict1 = {}
        for i in range(0, n):
            dict1[i] = False
        t = 0
        FLAG = True
        keys = tuple(dict1.keys())
        count = 0
        while (FLAG and (count < n)):
            FLAG1 = False
            for key in keys:
                if ((t - a[key]) >= 0 and ((t - a[key]) % k == 0)):
                    if (dict1[key]):
                        count -= 1
                        dict1[key] = False
                        t += k
                    else:
                        count += 1
                        dict1[key] = True
            if (t > 100000):
                FLAG = False
        if (FLAG):
            print(t)
        else:
            print(-1)
        #
    #
    return


__main__()
