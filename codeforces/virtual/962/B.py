"""
sbhatore
03 August 2024

# Assumptions:
# 1. 

# in:
#

# out:
#

# summary:
#
# pseudocode:
"""

def calcAnswer():
    pass

def __main__():
    T = int(input())
    for t in range(0, T):
        n, k = map(int, input().split())
        nums = []
        for i in range(0, n):
            TEMP = input()
            nums.append(TEMP)
        m = int(n / k)
        i = 0
        answer = []
        #
        while (i < n):
            str1 = ""
            j = 0
            while (j < n):
                if (nums[i][j] == '0'):
                    str1 += "0"
                else:
                    str1 += "1"
                j += k
            answer.append(str1)
            i += k
        for i in range(0, len(answer)):
            print(answer[i])
        #
    #
    return

__main__()
