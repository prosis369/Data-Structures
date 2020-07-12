'''

14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"

Note:

All given inputs are in lowercase letters a-z.

'''

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if strs != []:
            l = len(strs)
            smallest_index = 0

            for i in range(1,l):
                if(len(strs[i])<len(strs[smallest_index])):
                    smallest_index = i

            smallest = strs[smallest_index]
            strs.remove(smallest)

            l = len(strs)

            count = 0;
            for index in range(len(smallest)):
                flag = 0;
                for i in range(l):
                    if(strs[i][index] != smallest[index]):
                        flag = 1
                        break
                if flag == 1:
                    break
                count+=1
            return(smallest[:count])
        else:
            return ""