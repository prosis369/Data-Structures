'''

25. Reverse Nodes in k-Group

Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.
k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.

Example:

Given this linked list: 1->2->3->4->5
For k = 2, you should return: 2->1->4->3->5
For k = 3, you should return: 3->2->1->4->5

Note:

Only constant extra memory is allowed.
You may not alter the values in the list's nodes, only nodes itself may be changed.

'''


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: ListNode, k: int) -> ListNode:
        p = head
        count = 0
        while(p!=None):
            count+=1
            p = p.next
        kcount = 0
        return reverse(head,k,count,kcount)
        
def reverse(head,k,n,kcount):
    c = 0
    curr = head
    temp = None
    prev = None
    
    if kcount+k-1 >= n:
        return curr
    
    while(c<k and curr != None):
        temp = curr.next
        curr.next = prev
        prev = curr
        curr = temp
        c+=1
        kcount+=1
    if temp != None:
        head.next = reverse(temp,k,n,kcount)
    
    return prev
    
        