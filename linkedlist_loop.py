class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None
	def push(self,data):
		temp = Node(data)
		temp.next = self.head
		self.head = temp
	def loop(self):
		s = set()
		curr = self.head
		while(curr != None):
			if(curr in s):
				return True
			s.add(curr)
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

