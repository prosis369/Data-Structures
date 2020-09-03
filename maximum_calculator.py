'''

Rahul and Ankit are the only two waiters in Royal Restaurant. Today, the restaurant received N orders. The amount of tips may differ when handled by different waiters, if Rahul takes the ith order, he would be tipped Ai rupees and if Ankit takes this order, the tip would be Bi rupees.
In order to maximize the total tip value they decided to distribute the order among themselves. One order will be handled by one person only. Also, due to time constraints Rahul cannot take more than X orders and Ankit cannot take more than Y orders. It is guaranteed that X + Y is greater than or equal to N, which means that all the orders can be handled by either Rahul or Ankit. Find out the maximum possible amount of total tip money after processing all the orders.

Input:

•    The first line contains one integer, number of test cases.
•    The second line contains three integers N, X, Y.
•    The third line contains N integers. The ith integer represents Ai.
•    The fourth line contains N integers. The ith integer represents Bi.

 
Output:
Print a single integer representing the maximum tip money they would receive.
 
Constraints:
1 ≤ N ≤ 105
1 ≤ X, Y ≤ N; X + Y ≥ N
1 ≤ Ai, Bi ≤ 104

 
Example:

Input:

2
5 3 3
1 2 3 4 5
5 4 3 2 1
8 4 4
1 4 3 2 7 5 9 6 
1 2 3 6 5 4 9 8

Output:

21
43

'''

# WRONG OUTPUR FOR SOME TEST CASES

t = int(input())
while(t):
    n,x,y = input().split(' ')
    n,x,y = int(n), int(x), int(y)
    a = input().split(' ')
    A = [int(i) for i in a]
    b = input().split(' ')
    B = [int(i) for i in b]

    count = 0
    for i in range(n):
        if A[i]>B[i]:
            if x>0:
                x-=1
                count+=A[i]
            else:
                y=-1
                count+=B[i]
        else:
            if y>0:
                y-=1
                count+=B[i]
            else:
                x=-1
                count+=A[i]
    print(count)
    t-=1