"""
sbhatore
10 August 2024

# Assumptions:
# 1. The problem is solvable,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3
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
    n, a, b = map(int, input().split())
    nums = sorted([a, b])
    if ((nums[0] + (n - (nums[1] + nums[0]))) > nums[1]):
        print("No")
    else:
        print("Yes")
    #
    return



__main__()
