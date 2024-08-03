"""
the-number-of-winning-players
# sidb95
# 03 August 2024
# 
# Assumptions:

# In:
# 1. grid, m, n
# Out:
#
# Summary:
#
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
    if (v1 > v2):
        grid1 = grid
        while (k < n):
            i = 0
            j = m - 1
            while (i < j):
                if (grid[i][k] != grid[j][k]):
                    if (grid[i][k] == 0):
                        grid[i][k] = 1
                        grid1[j][k] = 0
                    else:
                        grid[i][k] = 1
                        grid1[j][k] = 1
                i += 1
                j -= 1
            k += 1
            #
        #
        k = 0
        #
        count1 = 0
        count2 = 0
        while (k < m):
            i = 0
            j = n - 1
            while (i < j):
                if (grid[k][i] != grid[k][j]):
                    count1 += 1
                if (grid1[k][i] != grid1[k][j])
                    count2 += 1
                i += 1
                j -= 1
            k += 1
            #
        return min(v2 + count1, v2 + count2)
        #
    else:
        grid1 = grid
        #
        k = 0
        #
        count1 = 0
        count2 = 0
        while (k < m):
            i = 0
            j = n - 1
            while (i < j):
                if (grid[k][i] != grid[k][j]):
                    if (grid[k][i] == 1):
                        grid[k][i] = 0
                        grid1[k][j] = 1
                    else:
                        grid[k][i] = 1
                        grid1[k][j] = 0
                i += 1
                j -= 1
            k += 1
            #
        while (k < n):
            i = 0
            j = m - 1
            while (i < j):
                if (grid[i][k] != grid[j][k]):
                    count1 += 1
                if (grid1[i][k] != grid1[j][k]):
                    count2 += 1
                i += 1
                j -= 1
            k += 1
            #
        return min(v1 + count1, v1 + count2)




def __main__():
    pass

__main__()
