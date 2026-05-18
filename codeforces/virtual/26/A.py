"""
sbhatore
04 August 2024

# Assumptions:
# 1. The problem has a working solution,
# 2. The solution is definite, finite and correct,
# 3. The problem can be coded in Python3.
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
        A = list(map(int, input().split()))
        if (len(A) == 2):
            print("NO")
        else:
            str1 = ""
            if (A.count(A[0]) == n):
                print("NO")
            else:
                if (A.count(A[n - 1]) == (n - 1)):
                    str1 += "BB"
                    str1 += ("R" * (n - 2))
                else:
                    str1 += "B"
                    str1 += ("R" * (n - 1))
                print("YES")
                print(str1)
            #
    #
    return


__main__()
