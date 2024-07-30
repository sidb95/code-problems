"""
for i in range(0, n):
    p = c[i]
    q = c[i] + 1
    val1 = -1
    val2 = -1
    while (p >= 0):
        if (p in c):
            val1 = i - p
            break
        p -= 1
    if (p == -1):
        val1 = i
    while (q < n):
        if (q in c):
            val2 = i - q
            break
        q += 1
    maxVal = max(maxVal, max(val1, val2))
"""

# Complete the flatlandSpaceStations function below.
def flatlandSpaceStations(n, c):
    maxVal = -1
    c = tuple(c)
    for i in range(0, n):
        p = i
        q = i + 1
        val1 = 10000000000
        val2 = 10000000000
        while (p >= 0):
            if (p in c):
                val1 = i - p
                break
            p -= 1
        while (q < n):
            if (q in c):
                val2 = q - i
                break
            q += 1
        maxVal = max(maxVal, min(val1, val2))
    return maxVal
