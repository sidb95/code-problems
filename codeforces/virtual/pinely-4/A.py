"""
sbhatore
21 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution is coded in Python3.
# In:
# 1. n
# 2. a_i, 0 <= i < n
#
#
# Out:
# 1. max_element
#
#
rough-work:
- if i is 0:
    - right elements are even or not
- if i is n - 1:
    - left elements
- else:
- i = 0, i += 2, maxVal = max(maxVal, a_i), maxValue(initial) <- -1
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
        for i in range(0, n, 2):
            maxVal = max(maxVal, a[i])
        print(maxVal)
    #
    return


__main__()
