"""
arr, n, m
dict1: (arr[i], i)
i 0:n: if (m - arr[i]) in dict1: return sorted([i, dict1[m - arr[i]]]
"""

def icecreamParlor(m, arr):
    n = len(arr)
    dict1 = {}
    for i in range(1, n + 1):
        dict1[arr[i - 1]] = i
    for i in range(0, n):
        v1 = m - arr[i]
        if v1 in dict1:
            if ((i + 1) != dict1[v1]):
                return sorted([i + 1, dict1[v1]])
    return []
