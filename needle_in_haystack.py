''' Needle in Haystack - Count the occurences of a character in a string'''

s = input()
n = input()

count = 0
for i in n:
	if i == s:
		count+=1
print(count)