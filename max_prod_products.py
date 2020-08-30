'''

628. Maximum Product of Three Numbers

Given an integer array, find three numbers whose product is maximum and output the maximum product.

Example 1:

Input: [1,2,3]
Output: 6
 

Example 2:

Input: [1,2,3,4]
Output: 24

Note:

The length of the given array will be in range [3,104] and all elements are in the range [-1000, 1000].
Multiplication of any three numbers in the input won't exceed the range of 32-bit signed integer.

'''

class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums.sort()
        l = len(nums)
        if nums[0]*nums[1]*nums[l-1]>nums[l-1]*nums[l-2]*nums[l-3]:
            return nums[0]*nums[1]*nums[l-1]
        else:
            return nums[l-1]*nums[l-2]*nums[l-3]