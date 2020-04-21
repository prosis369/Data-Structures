'''

728. Self Dividing Numbers
 A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
Also, a self-dividing number is not allowed to contain the digit zero.
Given a lower and upper number bound, output a list of every possible self dividing number, including the bounds if possible. 

Example 1:

Input: 
left = 1, right = 22
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]

The boundaries of each input argument are 1 <= left <= right <= 10000

'''



class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        n = left
        res = []
        while(n>=left and n<=right):
            count = 0
            s = str(n)
            # print(s)
            if '0' not in s:
                for char in s:
                    c = int(char)
                    # print(c)
                    if n%c == 0:
                        count = count +1
                if count == len(s):
                    res.append(n)
            n = n+1
        return res