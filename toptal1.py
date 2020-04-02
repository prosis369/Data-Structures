n = 8
k = 0
count = 0
total = 0
while(n != 1):
	if(n%2 == 0 and n!=2 and k>0):
		n = n/2
		k = k-1
		count = count+1
		# total = total+1
	else:
		n = n-1
		count = count+1
		# total = total+1

print(count)