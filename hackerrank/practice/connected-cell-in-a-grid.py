def inBounds(m, n, i, j):
    return ((i >= 0 and i < m) and (j >= 0 and j < n))

def dfs(matrix, m, n, i, j, VIS, count):
    if ((i, j) in VIS):
        return (VIS, count)
    VIS[(i, j)] = True
    if (inBounds(m, n, i + 1, j) and ((i + 1, j) not in VIS)):
        if (matrix[i + 1][j] == 1):
            count += 1
            d1 = dfs(matrix, m, n, i + 1, j, VIS, count)
            VIS = d1[0]
            count = d1[1]
    if (inBounds(m, n, i, j - 1) and ((i, j - 1) not in VIS)):
        if (matrix[i][j - 1] == 1):
            count += 1
            d1 = dfs(matrix, m, n, i, j - 1, VIS, count)
            VIS = d1[0]
            count = d1[1]
    if (inBounds(m, n, i - 1, j) and ((i - 1, j) not in VIS)):
        if (matrix[i - 1][j] == 1):
            count += 1
            d1 = dfs(matrix, m, n, i - 1, j, VIS, count)
            VIS = d1[0]
            count = d1[1]
    if (inBounds(m, n, i, j + 1) and ((i, j + 1) not in VIS)):
        if (matrix[i][j + 1] == 1):
            count += 1
            d1 = dfs(matrix, m, n, i, j + 1, VIS, count)
            VIS = d1[0]
            count = d1[1]
    if (inBounds(m, n, i - 1, j + 1) and ((i - 1, j + 1) not in VIS)):
        if (matrix[i - 1][j + 1] == 1):
            count += 1
            d1 = dfs(matrix, m, n, i - 1, j + 1, VIS, count)
            VIS = d1[0]
            count = d1[1]
    if (inBounds(m, n, i + 1, j - 1) and ((i + 1, j - 1) not in VIS)):
        if (matrix[i + 1][j - 1] == 1):
            count += 1
            d1 = dfs(matrix, m, n, i + 1, j - 1, VIS, count)
            VIS = d1[0]
            count = d1[1]
    if (inBounds(m, n, i - 1, j - 1) and ((i - 1, j - 1)not in VIS)):
        if (matrix[i - 1][j - 1] == 1):
            count += 1
            d1 = dfs(matrix, m, n, i - 1, j - 1, VIS, count)
            VIS = d1[0]
            count = d1[1]
    if (inBounds(m, n, i + 1, j + 1) and ((i + 1, j + 1) not in VIS)):
        if (matrix[i + 1][j + 1] == 1):
            count += 1
            d1 = dfs(matrix, m, n, i + 1, j + 1, VIS, count)
            VIS = d1[0]
            count = d1[1]
    return (VIS, count)
    

def connectedCell(matrix):
    m = len(matrix)
    n = len(matrix[0])
    count = 0
    VIS = {}
    for i in range(0, m):
        for j in range(0, n):
            if ((i, j) not in VIS):
                if (matrix[i][j] == 1):
                    d1 = dfs(matrix, m, n, i, j, VIS, 1)
                    VIS = d1[0]
                    count = max(count, d1[1])
                #
            #
        #
    #
    return count
