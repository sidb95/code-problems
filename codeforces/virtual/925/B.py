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
        num1 = sum(a) / n
        FLAG1 = True
        if (len(a) == 1):
            print("YES")
        else:
            itr = n - 2
            ptr = n - 1
            while ((itr >= 0) and (ptr >= 0)):
                if (a[ptr] > num1):
                    FLAG1 = False
                    break
                elif (a[ptr] == num1):
                    ptr -= 1
                    if (itr == ptr):
                        itr -= 1
                    if (ptr == -1):
                        break
                else:
                    while ((ptr >= 0) and a[ptr] == num1):
                        ptr -= 1
                    itr = ptr - 1
                    while ((itr >= 0) and a[ptr] < num1):
                        if (a[itr] >= (num1 - a[ptr])):
                            a[itr] -= num1 - a[ptr]
                            a[ptr] = num1
                            ptr -= 1
                            if (a[itr] <= num1):
                                itr -= 1
                            break
                        else:
                            itr -= 1
                    #
                #
            #
            if (not FLAG1):
                print("NO")
            else:
                FLAG2 = True
                for i in range(0, n):
                    if (a[i] != num1):
                        FLAG2 = False
                        break
                if (not FLAG2):
                    print("NO")
                else:
                    print("YES")
                #
            #
        #
    #
    return




__main__()
