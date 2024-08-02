"""
1. make all rows to be rearranged,
2. lookup if columns are arranged in ascending order.
"""

def gridChallenge(grid):
    m = len(grid)
    n = len(grid[0])
    propn1 = True
    for i in range(0, m):
        grid[i] = sorted(grid[i])
    for i in range(0, n):
        for j in range(1, m):
            if (ord(grid[j][i]) < ord(grid[j - 1][i])):
                propn1 = False
                break
        if (not propn1):
            break
    if (propn1):
        return "YES"
    else:
        return "NO"
