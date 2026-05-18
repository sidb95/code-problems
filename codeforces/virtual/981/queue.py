class Queue:
    def __init__(self):
        self.nums = []

    def insert(self, val):
        self.nums.append(val)

    def front(self):
        if (not self.empty()):
            return self.nums[0]
    
    def remove(self):
        if (not self.empty()):
            self.nums = self.nums[1:]
    
    def empty(self):
        return (self.nums == [])

    def length(self):
        return len(self.nums)
