def maxSubarray(arr):
    maxVal = 0
    num2 = 0
    n = len(arr)
    num1 = 0
    for i in range(0, n):
        num1 += arr[i]
        if (num1 < 0):
            num1 = 0
        else:
            maxVal = max(maxVal, num1)
        #
        if (arr[i] > 0):
            num2 += arr[i]
        #
    #
    if (maxVal == 0):
        if (arr.count(0) == 0):
            maxVal = max(arr)
        #
    #
    if (num2 == 0):
        if (arr.count(0) == 0):
            num2 = max(arr)
    return [maxVal, num2]
