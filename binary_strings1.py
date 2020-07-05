# Generate all binary strings without consecutive 0’s

def generate(result, x, n):

	if(n == x):
		print(*result, sep="", end=" ")
		return

	if(result[n-1] == '1'):
		result[n] = '0'
		generate(result,x,n+1)
		result[n] = '1'
		generate(result,x,n+1)

	if(result[n-1] == '0'):
		result[n] = '1'
		generate(result,x,n+1)


x = int(input("Enter the size the string: "))
result = [0]*x

result[0] = '0'
generate(result, x, 1)

result[0] = '1'
generate(result, x, 1)

print("\n")
