"""
in: nums
out: None

2 2 2(itr1) 3(itr2) 3 3 3 4 4
2 2 3 3 3 3 4 4
"""

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int: # type: ignore
        n = len(nums)
        itr1 = 0
        while ((itr1 < n) and (itr2 < n)):
            j = itr1
            num1 = nums[itr1]
            count = 0
            while ((j < n) and (nums[j] == num1) and (count < 2)):
                j += 1
                count += 1
            #
            itr2 = j
            while ((itr2 < n) and (nums[itr2] == num1)):
                itr2 += 1
            #
            k = itr2
            itr1 = j
            while (k < n):
                nums[j] = nums[k]
                j += 1
                k += 1
            #
        #
        answer = 0
        i = 0
        while (i < n):
            num1 = nums[i]
            count1 = 0
            while ((i < n) and (nums[i] == num1)):
                i += 1
                count1 += 1
            #
            if (count1 >= 2):
                answer += 2
            else:
                answer += 1
            #
        # 
        return answer
