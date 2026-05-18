"""
1. nums = []
2. nums = [a_1 - 2, a_2 - 3, a_3 - 5]
3. nums = [a_1 - 4, a_1 - 5, a_1 - 7, ]
"""

def gameOfStones(n):
    nums = [1, 7, 8, 14]
    for i in range(18, 101):
        if ((i - 18) % 4 == 0):
            nums.append(i)
    if n in nums:
        return "Second"
    else:
        return "First"
