"""
sbhatore
20 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
# In:
# 1. n
# 2. a_i, 0 <= i < n
#
#
# Out:
# 1. num1
#
#
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
        num1 = a[n - 1]
        a = a[:n - 1]
        num1 += max(a)
        print(num1)
    return


__main__()
