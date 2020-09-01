'''

701. Insert into a Binary Search Tree

Given the root node of a binary search tree (BST) and a value to be inserted into the tree, insert the value into the BST. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.
Note that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.
 
Constraints:

The number of nodes in the given tree will be between 0 and 10^4.
Each node will have a unique integer value from 0 to -10^8, inclusive.
-10^8 <= val <= 10^8
It's guaranteed that val does not exist in the original BST.

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: TreeNode, val: int) -> TreeNode:
        curr = root
        prev = curr
        
        while(curr != None):
            print(curr.val)
            print(prev.val)
            
            if val<curr.val:
                prev = curr
                curr = curr.left
            else:
                prev = curr
                curr = curr.right
                
        temp = TreeNode(val)
        if prev != None:
            if val<prev.val:
                prev.left = temp
            else:
                prev.right = temp
        else:
            root = temp
            
        return(root)
            
        