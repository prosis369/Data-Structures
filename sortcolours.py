'''

75. Sort Colors

Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.
Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

Example:

Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

'''

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeros = 0
        ones = 0
        twos = 0
        
        for i in nums:
            if i == 0:
                zeros+=1
            elif i == 1:
                ones+=1
            else:
                twos+=1
        
        for i in range(zeros):
            nums[i] = 0
        for i in range(ones):
            nums[zeros+i] = 1
        for i in range(twos):
            nums[zeros+ones+i] = 2