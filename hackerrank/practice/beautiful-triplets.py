"""
three for loops
"""

def beautifulTriplets(d, arr):
    n = len(arr)
    count = 0
    for i in range(0, n - 2):
        for j in range(i + 1, n - 1):
            for k in range(j + 1, n):
                if ((arr[j] - arr[i] == d) and (arr[k] - arr[j] == d)):
                    count += 1
    return count
