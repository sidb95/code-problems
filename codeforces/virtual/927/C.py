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

def calcAnswer(a, n, count, itr, m):
    while (itr != n):
        count *= a[itr]
        if (count >= m):
            count = (count % m)
        itr += 1
    #
    return count


def __main__():
    T = int(input())
    for t in range(0, T):
        n, m = map(int, input().split())
        a = list(map(int, input().split()))
        s = input()
        itr = 0
        count = 1
        arr = []
        count = calcAnswer(a, n, count, itr, m)
        arr.append(count)
        #
        for i in range(0, len(s)):
            count = 1
            itr = 0
            if (s[i] == 'L'):
                a.pop(0)
            else:
                a.pop(len(a) - 1)
            if (len(a) > 0):
                arr.append(calcAnswer(a, len(a), count, itr, m))
        #
        for i in range(0, len(arr) - 1):
            print(arr[i], end=" ")
        print(arr[len(arr) - 1])
    return

    #
    return


__main__()
