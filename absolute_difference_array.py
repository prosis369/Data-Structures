'''

Given an integer array, find maximum absolute difference, for an element, between the count of numbers which are greater than the element and appears on the left side of the element in the array and the count of numbers which are less than the element and appears on the right side of the element in the array. 
The element shouldn’t be the first or the last element.

'''
def max_absolute_difference(arr, n):
	m = 0
	for i in range(1,n-1):
		ele = arr[i]
		count_l = 0
		count_r = 0
		for j in range(i):
			if arr[j]>ele:
				count_l+=1
		for k in range(i+1,n):
			if arr[k]<ele:
				count_r+=1
		m_i = abs(count_r-count_l)
		if m_i>m:
			m = m_i

	return m

print(max_absolute_difference([2,6,4,1,8,5,7,3], 8))