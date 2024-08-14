"""
sbhatore
14 August 2024

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
        s = str(n)
        if (len(s) == 1):
            print("NO")
        elif (s[0:2] == "10"):
            if (len(s) == 2):
                print("NO")
            elif (s[2] == '0' or (s[2] == '1' and len(s) == 3)):
                print("NO")
            else:
                print("YES")
        else:
            print("NO")
    #
    return



__main__()
