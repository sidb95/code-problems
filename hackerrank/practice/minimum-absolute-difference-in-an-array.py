"""
nums = sorted(arr)
nums, n
minVal = 100000001
i:1 -> n - 1
return min(minVal, )
"""

def minimumAbsoluteDifference(arr):
    n = len(arr)
    nums = sorted(arr)
    minVal = 100000001
    for i in range(1, n):
        minVal = min(minVal, abs(nums[i] - nums[i - 1]))
    return minVal
