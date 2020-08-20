'''

1395. Count Number of Teams

There are n soldiers standing in a line. Each soldier is assigned a unique rating value.
You have to form a team of 3 soldiers amongst them under the following rules:

Choose 3 soldiers with index (i, j, k) with rating (rating[i], rating[j], rating[k]).
A team is valid if:  (rating[i] < rating[j] < rating[k]) or (rating[i] > rating[j] > rating[k]) where (0 <= i < j < k < n).
Return the number of teams you can form given the conditions. (soldiers can be part of multiple teams).


Example 1:

Input: rating = [2,5,3,4,1]
Output: 3
Explanation: We can form three teams given the conditions. (2,3,4), (5,4,1), (5,3,1). 

'''

from itertools import combinations as cmb
class Solution:
    def numTeams(self, rating: List[int]) -> int:
        result = cmb(rating, 3)
        
        c = 0
        
        for i in result:
            if((i[0]<i[1] and i[1]<i[2]) or (i[0]>i[1] and i[1]>i[2])):
                c+=1
        return c
        