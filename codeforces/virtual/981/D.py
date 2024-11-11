"""
sbhatore
3 Sep 2024

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
# 1. fill up the upper right corner of the dp table
# 2. Check from left to right, top to bottom if there is a 0 present
# 3. Take that 0 in the count, then calculate the solution recursively
# pseudocode:
"""

def calcAnswer(a, dp, i, n):
    if (i >= n):
        return 0
    else:
        count = 0
        for p in range(i, n):
            for q in range(0, len(dp[p])):
                if (dp[p][q] == 0):
                    count = max(count, 1 + calcAnswer(a, dp, p + 1 + q, n))
                #
            #
        #
        return count


def __main__():
    T = int(input())
    for t in range(0, T):
        n = int(input())
        a = list(map(int, input().split()))
        dp = {}
        for i in range(0, n):
            dp[i] = [a[i]]
            sum = a[i]
            for j in range(i + 1, n):
                sum += a[j]
                dp[i] += [sum]
            #
        #
        count = 0
        for i in range(0, n):
            count = max(count, calcAnswer(a, dp, i, n))
        print(count)
    #
    return


__main__()
