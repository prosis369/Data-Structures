# ICPC
def rem(x):
    l = len(x)
    i = 0
    while i<l-1 and x[i]<=x[i+1]:
      i = i+1
    print(int(x.replace(x[i],'', 1)))
n = int(input())
while n!=0:
  x = input()
  rem(x)
  n = n-1
