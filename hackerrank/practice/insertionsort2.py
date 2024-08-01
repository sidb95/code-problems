def insertionSort2(n, arr):
    i = 1
    #
    while (i < n):
        j = i
        while ((j >= 1) and (arr[j] < arr[j - 1])):
            TEMP = arr[j]
            arr[j] = arr[j - 1]
            arr[j - 1] = TEMP
            j -= 1
        i += 1
        #
        for k in range(0, n - 1):
            print(arr[k], end=" ")
        print(arr[n - 1])
    #
    return
