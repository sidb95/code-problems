"""
sbhatore
3 Sep 2024

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
        a = []
        for i in range(0, n):
            s = input()
            a.append(s)
        nums = []
        for i in range(n - 1, -1, -1):
            for j in range(0, 4):
                if (a[i][j] == '#'):
                    nums.append(j + 1)
                    break
                #
            #
        #
        for i in range(0, n - 1):
            print(nums[i], end=" ")
        print(nums[n - 1])
    #
    return
        

__main__()
