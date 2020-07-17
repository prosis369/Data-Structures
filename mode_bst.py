'''

501. Find Mode in Binary Search Tree

Given a binary search tree (BST) with duplicates, find all the mode(s) (the most frequently occurred element) in the given BST.

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than or equal to the node's key.
The right subtree of a node contains only nodes with keys greater than or equal to the node's key.
Both the left and right subtrees must also be binary search trees.
 
For example:

Given BST [1,null,2,2],

   1
    \
     2
    /
   2
 

return [2]

Note: If a tree has more than one mode, you can return them in any order.

'''


# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root: TreeNode) -> List[int]:
        d = dict()
        
        Mode(root,d)
        print(d)
        
        max_value = -1
        result = []
        for i in d.keys():
            if d[i]>max_value:
                max_value = d[i]
                result = [i]
            elif d[i] == max_value:
                result.append(i)
        return result

def Mode(root,d):
    if root != None:
        if root.val in d.keys():
            d[root.val] +=1
        else:
            d[root.val] = 1
        Mode(root.left,d)
        Mode(root.right,d)