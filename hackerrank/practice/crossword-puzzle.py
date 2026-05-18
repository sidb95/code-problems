def crosswordPuzzle(crossword, words):
    crossword1 = []
    n = len(words)
    m = 10
    for i in range(0, m):
        arr = []
        for j in range(0, m):
            arr.append(crossword[i][j])
        crossword1.append(arr)
    dict1 = {}
    for i in range(0, n):
        j = len(words[i])
        if j in dict1:
            dict1[j].append(words[i])
        else:
            dict1[j] = [words[i]]
        #
    #
    for i in range(0, m):
        str1 = ""
        for j in range(0, m):
            if (crossword1[i][j] == '-'):
                str1 += '-'
            if (((j == (m - 1)) and crossword1[i][j] == '-') or (crossword[i][j] != '-')):
                n1 = len(str1)
                if (n1 > 0):
                    if (n1 in dict1):
                        if (len(dict1[n1]) > 0):
                            str1 = dict1[n1][0]
                            dict1[n1] = dict1[n1][1:]
                        #
                    #
                    print(str1)
                    #
                    k = j
                    #
                    if (crossword1[i][j] != '-'):
                        k = j - 1
                    for l1 in range(n1 - 1, -1, -1):
                        crossword1[i][k] = str1[l1]
                        k -= 1
                    #
                #
            #
            str1 = ""
            #
        #
    #
    for i in range(0, m):
        str1 = ""
        for j in range(0, m):
            if (crossword1[j][i] == '-'):
                str1 += '-'
            if ((crossword1[j][i] != '-') or ((j == (m - 1)) and crossword1[j][i] == '-')):
                n1 = len(str1)
                if (n1 > 0):
                    if (n1 in dict1):
                        if (len(dict1[n1]) > 0):
                            str1 = dict1[n1][0]
                            dict1[n1] = dict1[n1][1:]
                        #
                    #
                    k = j
                    #
                    if (crossword1[j][i] != '-'):
                        k = j - 1
                    for l1 in range(n1 - 1, -1, -1):
                        crossword1[k][i] = str1[l1]
                        k -= 1
                    #
                #
                str1 = ""
            #
        #
    #
    crossword2 = []
    for i in range(0, m):
        str1 = ""
        for j in range(0, m):
            str1 += crossword1[i][j]
        crossword2.append(str1)
    return crossword2
