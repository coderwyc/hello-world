# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a boolean
    def isSymmetric(self, root):
        if root is not None:
            return self.isSymmetric1(root.left, root.right)
        else:
            return True
    def isSymmetric1(self, left, right):        
        if left is None and right is None:
            return True
        elif (left is not None  and right is None) or (right is not None and left is None):            
            return False
        else:            
            return left.val == right.val and self.isSymmetric1(left.left, right.right) and \
            self.isSymmetric1(left.right, right.left)
