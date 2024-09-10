class Solution:
    def canJump(self, nums: List[int]) -> bool:
        S = {}
        n = len(nums)
        FLAG1 = True
        for i in range(0, n):
            S[i] = []
            for j in range(0, i):
                S[i].append(False)
            FLAG = False
            for r in range(0, i):
                if (S[r][i] is True):
                    FLAG = True
                    break
            if (i == 0):
                S[i].append(True)
                FLAG = True
            else:
                if (FLAG):
                    S[i].append(True)
            if (not FLAG):
                FLAG1 = False
                break
            k = i + 1
            for j in range(k, n):
                if (j <= k + nums[i] - 1):
                    S[i].append(True)
                else:
                    S[i].append(False)
            #
            if (S[i][n - 1]):
                FLAG1 = True
                break
        #
        if (not FLAG1):
            return False
        else:
            return True
        #
        return False 
