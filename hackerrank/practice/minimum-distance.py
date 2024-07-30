"""
a_1 a_2 a_3 a_4 a_5
num1 = a_1
while (i < n and a[i] != num1)
    i += 1
if (i != n and a[i] == num1):
    minVal = min(minVal, j - i)
"""

def minimumDistances(a):
    n = len(a)
    i = 0
    minVal = 10000000000
    while (i < n):
        num1 = a[i]
        i += 1
        j = i
        while ((j < n) and (a[j]) != num1):
            j += 1
        if (j != n):
            minVal = min(minVal, j - i + 1)
    if (minVal == 10000000000):
        return -1
    else:
        return minVal
