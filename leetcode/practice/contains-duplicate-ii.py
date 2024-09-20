class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        n = len(nums)
        S = {}
        for i in range(0, n):
            if nums[i] in S:
                S[nums[i]].append(i)
            else:
                S[nums[i]] = [i]
        #
        for i in range(0, n):
            num1 = len(S[nums[i]])
            if (num1 >= 2):
                a = S[nums[i]]
                for j in range(1, num1):
                    if (a[j] - a[j - 1] <= k):
                        return True
                    #
                #
            #
        #
        return False


