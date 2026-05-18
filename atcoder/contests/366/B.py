"""
sbhatore
10 August 2024

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
    S = []
    D = []
    A = []
    for t in range(0, T):
        s1 = input()
        S.append(s1)
    maxVal = max(map(len, S))
    for i in range(0, T):
        num1 = len(S[i])
        s1 = S[i]
        if (num1 < maxVal):
            s1 = S[i][:num1] + ("*" * (maxVal - num1))
        D.append(s1)
    for i in range(0, maxVal):
        s1  = ""
        for j in range(T - 1, -1, -1):
            s1 += D[j][i]
        A.append(s1)
    #
    m = len(A)
    for i in range(0, m):
        j = len(A[i]) - 1
        c = '*'
        while ((j >= 0) and A[i][j] == c):
            j -= 1
        j += 1
        A[i] = A[i][:j]
        for k in range(0, len(A[i]) - 1):
            print(A[i][k], end="")
        print(A[i][len(A[i]) - 1])
    #
    return

__main__()
