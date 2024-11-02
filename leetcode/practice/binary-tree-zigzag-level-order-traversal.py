# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Queue:
    def __init__(self):
        self.nums = []

    def insert(self, val):
        self.nums.append(val)
    
    def remove(self):
        num1 = self.nums[0]
        self.nums.pop(0)
    
    def front(self):
        return self.nums[0]

    def empty(self):
        return self.nums == []

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        Q = Queue()
        Q.insert((root, 1))
        a = []
        if (root is None):
            return a
        count = 1
        prevVal = -1
        arr = []
        FLAG = False
        while (not Q.empty()):
            p1 = Q.front()
            Q.remove()
            prevVal = p1[1]
            FLAG = True
            if (p1[1] == count):
                arr.append(p1[0].val)
            else:
                FLAG = False
                if (p1[1] % 2 == 1):
                    a.append(arr)
                else:
                    arr.reverse()
                    a.append(arr)
                arr = []
                arr.append(p1[0].val)
                count += 1
            if (p1[0].left):
                Q.insert((p1[0].left, p1[1] + 1))
            if (p1[0].right):
                Q.insert((p1[0].right, p1[1] + 1))
            #
        #
        if (arr != [] and FLAG and (prevVal % 2 == 1)):
            a.append(arr)
        elif (arr != []):
            arr.reverse()
            a.append(arr)
        return a