'''

1302. Deepest Leaves Sum
Given a binary tree, return the sum of values of its deepest leaves.

Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15
 
Constraints:
The number of nodes in the tree is between 1 and 10^4.
The value of nodes is between 1 and 100.

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: TreeNode) -> int:
        def height(root):
            if root == None:
                return 0
            l = height(root.left)
            r = height(root.right)
            if(l>r):
                return l+1
            else:
                return r+1
        
        def deepest_leaves(root, h):
            if root == None:
                return
            if h == 1:
                self.sum+=root.val
            deepest_leaves(root.left, h-1)
            deepest_leaves(root.right, h-1)
        
        self.sum = 0
        h = height(root)
        deepest_leaves(root, h)
        return(self.sum)
        
        
        