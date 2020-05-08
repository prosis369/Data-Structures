'''

24. Swap Nodes in Pairs
Given a linked list, swap every two adjacent nodes and return its head.
You may not modify the values in the list's nodes, only nodes itself may be changed.


Example:
Given 1->2->3->4, you should return the list as 2->1->4->3.

'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        
        if head != None and head.next != None:
            prev = head
            curr = prev.next
            temp = curr.next

            curr.next = prev
            prev.next = temp
            prev = curr
            head = prev

            while(temp != None and temp.next != None):
                n = curr.next
                prev = temp
                curr = prev.next
                temp = curr.next

                n.next = curr
                prev.next = temp
                curr.next = prev
                # prev.next = temp
                prev = curr
        
        return head