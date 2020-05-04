'''

Sum of all Leaf nodes in a Binary Search Tree.


'''

class Node:
    def __init__(self,key):
        self.left = None
        self.right =None
        self.val = key
        self.count =0
    
def insert(root,node):
    if root is None:
        root = node
    else:
        if root.val < node.val:
            if root.right is None:
               root.right = node
            else:
                insert(root.right,node)
        else:
            if root.left is None:
                root.left = node
            else:
                insert(root.left,node)
        
def sum(rootl): 

    if rootl == None:
        return 0
    
    if rootl.left is None and rootl.right is None:
        return rootl.val
    
    else:
        return sum(rootl.left) + sum(rootl.right)
            
def inorder(root):
    if root:
        inorder(root.left)
        print(root.val)
        inorder(root.right)

r = Node(50) 
insert(r,Node(30)) 
insert(r,Node(20)) 
insert(r,Node(40)) 
insert(r,Node(70)) 
insert(r,Node(60)) 
insert(r,Node(80)) 

# inorder(r)
k=sum(r)
print(k)