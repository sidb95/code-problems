def miniMaxSum(arr):
    n = len(arr)
    sum = 0
    for i in range(0, n):
        sum += arr[i]
    minVal = sum - arr[0]
    maxVal = sum - arr[0]
    for i in range(0, n):
        sum -= arr[i]
        minVal = min(minVal, sum)
        maxVal = max(maxVal, sum)
        sum += arr[i]
    print(minVal, maxVal)
