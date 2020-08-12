'''

1305. All Elements in Two Binary Search Trees

Given two binary search trees root1 and root2.
Return a list containing all the integers from both trees sorted in ascending order.

Example 1:

Input: root1 = [2,1,4], root2 = [1,0,3]
Output: [0,1,1,2,3,4]

'''

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> List[int]:
        def inorder(root, arr):
            if root == None:
                return
            inorder(root.left, arr)
            arr.append(root.val)
            inorder(root.right, arr)
            
        self.arr = []
        inorder(root1, self.arr)
        inorder(root2, self.arr)
        
        self.arr.sort()
        return self.arr