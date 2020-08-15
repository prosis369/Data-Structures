'''

1161. Maximum Level Sum of a Binary Tree

Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.
Return the smallest level X such that the sum of all the values of nodes at level X is maximal.

Example 1:

Input: [1,7,0,7,-8,null,null]
Output: 2
Explanation: 
Level 1 sum = 1.
Level 2 sum = 7 + 0 = 7.
Level 3 sum = 7 + -8 = -1.
So we return the level with the maximum sum which is level 2.

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxLevelSum(self, root: TreeNode) -> int:
        def height(root):
            if root == None:
                return(0)
            l = height(root.left)
            r = height(root.right)
            if l>r:
                return l+1
            else:
                return r+1
        
        def levelorder(root, level):
            if root == None:
                return
            if level == 1:
                self.s+=root.val
            levelorder(root.left, level-1)
            levelorder(root.right, level-1)
        
        h = height(root)
        
        l = 0
        m = float('-inf')
        for i in range(h):
            self.s = 0
            levelorder(root, i+1)
            print(self.s)
            if self.s>m:
                m = self.s
                l = i+1
        return(l)
            
        