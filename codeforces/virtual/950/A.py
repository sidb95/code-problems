"""
sbhatore
04 August 2024

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
        n, m = map(int, input().split())
        s = input()
        nums = []
        for i in range(0, 7):
            nums.append(0)
        for i in range(0, n):
            nums[ord(s[i]) - ord('A')] += 1
        count = 0
        for i in range(0, 7):
            if (nums[i] < m):
                count += (m - nums[i])
        print(count)
        #
    #
    return


__main__()
