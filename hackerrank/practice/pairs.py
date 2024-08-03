def pairs(k, arr):
    n = len(arr)
    dict1 = {}
    count = 0
    #
    for i in range(0, n):
        if (arr[i] in dict1):
            dict1[arr[i]].append(i)
        else:
            dict1[arr[i]] = [i]
        #
    #
    for i in range(0, n):
        num1 = arr[i] + k
        if num1 in dict1:
            count += len(dict1[num1])
        #
    #
    return count
