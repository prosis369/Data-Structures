class Node:
	def __init__(self, data):
		self.data = data
		self.next = None
		self.val = 0

class LinkedList:
	def __init__(self):
		self.head = None

	def push(self,data):
		temp = Node(data)
		temp.next = self.head
		self.head = temp

	def loop(self):
		curr = self.head
		while(curr != None):
			if(curr.val == 1):
				return True
			curr.val = 1
			curr = curr.next
		return False

	def print(self):
		t = self.head
		while(t != None):
			print(t.data, end=" ")
			t = t.next

linkedlist = LinkedList()
linkedlist.push(10)
linkedlist.push(20)
linkedlist.push(30)
linkedlist.push(40)

linkedlist.head.next.next = linkedlist.head
# linkedlist.print()
print(linkedlist.loop())

