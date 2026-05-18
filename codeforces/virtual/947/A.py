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
# 1. YES / NO
#
#
rough-work:

# Solution:
# 1. concatenate the other part in front and check if the array is sorted.
#
#
# pseudocode:
-
-
-
-
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        A = sorted(a)
        if (a == A):
            print("YES")
        else:
            i = 1
            FLAG = False
            while (i < n):
                if ((a[i:] + a[:i]) == A):
                    FLAG = True
                    break        
                i += 1
            if (FLAG):
                print("YES")
            else:
                print("NO")
            #
        #
    #
    return


__main__()
