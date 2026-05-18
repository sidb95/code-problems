class Solution:
    def findMin(self, nums: List[int]) -> int:
        n = len(nums)
        FLAG = None
        if (n == 1):
            return nums[0]
        if (nums[0] <= nums[n - 1]):
            FLAG = True
        else:
            FLAG = False
        #
        if (FLAG):
            return nums[0]
        else:
            start = 0
            end = n - 1
            while (start <= end):
                mid = start + ((end - start) // 2)
                if ((mid - 1) >= 0):
                    if (nums[mid - 1] > nums[mid]):
                        return nums[mid]
                    elif (nums[mid - 1] == nums[mid]):
                        start = mid + 1
                    else:
                        if (nums[mid] >= nums[n - 1]):
                            start = mid + 1
                        else:
                            end = mid - 1
                        #
                    #
                else:
                    if ((mid + 1) < n):
                        if (nums[mid + 1] < nums[mid]):
                            return nums[mid + 1]
            return 0
