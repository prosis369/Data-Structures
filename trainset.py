t = int(input())
while t != 0:
  n = int(input())
  d = {}
  while n!=0:
    x = input()
    arr = x.split()
    arr[1] = int(arr[1])
    if arr[0] not in d:
      d[arr[0]] = [arr[1]]
    else:
      d[arr[0]].append(arr[1])
    # print(arr)
    n = n-1
  # print(d)
  count = 0
  for k,v in d.items():
    l = len(v)
    zero = 0
    one = 0
    for i in range(l):
        if(d[k][i] == 0):
          zero = zero + 1
        else:
          one = one + 1
    if(zero > one):
      count = count + zero
    else:
      count = count + one
  print(count)
  t = t-1
