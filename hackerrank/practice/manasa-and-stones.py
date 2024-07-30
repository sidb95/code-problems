"""
s_1 s_2 s_3 s_4 s_5
num1 = 0
after iter 1:
num1 = num1 + a, num1 + b
num1 = a, b
0, 3, 1, 2, 4
"""

def stones(n, a, b):
    nums = [0]
    arr = [a, b]
    num1 = 0
    for i in range(0, n):
        count = 0
        for j in range(num1, len(nums)):
            for l2 in range(0, 2):
                if ((nums[j] + arr[l2]) not in nums):
                    nums.append(nums[j] + arr[l2])
                    count += 1
        num1 = len(nums) - count
    retArr = []
    for i in range(num1, len(nums)):
        retArr.append(nums[i])
    return retArr
