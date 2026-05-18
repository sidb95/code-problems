"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. A, B, C, M
#
#
#
# Out:
# 1. YES / NO
#
#
# Solution:
# 1. if (abs(arr[i] - arr[j]) <= M)
#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        A, B, C, M = map(int, input().split())
        arr = [A, B, C]
        FLAG = False
        for i in range(0, 2):
            for j in range(i + 1, 3):
                if (abs(arr[i] - arr[j]) <= M):
                    FLAG = True
                    break
                #
            #
            if (FLAG):
                break
        if (FLAG):
            print("YES")
        else:
            print("NO")
        #
    #
    return


__main__()
