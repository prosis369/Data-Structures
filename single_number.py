'''

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1

'''

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        x = set(nums)
        for i in x:
            nums.remove(i)
        nums = set(nums)
        result = list(x-nums)
        
        return(result[0])