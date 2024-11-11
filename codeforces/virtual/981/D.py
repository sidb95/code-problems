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

def calcAnswer(a, dp, i, n, A):
    if (i >= n):
        return 0
    else:
        count = 0
        if (i in A.keys()):
            return A[i]
        for p in range(i, n):
            for q in range(0, len(dp[p])):
                if (dp[p][q] == 0):
                    if ((p + 1 + q) in A.keys()):
                        count = max(count, A[p + 1 + q])
                    else:
                        count = max(count, 1 + calcAnswer(a, dp, p + 1 + q, n, A))
                        A[p + 1 + q] = count
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
        A = {}
        for i in range(0, n):
            count = max(count, calcAnswer(a, dp, i, n, A))
            A[i] = count
        print(count)
    #
    return


__main__()
