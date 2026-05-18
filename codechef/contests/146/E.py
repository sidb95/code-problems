"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. a_i, 0 <= i < n
#
#
# Out:
# 1. count, the number of ways the ball can be placed
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
        count = 0
        VIS = {}
        for i in range(0, n):
            VIS[i] = (True, True)
        for i in range(0, n):
            if (a[i] == 0):
                if (sum(a[:i]) == sum(a[i + 1:])):
                    count += 1
            num1 = sum(a[:i])
            num2 = sum(a[i + 1:])
            num3 = num1 + num2
            if ((num1 in ((a[i]), (a[i] + 1)))):
                j = i - 1
                while (j > 0):
                    if (a[j] != 0):
                        break
                    else:
                        if j in VIS:
                            if (VIS[j][0] and VIS[j][1]):
                                if ((num1 == a[i])):
                                    count += 2
                                    VIS[j] = (False, False)
                                else:
                                    count += 1
                                    VIS[j] = (False, False)
                            elif (VIS[j][0] or VIS[j][1]):
                                count += 1
                                VIS[j] = (False, False)
                    j -= 1
                #
            if (num2 in ((a[i]), (a[i] + 1))):
                j = i + 1
                while (j < n - 1):
                    if (a[j] != 0):
                        break
                    else:
                        if j in VIS:
                            if (VIS[j][0] and VIS[j][1]):
                                if (a[i] == num2):
                                    count += 2
                                    VIS[j] = (False, False)
                                else:
                                    count += 1
                                    VIS[j] = (False, False)
                            elif (VIS[j][0] or VIS[j][1]):
                                count += 1
                                VIS[j] = (False, False)
                    j += 1
                #
            if ((num3) in ((a[i] + 1), (a[i])) and (num1 != 0 and num2 != 0)):
                j = i - 1
                while (j > 0):
                    if (a[j] != 0):
                        break
                    else:
                        if j in VIS:
                            if (VIS[j][0] and VIS[j][1]):
                                if (a[i] == (num1 + num2)):
                                    count += 2
                                    VIS[j] = (False, False)
                                else:
                                    count += 1
                                    VIS[j] = (False, False)
                            elif (VIS[j][0] or VIS[j][1]):
                                count += 1
                                VIS[j] = (False, False)
                    j -= 1
                #
                j = i + 1
                while (j < n - 1):
                    if (a[j] != 0):
                        break
                    else:
                        if j in VIS:
                            if (VIS[j][0] and VIS[j][1]):
                                count += 2
                            elif (VIS[j][0] or VIS[j][1]):
                                count += 1
                        VIS[j] = (False, False)
                    j += 1
                #
            #
        #
        print(count)
    #
    return

__main__()
