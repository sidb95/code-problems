"""
1 2 3 4 5 6
"""

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n
        if (k == 0):
            return None
        else:
            itr1 = k - 1
            itr2 = n - 1
            while (itr1 < k):
                temp = nums[itr2]

                nums[itr1] = temp
        