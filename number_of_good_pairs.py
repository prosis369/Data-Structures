'''

1512. Number of Good Pairs

Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.


Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

'''

class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = 0
        l = len(nums)
        for i in range(l):
            for j in range(i+1,l):
                if nums[i] == nums[j]:
                    count+=1
        return count