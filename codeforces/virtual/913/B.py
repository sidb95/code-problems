"""
sbhatore
6 Sep 2024

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
# 1. place '-' on the place where it is to be deleted
#
#
# pseudocode:
"""

def calcAnswer():
    pass


def __main__():
    T = int(input())
    for t in range(0, T):
        s = input()
        n = len(s)
        a = []
        A = []
        for i in range(0, n):
            if (s[i] == 'b'):
                num1 = -1
                j = i - 1
                while ((j >= 0) and ((ord(s[j]) >= ord('A') and ord(s[j]) <= ord('Z')) or (s[j] == '-' or s[j] == 'b' or s[j] == 'B'))):
                    j -= 1
                if (j != -1):
                    num1 = j
                if (num1 != -1):
                    if (num1 == 0):
                        s = "-" + s[1:]
                    else:
                        s = s[:num1] + "-" + s[num1 + 1:]
                #
            #
            elif (s[i] == 'B'):
                num1 = -1
                j = i - 1
                while ((j >= 0) and ((ord(s[j]) >= ord('a') and ord(s[j]) <= ord('z')) or (s[j] == '-') or s[j] == 'b' or s[j] == 'B')):
                    j -= 1
                if (j != -1):
                    num1 = j
                if (num1 != -1):
                    if (num1 == 0):
                        s = "-" + s[1:]
                    else:
                        s = s[:num1] + "-" + s[num1 + 1:]
                #
            #
        #
        for i in range(0, n):
            if (s[i] != '-' and s[i] != 'b' and s[i] != 'B'):
                print(s[i], end="")
            #
        #
        print("")
    #
    return


__main__()
