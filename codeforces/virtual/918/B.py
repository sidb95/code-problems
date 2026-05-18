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

def calcAnswerAux(s, i):
    num1 = (i + 1) % 3
    num2 = (i + 2) % 3
    if (s[num1] == 'B' and s[num2] == 'C'):
        return 'A'
    elif (s[num1] == 'C' and s[num2] == 'B'):
        return 'A'
    elif (s[num1] == 'A' and s[num2] == 'B'):
        return 'C'
    elif (s[num1] == 'B' and s[num2] == 'A'):
        return 'C'
    elif (s[num1] == 'C' and s[num2] == 'A'):
        return 'B'
    else:
        return 'B'
    #

def calcAnswer(s, c):
    if (s[0] == c):
        return calcAnswerAux(s, 0)
    elif (s[1] == c):
        return calcAnswerAux(s, 1)
    else:
        return calcAnswerAux(s, 2)
    #


def __main__():
    T = int(input())
    for t in range(0, T):
        s1 = input()
        s2 = input()
        s3 = input()
        c = '?'
        if c in s1:
            print(calcAnswer(s1, c))
        elif c in s2:
            print(calcAnswer(s2, c))
        else:
            print(calcAnswer(s3, c))
        #
    #
    return



__main__()
