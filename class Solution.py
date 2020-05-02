'''

35. Search Insert Position
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You may assume no duplicates in the array.

Example 1:
Input: [1,3,5,6], 5
Output: 2


'''

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l = len(nums)
        i = 0
        while(i<l and nums[i] < target):
            i = i + 1
        return i