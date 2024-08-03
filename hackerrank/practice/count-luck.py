def dfs(matrix, m, n, i, j, path):
    if (matrix[i][j] == 'M' and path != ""):
        return (False, path)
    if (matrix[i][j] == 'X'):
        return (False, path)
    if (matrix[i][j] == '*'):
        return (True, path)
    arr = ""
    for l1 in range(0, len(path)):
        arr += path[l1]
    path += "l"
    if ((i >= 0 and i < m) and ((j - 1) >= 0 and (j - 1) < n)):
        if (matrix[i][j - 1] != 'X'):
            retTuple = dfs(matrix, m, n, i, j - 1, path)
            if (retTuple[0]):
                return (True, retTuple[1])
    path = arr
    path += "r"
    if ((i >= 0 and i < m) and ((j + 1) >= 0 and (j + 1) < n)):
        if (matrix[i][j + 1] != 'X'):
            retTuple = dfs(matrix, m, n, i, j + 1, path)
            if (retTuple[0]):
                return (True, retTuple[1])
    path = arr
    path += "u"
    if (((i - 1) >= 0 and (i - 1) < m) and ((j >= 0) and (j < n))):
        if (matrix[i - 1][j] != 'X'):
            retTuple = dfs(matrix, m, n, i - 1, j, path)
            if (retTuple[0]):
                return (True, retTuple[1])
    path = arr
    path += "d"
    if (((i + 1) >= 0 and (i + 1) < m) and ((j >= 0) and ((j < n)))):
        if (matrix[i + 1][j] != 'X'):
            retTuple = dfs(matrix, m, n, i + 1, j, path)
            if (retTuple[0]):
                return (True, retTuple[1])
    return (False, path)

def countLuckAux(path):
    count = 1
    count1 = 0
    i = 1
    n = len(path)
    while (i < n):
        if (path[i] != path[i - 1]):
            count1 += 1
        i += 1
    if (count1 == 0):
        return count
    else:
        return count1

def countLuck(matrix, k):
    m = len(matrix)
    n = len(matrix[0])
    propn1 = False
    for i in range(0, m):
        for j in range(0, n):
            if (matrix[i][j] == 'M'):
                d1 = dfs(matrix, m, n, i, j, "")
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
