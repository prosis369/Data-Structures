n = int(input())
while n:
	s = input()
	# print(s)
	# s_set = set(s)
	# print(s_set)
	c = ""

	for i in s:
		if i not in c:
			c = c + i
			c = c + str(s.count(i))
	print(c)
	n -= 1 