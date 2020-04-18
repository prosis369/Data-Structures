'''

	709. To Lower Case
	Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

	Example 1:
	Input: "Hello"
	Output: "hello"

'''

class Solution:
    def toLowerCase(self, str: str) -> str:
        caps = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
        for i in range(len(str)):
            if str[i] in caps:
                x = chr(ord(str[i])+32)
                str = str.replace(str[i],x)
            # print(str)
        return str