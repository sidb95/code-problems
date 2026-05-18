def lonelyinteger(a):
    dict1 = {}
    n = len(a)
    for i in range(0, n):
        if (a[i] in dict1):
            dict1[a[i]] = False
        else:
            dict1[a[i]] = True
    for i in range(0, n):
        if (dict1[a[i]]):
            return a[i]
    return a[0]
