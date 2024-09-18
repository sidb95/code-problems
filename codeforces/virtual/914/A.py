"""
sbhatore
7 Sep 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3.
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
        a, b = map(int, input().split())
        x_k, y_k = map(int, input().split())
        x_q, y_q = map(int, input().split())
        nums1 = (
                (x_k - a, y_k - b), (x_k + a, y_k + b), (x_k - a, y_k + b), (x_k + a, y_k - b),
                (x_k - b, y_k - a), (x_k + b, y_k + a), (x_k - b, y_k + a), (x_k + b, y_k - a)
                )
        nums2 = (
                (x_q - a, y_q - b), (x_q + a, y_q + b), (x_q - a, y_q + b), (x_q + a, y_q - b),
                (x_q - b, y_q - a), (x_q + b, y_q + a), (x_q - b, y_q + a), (x_q + b, y_q - a)
                )
        count = 0
        vis = []
        for elmt in nums1:
            if (elmt in nums2 and elmt not in vis):
                count += 1
                vis.append(elmt)
            #
        #
        print(count)
    #
    return


__main__()
