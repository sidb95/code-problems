"""
2 (itr1 = 0, count = 0) 2 (itr1 = 1, count = 1) 2 (itr1 = 2, count = 2) 2 3 (itr2) 3 3 4 4
"""

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        itr1 = 0
        while ((itr1 < n) and (itr2 < n)):
            num1 = nums[itr1]
            count = 0
            while ((itr1 < n) and (nums[itr1] == num1) and (count < 2)):
                itr1 += 1
                count += 1
            #
            itr2 = itr1
            while ((itr2 < n) and (nums[itr2] == num1)):
                itr2 += 1
            #
            if (itr2 == n):
                break
            else:
                itrTemp = itr2
                while ((itr2 < n) and (itr1 < itrTemp)):
                    nums[itr1] = nums[itr2]
                    itr1 += 1
                    itr2 += 1
                #
                itr1 = itrTemp
            #
        #
        return
            

         