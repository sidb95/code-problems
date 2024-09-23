# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def traversal(self, root, node):
        if (root == None):
            return False
        if (root == node):
            return True
        else:
            return self.traversal(root.left, node) or self.traversal(root.right, node)

    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if (root == None):
            return None
        elif (self.traversal(p.left, q) or self.traversal(p.right, q)):
            return p
        elif (self.traversal(q.left, p) or self.traversal(q.right, p)):
            return q
        elif (p == q):
            return p
        elif (self.traversal(root.left, p) and self.traversal(root.right, q)):
            return root
        elif (self.traversal(root.right, p) and self.traversal(root.left, q)):
            return root
        else:
            return self.lowestCommonAncestor(root.left, p, q) or self.lowestCommonAncestor(root.right, p, q)
        return None
