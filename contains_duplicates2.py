'''

219. Contains Duplicate II
Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true

Example 2:
Input: nums = [1,2,3,1,2,3], k = 2
Output: false

'''

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        l = len(nums)
        for i in range(l):
            j = i+k
            if(j<l):
                if nums[i] == nums[j]:
                    return True
        return False