'''

3. Longest Substring Without Repeating Characters

Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 

'''

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # l = len(s)
        # result = 0
        # for i in range(l):
        #     count = 0
        #     arr = [s[i]]
        #     count+=1
        #     for j in range(i+1, l):
        #         arr.append(s[j])
        #         print(arr)
        #         arr_set = set(arr)
        #         print(arr_set)
        #         if(len(arr)!=len(arr_set)):
        #             break
        #         count+=1
        #         # print(count)
        #         if count>result:
        #             result = count
        #     if count>result:
        #         result = count
        # return result
        
        l = len(s)
        result = 0
        
        for i in range(l):
            count = 0
            d = {}
            d[s[i]] = True
            count+=1
            for j in range(i+1, l):
                if s[j] in d:
                    break
                d[s[j]] = True
                count+=1
                if count>result:
                    result = count
            if count>result:
                result = count
        
        return result
        
    
    