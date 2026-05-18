def countSort(arr):
    n = len(arr)
    m = int(n / 2)
    dict1 = {}
    for i in range(0, n):
        j = int(arr[i][0])
        if (j in dict1):
            if (i < m):
                dict1[j].append('-')
            else:
                dict1[j].append(arr[i][1])
        else:
            if (i < m):
                dict1[j] = ['-']
            else:
                dict1[j] = [arr[i][1]]
    #
    str1 = ""
    #
    for k in sorted(dict1.keys()):
        s = ""
        for s1 in dict1[k]:
            s += s1 + " "
        str1 += s
    print(str1)
