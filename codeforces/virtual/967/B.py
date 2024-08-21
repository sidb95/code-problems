"""
sbhatore
21 August 2024

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
rough-work:
- a_i
- 4 1 2 3
- 2 1
- 1 2 5 4 3
- 1 2 3 5 6 4
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
        if (n == 1):
            print(1)
        elif (n % 2 == 0):
            print(-1)
        else:
            a = []
            for i in range(1, int(n / 2) + 1):
                a.append(i)
            for i in range(n, int(n / 2), -1):
                a.append(i)
            for j in range(0, n - 1):
                print(a[j], end=" ")
            print(a[n - 1])
        #
    #
    return


__main__()
