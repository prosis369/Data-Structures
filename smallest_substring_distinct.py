'''

Given a string, find the smallest window length with all distinct characters of the given string. 
For eg. str = “aabcbcdbca”, then the result would be 4 as of the smallest window will be “dbca” .

'''
def smallest_substring(s, l):
	distinct = set(s)
	l_distinct = len(distinct)
	# print(l_distinct)
	max_res = 99999
	max_str = ''

	for i in range(l):
		res = ''
		visit = [ 0 for i in range(256)]
		count = 0
		for j in range(i,l):
			res+=s[j]
			# print(res)
			if visit[ord(s[j])] == 0:
				count+=1
				visit[ord(s[j])]=1
			if count == l_distinct:
				break
		if(len(res)<max_res and count == l_distinct):
			max_res = len(res)
			max_str = res
	return max_str

print(smallest_substring("aabcbcdbca", len("aabcbcdbca")))