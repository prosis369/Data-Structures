# Search in a row wise and column wise sorted matrix
# Input number is taken through command line arguments

import sys

def search_element(arr, m, num):
	i = 0
	j = m-1
	while(i<m or j>=0):
		if(arr[i][j] == num):
			return (i,j)
		elif(arr[i][j] < num):
			i+=1
		else:
			j-=1
	return ("not found")

arr = [[10, 20, 30, 40], 
       [15, 25, 35, 45], 
       [27, 29, 37, 48], 
       [32, 33, 39, 50]]

# print(int(sys.argv[1]))
x = int(sys.argv[1])
print(search_element(arr,4,x))