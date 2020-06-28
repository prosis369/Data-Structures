'''

230. Kth Smallest Element in a BST
Given a binary search tree, write a function kthSmallest to find the kth smallest element in it.

Example 1:

Input: root = [3,1,4,null,2], k = 1
   3
  / \
 1   4
  \
   2
Output: 1

Constraints:
The number of elements of the BST is between 1 to 10^4.
You may assume k is always valid, 1 ≤ k ≤ BST's total elements.

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: TreeNode, k: int) -> int:
        self.res = list()
        self.result = self.inorder(root,self.res)
        return(self.result[k-1])
    
    def inorder(self, root: TreeNode, res) -> List[int]:
        if root != None:
            self.inorder(root.left,res)
            res.append(root.val)
            self.inorder(root.right,res)
        return res
        
        