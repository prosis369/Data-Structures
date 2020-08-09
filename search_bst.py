'''

700. Search in a Binary Search Tree

Given the root node of a binary search tree (BST) and a value. 
You need to find the node in the BST that the node's value equals the given value. 
Return the subtree rooted with that node. If such node doesn't exist, you should return NULL.

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def searchBST(self, root: TreeNode, val: int) -> TreeNode:
        
        curr = root
        prev = None
        
        while(curr != None and curr.val != val):
            prev = curr
            if(val<curr.val):
                curr = curr.left
            else:
                curr = curr.right
        return curr
        