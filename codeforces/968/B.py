"""
sbhatore
25 August 2024

# Assumptions:
#
#
#
# In:
# 1. n
# 2. a
#
#
# Out:
# 1. a1
#
#
# Solution:
# 1. while (len(a) != 1)
# 2.    - num1 = max(a)
# 3.    - 
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
        while (len(a) != 1):
            num1 = min(a)
            num2 = max(a)
            if (count % 2 == 0):
                j = a.index(num1)
                if (j - 1 >= 0):
                    a[j - 1] = max(a[j], a[j - 1])                    
                    a.pop(j)
                else:
                    a[0] = max(a[0], a[1])
                    a.pop(1)
            else:
                j = a.index(num2)
                if (j - 1 >= 0):
                    a[j - 1] = min(a[j], a[j - 1])
                    a.pop(j)
                else:
                    a[0] = min(a[0], a[1])
                    a.pop(1)
            count += 1
        #
        print(a[0])
    #
    return

__main__()
