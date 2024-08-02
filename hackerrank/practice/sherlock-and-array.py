"""
1. prefix sum
2. iterate over n
"""

def balancedSums(arr):
    n = len(arr)
    propn1 = False
    for i in range(1, n):
        arr[i] += arr[i - 1]
    for i in range(0, n):
        if (i == 0):
            if (arr[n - 1] - arr[0] == 0):
                propn1 = True
                break
        if (arr[n - 1] - arr[i - 1] == arr[i]):
            propn1 = True
            break
    if (propn1):
        return "YES"
    else:
        return "NO" 
