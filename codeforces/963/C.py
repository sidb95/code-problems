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
# 1. make all evens odds
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
        dict1 = {}
        maxOdd = -1
        i1 = -1
        count = 0
        #
        for i in range(0, n):
            if((a[i] % 2) == 0):
                if a[i] in dict1:
                    dict1[a[i]] += 1
                else:
                    dict1[a[i]] = 1
            else:
                count += 1
                if (maxOdd < a[i]):
                    i1 = i
                    maxOdd = a[i]
        #
        count1 = 0
        #
        if (maxOdd == -1):
            print(0)
        elif (count == n):
            print(0)
        else:
            a = sorted(a)
            for i in range(0, n):
                num1 = a[i]
                if (num1 in dict1):
                    if (num1 < maxOdd):
                        count1 += 1
                        a[i] += maxOdd
                        maxOdd = a[i]
                        i1 = i
                    else:
                        if (maxOdd < a[i]):
                            a[i1] += a[i]
                        a[i] += a[i1]
                        maxOdd = a[i]
                        i1 = i
                        count1 += 2
                    #
                #
            #
            print(count1)

__main__()
