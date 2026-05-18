"""
sbhatore
10 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. n x n
#
#
# Out:
# 1. SQUARE / TRIANGLE
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
        A = []
        for i in range(0, n):
            arr = input()
            A.append(arr)
        #
        FLAG = True
        #
        for i in range(0, n):
            if (A[i].count('1') == 1):
                FLAG = False
                break
            #
        #
        if (FLAG):
            print("SQUARE")
        else:
            print("TRIANGLE")
        #
    return

__main__()
