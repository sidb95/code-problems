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

5_ _ _ _ _0
0 1 2 3 4

i + 1 == a[a[i] - 1]

for itr1 in range()
a[i] - 1
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        A = {}
        for i in range(0, n):
            if ((a[i] - 1) == i):
                A[i] = True
            elif (a[a[i] - 1] == (i + 1)):
                A[i] = True
            #
        #
        count = 0
        for i in range(0, n):
            if (i not in A):
                itr1 = i + 1
                while ((itr1 < n) and a[itr1] != (i + 1)):
                    itr1 += 1
                #
                if (itr1 == n):
                    continue
                tmp1 =  a[i]
                a[i] = a[itr1]
                a[itr1] = tmp1
                count += 1
                if ((a[itr1] == (itr1 + 1)) or ((a[a[itr1] - 1]) == (itr1 + 1))):
                    A[itr1] = True
                #
                A[i] = True
            #
        #
        print(count)
        #
    #
    return





__main__()
