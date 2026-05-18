"""
sbhatore
15 August 2024

# Assumptions:
#
#
#
# In:
# 1. T
# 2. n
# 3. a_i, 0 <= i < n
#
# Out:
# 1. Yes / No
#
#
# Solution:
# 1. maintain a dict, that stores all the Truth values
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
        VIS = []
        S = {}
        for i in range(0, n):
            S[i] = []
        for i in range(0, n):
            count = 0
            for j in range(0, n):
                if ((a[j] % a[i]) == 0):
                    S[i].append(True)
                    count += 1
                else:
                    S[i].append(False)
                #
            #
            if (count >= int(n / 2)):
                VIS.append(i)
        #
        FLAG = False
        for i in VIS:
            for j in range(0, n):
                if (j != i):
                    count = 0
                    for k in range(0, n):
                        if (S[i][k] or S[j][k]):
                            count += 1
                            if (count == n):
                                FLAG = True
                                break
            if (FLAG):
                break
        if (FLAG):
            print("Yes")
        else:
            print("No")
        #
    #
    return

__main__()
