class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        n = len(nums)
        numsSet = set(nums)
        longest = 0
        for num in nums:
            if (num - 1) not in numsSet:
                length = 1
                while ((num + length) in numsSet):
                    length += 1
                longest = max(longest, length)
            #
        #
        return longest