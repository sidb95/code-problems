"""
sbhatore
04 August 2024

# Assumptions:
# 1. The question has a working solution,
# 2. The solution is definite, finite and correct,
# 3. The solution can be coded in Python3,
# 4. 
# 5. 
# In:
# 1. n
# 2. s
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
        s = input()
        nums = [0, 0, 0, 0]
        count = 0
        for i in range(0, 4 * n):
            if (s[i] != '?'):
                nums[ord(s[i]) - ord('A')] += 1
        for i in range(0, 4):
            count += min(nums[i], n)
        print(count)

__main__()
