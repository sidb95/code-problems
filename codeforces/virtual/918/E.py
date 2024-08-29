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

def calcAnswer(a, n, i):
    if (i == 0):
        if (a[0] == a[1]):
            return True
    elif (i == 1):
        if (a[2] == a[1]):
            return True
    elif (i == 2):
        if (a[2] == a[3]):
            return True
    else:
        if ((i != n - 1) and a[i] == a[i + 1]):
            return True
        else:
            for j in range(0, i):
                if (i % 2 == 0):
                    if (j % 2 == 0):
                        if (j != 0):
                            if (a[i] - a[j] == a[i - 1] - a[j - 1]):
                                return True
                        if (j != i and i != n - 1):
                            if (a[i] - a[j] == a[i + 1] - a[j + 1]):
                                return True
                            #
                        #
                    #
                else:
                    if (j % 2 == 1):
                        if (j == 1):
                            if (a[i] == a[i - 1] - a[0]):
                                return True
                        if (a[i] - a[j] == a[i - 1] - a[j - 1]):
                            return True
                        #
                        if (j != i and i != n - 1):
                            if (a[i] - a[j] == a[i + 1] - a[j + 1]):
                                return True
                            #
                        #
                    #
                #
            #
        #
    #
    return False
            


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        if (n == 1):
            print("NO")
        elif (n == 2):
            if (a[0] == a[1]):
                print("YES")
            else:
                print("NO")
        elif (n == 3):
            if (a[0] + a[2] == a[1]):
                print("YES")
            else:
                print("NO")
        else:
            for i in range(2, n, 2):
                a[i] += a[i - 2]
            for i in range(3, n, 2):
                a[i] += a[i - 2]
            FLAG = False
            for i in range(0, n):
                if (calcAnswer(a, n, i)):
                    FLAG = True
                    break
                #
            #
            if (FLAG):
                print("YES")
            else:
                print("NO")
            #
        #
    #
    return


__main__()
