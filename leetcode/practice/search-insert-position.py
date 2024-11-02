class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        n = len(nums)
        start = 0
        end = n - 1
        while (start <= end):
            mid = start + ((end - start) // 2)
            if (nums[mid] < target):
                start = mid + 1
            elif (nums[mid] == target):
                return mid
            else:
                end = mid - 1
            #
        #
        return start
