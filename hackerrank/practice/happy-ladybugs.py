def happyLadybugs(b):
    n = len(b)
    arr = []
    FLAG = False
    propn1 = True
    for i in range(0, n):
        if (b[i] != '_'):
            arr.append(b[i])
        else:
            FLAG = True
    if (FLAG):
        arr = sorted(arr)
    m = len(arr)
    i = 0
    while (i < m):
        count = 0
        j = i
        c = arr[i]
        while ((j < m) and (arr[j] == c)):
            j += 1
            count += 1
        if ((count == 1)):
            propn1 = False
            break
        i = j
    if (propn1 and FLAG):
        return "YES"
    elif (propn1 and (not FLAG)):
        return "YES"
    else:
        return "NO"
