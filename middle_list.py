'''

876. Middle of the Linked List

Given a non-empty, singly linked list with head node head, return a middle node of linked list.
If there are two middle nodes, return the second middle node.

Example 1:

Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
Note that we returned a ListNode object ans, such that:
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.

'''


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        temp = head
        count = 0
        while(temp!=None):
            temp = temp.next
            count = count+1
        print(count)
        
        if count%2 == 0:
            mid = count/2
        else:
            mid = int(count/2)
            
        n = 0
        curr = head
        while(n != mid):
            curr = curr.next
            n = n+1
        return curr