class Solution:
    def __init__(self):
        self.lis1 = []
    
    def powerSet(self, arr, n, i = 0):
        if (i == n):
            return self.lis1
        else:
            size1 = len(self.lis1)
            nums = self.lis1
            numerics = self.lis1
            for j in range(0, len(nums)):
                nums[j].append(arr[i])
                self.lis1.append(nums[j])
            self.lis1 += numerics
            return self.powerSet(self, arr, i + 1)
    
def __main__():
    S1 = Solution()
    S = []
    T = input()
    for t in range(0, T):
        N = input()
        arr = tuple(input().split())
        for i in range(0, len(arr)):
            S1.lis1.append(list(arr[i]))
        S = S1.powerSet(arr, len(arr), 0)
        for s in range(0, len(S)):
            val = 0
            for i in range(0, len(s)):
                val = val ^ s[i]
    return