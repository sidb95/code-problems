"""
sbhatore
04 August 2024

# Assumptions:
# 1. The solution exists,
# 2. The solution can be coded in Python3
#
# In:
# 1. x, y
# 2. count += int(y / 2)

# 3. count1 = (count) * 11
# 4. if (count1 > x):
        return count
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
        x, y = map(int, input().split())
        n1 = int(x / 2)
        n2 = int(y / 11)
        if ((x == 0) and (y == 0)):
            print(0)
        else:
            count = 0
            if ((n1 % 2) == 1):
                if (n1 == 0):
                    if (y <= 13):
                        print(1)
                    else:
                        n2 = int(y / 15)
                        if ((n2 * 15) == y):
                            print(count + n2)
                        else:
                            print(count + n2 + 1)
                elif (n2 == 0):
                    print(n1 + 1)
                else:
                    count += n1 + 1
                    if (y <= (11 * (n1) + 13)):
                        print(count)
                    else:
                        y -= (11 * (n1) + 13)
                        n2 = int(y / 15)
                        if ((n2 * 15) == y):
                            print(count + n2)
                        else:
                            print(count + n2 + 1)
                        #
                    #
                #
            else:
                if (n1 == 0):
                    if (y <= 13):
                        print(1)
                    else:
                        y -= 13
                        count += 1
                        n2 = int(y / 15)
                        if ((n2 * 15) == y):
                            print(count + n2)
                        else:
                            print(count + n2 + 1)
                        #
                    #
                #
                elif (n2 == 0):
                    pass
                elif (y <= (11 * n1)):
                    print(count)
                else:
                    y -= (11 * n1)
                    n2 = int(y / 15)
                    if ((n2 * 15) == y):
                        print(count + n2)
                    else:
                        print(count + n2 + 1)
        #
    #
    return


__main__()
