'''

617. Merge Two Binary Trees

Given two binary trees and imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not.
You need to merge them into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of new tree.

Example 1:

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def mergeTrees(self, t1: TreeNode, t2: TreeNode) -> TreeNode:
        return(merge(t1,t2))

def merge(t1,t2):
    if t1 == None and t2 == None:
        return
    elif t1 == None and t2 != None:
        return(t2)
    elif t2 == None and t1 != None:
        return(t1)
    else:
        t1.val += t2.val
        t1.left = merge(t1.left,t2.left)
        t1.right = merge(t1.right,t2.right)
        return(t1)
    