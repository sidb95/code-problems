"""
the-number-of-winning-players
# sidb95
# 03 August 2024
# 
# Assumptions:

# In:
# 1. grid, m, n
# Out:
# 1. min(v1, v2)
# Summary:
# 1. v1 = minimum number of bits to flip to make all rows palindromic
# 2. v2 = minimum number of bits to flip to make all columns palindromic
# pseudocode:
"""

def calcAnswer(grid):
    m = len(grid)
    n = len(grid[0])
    v1 = 0
    v2 = 0
    k = 0
    #
    while (k < m):
        i = 0
        j = n - 1
        while (i < j):
            if (grid[k][i] != grid[k][j]):
                v1 += 1
            i += 1
            j -= 1
        k += 1
    #
    k = 0
    while (k < n):
        i = 0
        j = m - 1
        while (i < j):
            if (grid[i][k] != grid[j][k]):
                v2 += 1
            i += 1
            j -= 1
        k += 1
    return min(v1, v2)

def __main__():
    pass

__main__()
