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
        self.nums.pop(0)

    def front(self):
        return self.nums[0]
    
    def empty(self):
        return self.nums == []

class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if (root == None):
            return []
        Q = Queue()
        Q.insert((root, 1))
        currVal = 1
        prevNode = root
        a = []
        while (not Q.empty()):
            p1 = Q.front()
            Q.remove()
            if (p1[1] > currVal):
                a.append(prevNode[0].val)
                currVal += 1
            if (p1[0].left is not None):
                Q.insert((p1[0].left, p1[1] + 1))
            if (p1[0].right is not None):
                Q.insert((p1[0].right, p1[1] + 1))
            #
            prevNode = p1
        #
        a.append(prevNode[0].val)
        return a
    #
#
