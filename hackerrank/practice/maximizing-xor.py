def maximizingXor(l, r):
    maxVal = 0
    for i in range(l, r):
        for j in range(l + 1, r + 1):
            maxVal = max(maxVal, (i ^ j))
    return maxVal
