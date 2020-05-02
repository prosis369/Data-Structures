'''

101. Symmetric Tree
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3

 
But the following [1,2,2,null,3,null,3] is not:

    1
   / \
  2   2
   \   \
   3    3


'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None


class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        return self.symm(root,root)
        
    def symm(self, root1: TreeNode, root2: TreeNode) -> bool:
        if ((root1 == None) and (root2 == None)): 
            return True
        elif ((root1 == None) or (root2 == None)): 
            return False
        else:
            return ((root1.val == root2.val) and self.symm(root1.right,root2.left) and self.symm(root1.left, root2.right))