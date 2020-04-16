'''

9. Palindrome Number

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true

'''


class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        l = len(x)
        s = ""
        for i in range(l):
            s = s +(str(x[l-i-1]))
        print(s)
        if s == x:
            return True
        else:
            return False