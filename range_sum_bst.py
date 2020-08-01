'''

938. Range Sum of BST

Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).
The binary search tree is guaranteed to have unique values.
 
Example 1:

Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
Output: 32

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: TreeNode, L: int, R: int) -> int:
        sum1 = []
        inorder(root,L,R,sum1)
        
        count = 0
        for i in sum1:
            if i >= L and i <= R:
                count+=i
        return count
    
def inorder(root,L,R,sum):
    if root == None:
        return 0
    inorder(root.left,L,R,sum)
    sum.append(root.val)
    inorder(root.right,L,R,sum)
            