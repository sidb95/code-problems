"""
sbhatore
10 August 2024
 
# Assumptions:
#
#
#
# In:
# 1. n
#
#
#
# Out:
# 1. sum of all numbers, after carrying out the sum of their digits
#
#
# Solution:
#
#
#
# pseudocode:
"""

import bisect

def calcAnswer():
    pass

def __main__():
    S = {}
    keys = []
    T = int(input())
    for t in range(0, T):
        n = int(input())
        answer = 0
        num1 = -1
        sum2 = 0
        j = 1
        for i in range(1, len(keys)):
            if (keys[i] > keys[i - 1]):
                sum2 = S[keys[i - 1]]
                num1 = keys[i - 1]
                break
        if (num1 != -1):
            answer += sum2
            j = num1 + 1
        for i in range(j, n + 1):
            r = str(i)
            sum1 = sum(map(ord, r)) - (len(r) * ord('0'))
            answer += sum1
        S[n] = answer
        bisect.insort(keys, n)
        print(answer)
    #
    return
 
__main__()
