'''

102. Binary Tree Level Order Traversal

Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7

return its level order traversal as:

[
  [3],
  [9,20],
  [15,7]
]


'''


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        h = self.height(root)
        print(h)
        self.result = []
        for i in range(1,h+1):
            self.res = []
            self.eachlevel(root,i,self.res)
            self.result.append(self.res)
        return self.result
    
    def eachlevel(self, root: TreeNode, level, res) -> List[int]:
        if root is None:
            return 
        if level == 1:
            return res.append(root.val)
        else:
            self.eachlevel(root.left,level-1,res)
            self.eachlevel(root.right,level-1,res)
        
    def height(self, root: TreeNode) -> int:
        if root is None:
            return 0
        else:
            l = self.height(root.left)
            r = self.height(root.right)
            if l>r:
                return l+1
            else:
                return r+1

    