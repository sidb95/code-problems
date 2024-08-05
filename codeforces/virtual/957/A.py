"""
sbhatore
05 August 2024

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
        a, b, c = map(int, input().split())
        answer = 0
        nums = [(0, 0, 5), (0, 5, 0), (5, 0, 0), 
                (4, 0, 1), (4, 1, 0), (1, 0, 4), (0, 1, 4), (0, 4, 1), (1, 4, 0), 
                (3, 0, 2), (3, 2, 0), (2, 0, 3), (0, 2, 3), (0, 3, 2), (2, 3, 0),
                (3, 1, 1), (1, 1, 3), (1, 3, 1), 
                (2, 2, 1), (2, 1, 2), (1, 2, 2)]
        for elmt in nums:
            answer = max(answer, (a + elmt[0]) * (b + elmt[1]) * (c + elmt[2]))
        print(answer)

__main__()
