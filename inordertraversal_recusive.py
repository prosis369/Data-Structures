'''

94. Binary Tree Inorder Traversal
Given a binary tree, return the inorder traversal of its nodes' values.

Example:
Input: [1,null,2,3]
   1
    \
     2
    /
   3

Output: [1,3,2]

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        self.res = list()
        return self.inorder(root,self.res)
        
    def inorder(self, root: TreeNode, res) -> List[int]:
        if root != None:
            self.inorder(root.left,res)
            res.append(root.val)
            self.inorder(root.right,res)
        return res
        
    
    