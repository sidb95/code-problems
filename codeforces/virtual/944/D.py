"""
sbhatore
04 August 2024

# Assumptions:
#
#
#
# In:
# 1. T, s
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
        s = input()
        n = len(s)
        i = 0
        count = 0
        FLAG1 = False
        while (i < n):
            FLAG = False
            count1 = 0
            if (s[i] == '0'):
                j = i
                while ((j < n) and (s[j] == '0')):
                    count1 += 1
                    j += 1
                count += 1
                while ((j < n) and (s[j] == '1')):
                    FLAG = True
                    FLAG1 = True
                    count1 += 1
                    j += 1
                if (FLAG):
                    count += 1
                i = j
            else:
                j = i
                while ((j < n) and (s[j] == '1')):
                    j += 1
                count += 1
                i = j
            #
        #
        if (FLAG1):
            count -= 1
        print(count)
    #
    return


__main__()
