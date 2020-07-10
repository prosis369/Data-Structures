'''

17. Letter Combinations of a Phone Number

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example:

Input: "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].

Note:

Although the above answer is in lexicographical order, your answer could be in any order you want.

'''

class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        d = dict()
        d['2'] = ['a', 'b', 'c']
        d['3'] = ['d', 'e', 'f']
        d['4'] = ['g', 'h', 'i']
        d['5'] = ['j', 'k', 'l']
        d['6'] = ['m', 'n', 'o']
        d['7'] = ['p', 'q', 'r', 's']
        d['8'] = ['t', 'u', 'v']
        d['9'] = ['w', 'x', 'y', 'z']
        arr = []
        combinations(d,digits,arr,"",0)
        return arr

def combinations(d, digits, arr, s, index):
    if len(digits) == 0:
        return arr
    if len(s) == len(digits):
        arr.append(s)
        return
    for i in d[digits[index]]:
        combinations(d, digits, arr, s+i, index+1)
    
             

        