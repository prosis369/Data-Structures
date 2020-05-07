'''

49. Group Anagrams

Given an array of strings, group anagrams together.
Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]

Note:
    All inputs will be in lowercase.
    The order of your output does not matter.

'''


class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        ana_sorted = {}
        start = 0
        output = []
        for i in strs:
            i_sorted = ''.join(sorted(i))
            if i_sorted not in ana_sorted.keys():
                ana_sorted[i_sorted] = start
                start += 1
                output.append([i])
            else:
                # i = sorted(i)
                ind = ana_sorted[i_sorted]
                output[ind].append(i)
        print(output)
        return output