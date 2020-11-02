'''

89. Gray Code
The gray code is a binary numeral system where two successive values differ in only one bit.
Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. A gray code sequence must begin with 0.

Example 1:

Input: 2
Output: [0,1,3,2]
Explanation:
00 - 0
01 - 1
11 - 3
10 - 2

For a given n, a gray code sequence may not be uniquely defined.
For example, [0,2,3,1] is also a valid gray code sequence.
00 - 0
10 - 2
11 - 3
01 - 1


'''


# Take 2^n
# for i in range of 2^n - take 1 arithmetic shift with i and XOR with i

class Solution:
    def grayCode(self, n: int) -> List[int]:
        n = pow(2,n)
        res = []
        for i in range(n):
            res.append(i^(i>>1))
        return res
