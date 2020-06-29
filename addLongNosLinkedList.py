'''

2. Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.

'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        result = ListNode()
        temp = result
        carry = 0
        while(l1 != None and l2 != None):
            value = l1.val + l2.val + carry
            if(value>9):
                carry = 1
                value = value-10
            else:
                carry = 0
            NewNode = ListNode(value)
            temp.next = NewNode
            temp = temp.next
            l1 = l1.next
            l2 = l2.next
            
        while(l1 != None):
            value = l1.val+carry
            if value>9:
                carry = 1
                value = value-10
            else:
                carry = 0
            NewNode = ListNode(value)
            temp.next = NewNode
            temp = temp.next
            l1 = l1.next
        
        while(l2 != None):
            value = l2.val+carry
            if value>9:
                carry = 1
                value = value-10
            else:
                carry = 0
            NewNode = ListNode(value)
            temp.next = NewNode
            temp = temp.next
            l2 = l2.next
        
        if(carry == 1):
            NewNode = ListNode(1)
            temp.next = NewNode
            temp = temp.next
        return result.next