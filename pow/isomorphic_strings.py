'''

205. Isomorphic Strings

Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

Example 1:
Input: s = "egg", t = "add"
Output: true

Note:
You may assume both s and t have the same length.

'''

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        d = {}
        flag = True
        for i in range(len(s)):
            if (s[i] not in d.keys()):
                # if((t[i] in d.keys() and d[t[i]] == t[i]) or (t[i] not in d.values())):
                if(t[i] not in d.values()):
                    d[s[i]] = t[i]
                else:
                    flag = False
            else:
                if d[s[i]] != t[i]:
                    flag = False
        return flag