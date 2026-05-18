"""
sbhatore
3 Sep 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution can be coded in Python3,
# 3. The solution is definite, finite and correct.
# In:
#
#
#
#
# Out:
#
#
#
rough-work:
- 
# Solution:
#
#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        s = input()
        a = list(s)
        b = list(set(s))
        S = {}
        count = 0
        for i in range(0, 26):
            S[chr(ord('A') + i)] = i + 1
        for i in range(0, len(b)):
            if (a.count(b[i]) >= S[b[i]]):
                count += 1
            #
        #
        print(count)
    #
    return


__main__()
