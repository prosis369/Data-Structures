'''

6. ZigZag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

'''

class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows > 1:
            result = []
            for i in range(numRows):
                result.append("")
            l = len(s)
            forward = 0
            back = False
            for i in range(l):
                result[forward] += s[i]

                if forward == 0:
                    back = False
                elif forward == numRows-1:
                    back = True
                if back == True:
                    forward -= 1
                else:
                    forward += 1

            ans = ''
            print(result)
            for i in result:
                ans += i

            return ans
        
        else:
            return s
            
            