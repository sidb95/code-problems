"""
sbhatore
19 Nov 2024

# Assumptions:
#
#
#
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
        n = int(input())
        a = list(map(int, input().split()))
        b = set(a)
        count = 0
        for elmt in b:
            count += (a.count(elmt) // 2)
        #
        print(count)

__main__()
