"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n, f, k
# 2. a_i, 0 <= i < n
#
#
# Out:
# 1. YES / NO / MAYBE
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
        n, f, k = map(int, input().split())
        A = list(map(int, input().split()))
        num1 = A[f - 1]
        A = sorted(A)
        A = A[::-1]
        if (A[k - 1] > num1):
            print("NO")
        elif (A[k - 1] == num1):
            if (k < n):
                if (A[k] == num1):
                    print("MAYBE")
                else:
                    print("YES")
            else:
                print("YES")
        else:
            print("YES")
        #
    #
    return


__main__()
