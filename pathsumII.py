'''

113. Path Sum II

Given a binary tree and a sum, find all root-to-leaf paths where each path's sum equals the given sum.
Note: A leaf is a node with no children.

Example:
Given the below binary tree and sum = 22,

      5
     / \
    4   8
   /   / \
  11  13  4
 /  \    / \
7    2  5   1

Return:
[
   [5,4,11,2],
   [5,8,4,5]
]


'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: TreeNode, sum: int) -> List[List[int]]:
        res = []
        self.sum(root, sum, 0, [], res)
        return(res)
        
    def sum(self, root: TreeNode, sum, temp_sum, temp_res, res):
        if root == None:
            return 
        temp_res.append(root.val)
        temp_sum += root.val
        if root.right == None and root.left == None:
            if temp_sum == sum:
                # Make a copy of a list with the list() method
                res.append(list(temp_res))
        else:
            self.sum(root.left,sum,temp_sum,temp_res,res)
            self.sum(root.right,sum,temp_sum,temp_res,res)
        temp_res.pop()
