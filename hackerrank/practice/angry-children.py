def maxMin(k, arr):
    arr = sorted(arr)
    n = len(arr)
    count = 1000000001
    minVal = 0
    maxVal = 0
    j = k
    i = 0
    nums = arr[i:j]
    while (j < n):
        minVal = min(nums)
        maxVal = max(nums)
        count = min(count, maxVal - minVal)
        nums.remove(arr[i])
        nums.append(arr[j])
        i += 1
        j += 1
    return count
