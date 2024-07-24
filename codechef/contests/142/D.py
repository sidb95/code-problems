class Solution:
    def __init__(self):
        self.lis1 = []
    
    def powerSet(self, arr, i = 0):
        size1 = len(lis1)
        if (i == n):
            return self.lis1
        else:
            lis = []
            lis += self.lis1
            for j in range(0, len(self.lis1)):
                lis.append(arr[i] + self.lis1[j])
            return powerSet(self, arr, i + 1)
    
def __main__():
    S1 = Solution()
    S = []
    T = input()
    for t in range(0, T):
        N = input()
        arr = tuple(input().split())
        S = S1.powerSet(arr, 0)
    return