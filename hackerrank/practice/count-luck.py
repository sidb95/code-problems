def inBounds(m, n, i, j):
    return ((i >= 0 and i < m) and (j >= 0 and j < n))

def dfs(matrix, m, n, i, j, path, VIS):
    if ((i, j) in VIS):
        return (False, path)
    if (matrix[i][j] == 'M' and path != ""):
        return (False, path)
    if (matrix[i][j] == 'X'):
        return (False, path)
    if (matrix[i][j] == '*'):
        return (True, path)
    VIS[(i, j)] = True
    count1 = 0
    A = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
    for a_i in A:
        if (a_i not in VIS):
            if (inBounds(m, n, a_i[0], a_i[1])):
                if (matrix[a_i[0]][a_i[1]] != 'X'):
                    count1 += 1
    arr = ""
    for l1 in range(0, len(path)):
        arr += path[l1]
    if (count1 > 1):
        path += "L"
    else:
        path += 'l'
    if ((i >= 0 and i < m) and ((j - 1) >= 0 and (j - 1) < n)):
        if (matrix[i][j - 1] != 'X'):
            retTuple1 = dfs(matrix, m, n, i, j - 1, path, VIS)
            if (retTuple1[0]):
                return (True, retTuple1[1])
    path = arr
    if (count1 > 1):
        path += "R"
    else:
        path += "r"
    if ((i >= 0 and i < m) and ((j + 1) >= 0 and (j + 1) < n)):
        if (matrix[i][j + 1] != 'X'):
            retTuple2 = dfs(matrix, m, n, i, j + 1, path, VIS)
            if (retTuple2[0]):
                return (True, retTuple2[1])
    path = arr
    if (count1 > 1):
        path += "U"
    else:
        path += "u"
    if (((i - 1) >= 0 and (i - 1) < m) and ((j >= 0) and (j < n))):
        if (matrix[i - 1][j] != 'X'):
            retTuple3 = dfs(matrix, m, n, i - 1, j, path, VIS)
            if (retTuple3[0]):
                return (True, retTuple3[1])
    path = arr
    if (count1 > 1):
        path += "D"
    else:
        path += "d"
    if (((i + 1) >= 0 and (i + 1) < m) and ((j >= 0) and ((j < n)))):
        if (matrix[i + 1][j] != 'X'):
            retTuple4 = dfs(matrix, m, n, i + 1, j, path, VIS)
            if (retTuple4[0]):
                return (True, retTuple4[1])
    return (False, path)

def countLuckAux(path):
    count1 = 0
    i = 0
    n = len(path)
    while (i < n):
        if (path[i] >= 'A' and path[i] <= 'Z'):
            count1 += 1
        i += 1
    return count1

def countLuck(matrix, k):
    m = len(matrix)
    n = len(matrix[0])
    propn1 = False
    for i in range(0, m):
        for j in range(0, n):
            if (matrix[i][j] == 'M'):
                d1 = dfs(matrix, m, n, i, j, "", {})
                path = d1[1]
                print(path)
                if (countLuckAux(path) == k):
                    propn1 = True
                break
                #
            #
        #
        if (propn1):
            break
        #
    #
    if (propn1):
        return "Impressed"
    else:
        return "Oops!"
