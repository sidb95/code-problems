"""
sbhatore
28 August 2024

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
        s = input()
        s = list(s)
        maxVal = -1
        if (n == 1):
            if (s[0] == 'U'):
                print("Yes")
            else:
                print("No")
        else:
            while (len(s) != 1):
                j = -1
                k = -1
                for i in range(0, len(s)):
                    if (i == 0):
                        if (s[len(s) - 1] == 'U' and s[1] == 'U'):
                            j = i
                            s[n - 1] = 'D'
                            s[1] = 'D'
                            break
                        elif (s[len(s) - 1] == 'U' or s[1] == 'U'):
                            k = i
                    elif (i == len(s) - 1):
                        if (s[len(s) - 2] == 'U' and s[0] == 'U'):
                            j = i
                            s[len(s) - 2] = 'D'
                            s[0] = 'D'
                            break
                        elif (s[len(s) - 2] == 'U' or s[0] == 'U'):
                            k = i
                    else:
                        if (s[i - 1] == 'U' and s[i + 1] == 'U'):
                            j = i
                            s[i - 1] = 'D'
                            s[i + 1] = 'D'
                            break
                        elif (s[i - 1] == 'U' or s[i + 1] == 'U'):
                            k = i
                        #
                    #
                #
                if (j == -1):
                    if (k == 0):
                        if (len(s) == 2):
                              s.pop(1)
                        else:
                            if (s[len(s) - 1] == 'D'):
                                s[len(s) - 1] = 'U'
                            else:
                                s[len(s) - 1] = 'D'
                            if (s[1] == 'D'):
                                s[1] = 'U'
                            else:
                                s[1] = 'D'
                            s.pop(k)
                    elif (k == len(s) - 1):
                        if (len(s) == 2):
                            s.pop(0)
                        else:
                            if (s[0] == 'D'):
                                s[len(s) - 1] = 'U'
                            else:
                                s[len(s) - 1] = 'D'
                            if (s[len(s) - 2] == 'D'):
                                s[len(s) - 2] = 'U'
                            else:
                                s[len(s) - 2] = 'D'
                            #
                            s.pop(k)
                        #
                    else:
                        if (s[k - 1] == 'D'):
                            s[k - 1] = 'U'
                        else:
                            s[k - 1] = 'D'
                        if (s[k + 1] == 'D'):
                            s[k + 1] = 'U'
                        else:
                            s[k + 1] = 'D'
                        #
                        s.pop(k)
                    #
                else:
                    s.pop(j)
                #
            #
            if (n % 2 == 0):
                if (s[0] == 'D'):
                    print("Yes")
                else:
                    print("No")
            else:
                if (s[0] == 'U'):
                    print("Yes")
                else:
                    print("No")
            #
        #
    #
    return


__main__()

