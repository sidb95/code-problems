class BinaryHeap:
    def __init__(self):
        self.nums = []

    def max_heapify_up(self):
        i = len(self.nums) - 1
        if (i == 0):
            return
        else:
            parent = (i - 1) // 2
            while (i > 0 and self.nums[parent] < self.nums[i]):
                TEMP = self.nums[parent]
                self.nums[parent] = self.nums[i]
                self.nums[i] = TEMP
                i = parent
                parent = (i - 1) // 2
            #
        #
    
    def max_heapify_down(self):
        n = len(self.nums)
        i = 0
        child1 = None
        child2 = None
        if (n > 1):
            child1 = 1
        if (n > 2):
            child2 = 2
        while (not((child1 is None) and (child2 is None))):
            if (child2 is None):
                if (self.nums[i] < self.nums[child1]):
                    TEMP = self.nums[child1]
                    self.nums[child1] = self.nums[i]
                    self.nums[i] = TEMP
                    i = child1
                    if ((2 * i + 1) < n):
                        child1 = (2 * i + 1)
                    else:
                        child1 = None
                    if ((2 * i + 2) < n):
                        child2 = (2 * i + 2)
                    else:
                        child2 = None
                    #
                else:
                    child1 = None
                #
            else:
                if (self.nums[child1] < self.nums[child2]):
                    if (self.nums[i] < self.nums[child2]):
                        TEMP = self.nums[child2]
                        self.nums[child2] = self.nums[i]
                        self.nums[i] = TEMP
                        i = child2
                        if ((2 * i + 1) < n):
                            child1 = (2 * i + 1)
                        else:
                            child1 = None
                        if ((2 * i + 2) < n):
                            child2 = (2 * i + 2)
                        else:
                            child2 = None
                    else:
                        child1 = None
                        child2 = None
                    #
                else:
                    if (self.nums[i] < self.nums[child1]):
                        TEMP = self.nums[child1]
                        self.nums[child1] = self.nums[i]
                        self.nums[i] = TEMP
                        i = child1
                        if ((2 * i + 1) < n):
                            child1 = (2 * i + 1)
                        else:
                            child1 = None
                        if ((2 * i + 2) < n):
                            child2 = (2 * i + 2)
                        else:
                            child2 = None
                        #
                    else:
                        child1 = None
                        child2 = None
                    #
                #
            #
        #  

    def insert(self, elmt):
        self.nums.append(elmt)
        self.max_heapify_up()

    def buildHeap(self, A):
        for elmt in A:
            self.insert(elmt)
        return self.nums

    def delete(self):
        n = len(self.nums)
        retVal = self.nums[0]
        self.nums[0] = self.nums[n - 1]
        self.nums.pop(n - 1)
        self.max_heapify_down()
        return retVal

class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        H = BinaryHeap()
        A = H.buildHeap(nums)
        for i in range(0, k):
            num1 = H.delete()
            if (i == k - 1):
                return num1
