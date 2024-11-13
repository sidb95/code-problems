"""
sbhatore
13 Nov 2024

# Assumptions:
#
#
#
# In:
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
        n, k = map(int, input().split())
        if (n < k):
            count = 0
            if ((n % 2) == 1):
                count += (n // 2) + 1
            else:
                count += (n // 2)
            #
            if ((count % 2) == 0):
                print("YES")
            else:
                print("NO")
            #
        else:
            count = 0
            if ((n - k + 1) % 2 == 1):
                if ((n % 2) == 1):
                    count += (k // 2) + 1
                else:
                    count += (k // 2)
                #
            else:                    
                count += (k // 2)
            #
            if ((count % 2) == 0):
                print("YES")
            else:
                print("NO")
            #
        #
    return


__main__()
