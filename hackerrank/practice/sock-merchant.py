"""
nums = [0..99], len(nums) = 100, nums_i = 0
for elmt in ar: nums[elmt - 1] += 1
count = 0
for elmt in nums: count += (elmt / 2)
"""

def sockMerchant(n, ar):
    nums = []
    for i in range(0, 100):
        nums.append(0)
    for elmt in ar:
        nums[elmt - 1] += 1
    count = 0
    for elmt in nums:
        count += int(elmt / 2)
    return count
