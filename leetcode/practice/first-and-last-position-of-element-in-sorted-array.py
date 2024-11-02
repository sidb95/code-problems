class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        index = -1
        start = 0
        end = n - 1
        while (start <= end):
            mid = start + ((end - start) // 2)
            if (nums[mid] < target):
                start = mid + 1
            elif (nums[mid] == target):
                index = mid
                break
            else:
                end = mid - 1
            #
        #
        if (index == -1):
            return [-1, -1]
        else:
            start = 0
            end = index
            index1 = -1
            index2 = -1
            while (start <= end):
                mid = (start + (end - start) // 2)
                if (nums[mid] < target):
                    start = mid + 1
                elif (nums[mid] == target):
                    if ((mid - 1) >= 0):
                        if (nums[mid - 1] != target):
                            index1 = mid
                            break
                        else:
                            end = mid - 1
                        #
                    else:
                        index1 = mid
                        break
                else:
                    end = mid - 1
                #
            #
            start = index
            end = n - 1
            while (start <= end):
                mid = start + (end - start) // 2
                if (nums[mid] < target):
                    start = mid + 1
                elif (nums[mid] == target):
                    if ((mid + 1) < n):
                        if (nums[mid + 1] != target):
                            index2 = mid
                            break
                        else:
                            start = mid + 1
                        #
                    else:
                        index2 = mid
                        break
                    #
                else:
                    end = mid - 1
                #
            #
            return [index1, index2]
