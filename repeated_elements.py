'''

961. N-Repeated Element in Size 2N Array

In a array A of size 2N, there are N+1 unique elements, and exactly one of these elements is repeated N times.
Return the element repeated N times.

Example 1:
Input: [1,2,3,3]
Output: 3

Note:
    4 <= A.length <= 10000
    0 <= A[i] < 10000
    A.length is even


'''

class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        s = set(A)
        # print(s)
        a = list(s)
        # print(a)
        
        # Can not subtract two lists - difference of sets can be found
        for i in a:
            A.remove(i)
        return A[0]