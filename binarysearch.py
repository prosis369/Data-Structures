'''

704. Binary Search

Given a sorted (in ascending order) integer array nums of n elements and a target value, write a function to search target in nums. 
If target exists, then return its index, otherwise return -1.

Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

Note:

    You may assume that all elements in nums are unique.
    n will be in the range [1, 10000].
    The value of each element in nums will be in the range [-9999, 9999].




'''

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        high = len(nums)-1
        low = 0
        i = int((high+low)/2)
        l = len(nums)
        # print(i)
        while(nums[i] != target and i<high):
            # print(i)
            if(target < nums[i]):
                high = i-1
                i = int((high+low)/2)
            else:
                low = i+1
                i = int((high+low)/2)
            
        # print(i)
        if(nums[i] == target):
            return i
        else:
            return -1