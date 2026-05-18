"""
for elmt in nums1
"""

def formingMagicSquare(s):
    nums1 = [[4, 9, 2], [3, 5, 7], [8, 1, 6]]
    nums2 = [[8, 3, 4], [1, 5, 9], [6, 7, 2]]
    nums3 = [[6, 1, 8], [7, 5, 3], [2, 9, 4]]
    nums4 = [[2, 7, 6], [9, 5, 1], [4, 3, 8]]
    nums5 = [[2, 9, 4], [7, 5, 3], [6, 1, 8]]
    nums6 = [[4, 3, 8], [9, 5, 1], [2, 7, 6]]
    nums7 = [[8, 1, 6], [3, 5, 7], [4, 9, 2]]
    nums8 = [[6, 7, 2], [1, 5, 9], [8, 3, 4]]
    arr = [nums1, nums2, nums3, nums4, nums5, nums6, nums7, nums8]
    minVal = 1000
    for i in range(0, 8):
        cost = 0
        for j in range(0, 3):
            for k in range(0, 3):
                cost += abs(arr[i][j][k] - s[j][k])
        minVal = min(minVal, cost)
    return minVal
