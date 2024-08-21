"""
sbhatore
21 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
# In:
# 1. 
#
#
#
# Out:
# 1. 
#
#
rough-work:
- a_i, 0 <= i < n
- 6 6 6 5 7 7 7
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
        a = list(map(int, input().split()))
        maxVal = -1
        for a_i in a:
            maxVal = max(maxVal, a.count(a_i))
        print(n - maxVal)
    return
        


__main__()
