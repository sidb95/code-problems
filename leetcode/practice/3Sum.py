class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        S = {}
        n = len(nums)
        for i in range(0, n):
            if (nums[i] in S):
                S[nums[i]].append(i)
            else:
                S[nums[i]] = [i]
            #
        #
        a = []
        for i in range(0, n - 1):
            for j in range(i + 1, n):
                target = -(nums[i] + nums[j])
                if (target in S):
                    for elmt in S[target]:
                        if elmt != i and elmt != j:
                            b = sorted([nums[i], nums[j], nums[elmt]])
                            if b not in a:
                                a.append(b)
                        #
                    #
                #
            #
        #
        return a
