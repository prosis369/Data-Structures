'''

112. Path Sum
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.
Note: A leaf is a node with no children.

Example:
Given the below binary tree and sum = 22,

      5
     / \
    4   8
   /   / \
  11  13  4
 /  \      \
7    2      1

Return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        if root:
            # if root.left == None and root.right == None:
            #     if root.val == sum:
            #         return True
            #     else:
            #         return False
            # else:
            return pathsum(root,sum,0,-1)
        else:
            return False
    
def pathsum(root,s,curr,flag):
    if root == None and curr == s and flag == 1:
        return True
    if root == None:
        return False
    else:
        curr+=root.val
        if root.right == None:
            return pathsum(root.left,s,curr,1)
        if root.left == None:
            return pathsum(root.right,s,curr,1)
        else:
            return(pathsum(root.left,s,curr,1) or pathsum(root.right,s,curr,1))
    
    