def fun(arr):
    ans=0
    arr_set = set(arr)
    arr_set.remove(" ")
    # arr_str = str(arr)
    # print(arr_set)
    for i in arr_set:
    	c = arr.count(i)
    	if c%2 == 0:
    		ans += int(i)
    # print(arr_str)
    return ans
    
n= int(input())
arr = input()
# arr = list(map(int,input().split()))
# print(arr)
print(fun(arr))