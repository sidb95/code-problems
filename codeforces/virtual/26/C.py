"""
sbhatore
04 August 2024

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
    for t in range(0, T):
        n = int(input())
        A = list(map(int, input().split()))
        c = 0
        n = len(A)
        i = 0
        FLAG1 = True
        while (i < n):
            FLAG = True
            if (c <= 0):
                if (A[i] < 0):
                    if ((i + 1) < n):
                        if (A[i + 1] <= 0):
                            while (((i + 1) < n) and (A[i + 1] == 0)):
                                i += 1
                            if (A[i + 1] < 0):
                                c += A[i]
                            else:
                                c = abs(c + A[i])
                        else:
                            c = abs(c + A[i])
                    else:
                        c = (abs(c + A[i]))
                else:
                    c = abs(c + A[i])
            else:
                if (A[i] < 0):
                    if (c + A[i] > 0):
                        c += A[i]
                    else:
                        if (i == n - 1):
                            c = abs(c + A[i])
                        else:
                            if (A[i + 1] <= 0):
                                while (((i + 1) < n) and (A[i + 1] == 0)):
                                    i += 1
                                if (A[i + 1] < 0):
                                    c += A[i]
                                else:
                                    c = abs(c + A[i])
                            else:
                                c = abs(c + A[i])
                            #
                        #
                    #
                else:
                    c = abs(c + A[i])
                #
            #
            i += 1
            #
        #
        print(c)
        #
    #
    return


__main__()
