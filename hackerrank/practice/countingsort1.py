def countingSort(arr):
    nums = []
    for i in range(0, 100):
        nums.append(0)
    n = len(arr)
    for i in range(0, n):
        nums[arr[i]] += 1
    return nums
