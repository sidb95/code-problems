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
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        s = input()
        b = [0] * n
        c = [False] * n
        for i in range(0, n):
            count = 0
            FLAG = True
            if (s[i] == '0' and a[i] == (i + 1)):
                count += 1
            else:
                itr1 = i
                if (c[itr1]):
                    print(b[itr1], end=" ")
                    FLAG = False
                itr2 = a[itr1] - 1
                while ((itr2 != itr1) and FLAG):
                    if (s[itr2] == '0'):
                        count += 1
                    itr2 = a[itr2] - 1
                #
                if (FLAG):
                    if (itr2 == itr1):
                        if (s[itr1] == '0'):
                            count += 1
                        #
                    #
                #
            #
            if (FLAG):                
                itr1 = i
                b[itr1] = count
                c[itr1] = True
                itr2 = a[itr1] - 1
                while (itr2 != itr1):
                    b[itr2] = count
                    c[itr2] = True
                    itr2 = a[itr2] - 1
                print(count, end=" ")
        #
        print("")
    #
    return


__main__()
