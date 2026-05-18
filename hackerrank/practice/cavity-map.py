def cavityMap(grid):
    m = len(grid)
    n = len(grid[0])
    A = []
    for i in range(0, m):
        A.append(grid[i])
    i = 1
    #
    while ((i < m - 1)):
        #
        for j in range(1, n - 1):
            FLAG = True
            h1 = int(grid[i][j])
            arr = [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]
            #
            for k in range(0, 4):
                if(int(grid[arr[k][0]][arr[k][1]]) >= h1):
                    FLAG = False
                    break
            #
            if (FLAG):
                A[i] = A[i][:j] + 'X' + A[i][j + 1:]
        i += 1
    #
    return A
