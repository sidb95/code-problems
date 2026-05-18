"""
sbhatore
15 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Pyton3.
# In:
# 1. n
# 2. a_i
#
#
# Out:
# 1. YES / NO
#
#
rough-work:
- 
- 
- 
- 
# Solution:
# 1. 
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
        b = list(set(a))
        if (len(b) > 2):
            print("NO")
        elif (len(b) == 2):
            if (abs(b[1] - b[0]) >= 2):
                print("YES")
            else:
                print("NO")
        else:
            print("NO")
        #
    #
    return


__main__()
