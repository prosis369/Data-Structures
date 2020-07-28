'''

22. Generate Parentheses

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
For example, given n = 3, a solution set is:

[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]

'''

class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []
        s = ''
        index = 0
        return generate(n,result,s,0,0)
        
def generate(n,result,s,open_count,close_count):
    if(len(s) == 2*n):
        result.append(s)
        return

    if(open_count<n):
        generate(n,result,s+'(',open_count+1,close_count)
        
    if(open_count>close_count):
        generate(n,result,s+')',open_count,close_count+1)
    return result