def accumulate(l, low, mid):
	s = 0
	for i in range(low, mid+1):
		# print(i)
		s+=l[i]
	return s

def maximum_sum(l, low, mid, ans, res):
	if(low > mid):
		return -1

	s = accumulate(l, low, mid)
	# return(s)

	if(s>ans):
		ans = s
		res.append(s)
		# print(res)


	maximum_sum(l, low+1, mid, ans, res)
	maximum_sum(l, low, mid-1, ans, res)
	# return ans



l = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
n = 9
ans = -100
res = []
maximum_sum(l, 0, n-1, ans, res)
print(max(res))