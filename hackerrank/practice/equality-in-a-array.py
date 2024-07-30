def equalizeArray(arr):
    arr = sorted(arr)
    n = len(arr)
    i = 0
    maxVal = 0
    #
    while (i < n):
        j = i
        num1 = arr[i]
        count = 0
        while ((j < n) and (num1 == arr[j])):
            j += 1
            count += 1
        maxVal = max(maxVal, count)
        i = j
    return (n - maxVal)
