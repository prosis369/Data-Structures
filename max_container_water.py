'''

11. Container With Most Water

Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.
Note: You may not slant the container and n is at least 2.

Example:

Input: [1,8,6,2,5,4,8,3,7]
Output: 49

'''


class Solution:
    def maxArea(self, height: List[int]) -> int:
        l = len(height)
        start = 0
        end = l-1
        
        result = calc(height, start, end)
        return result
        
def calc(height, start, end):
    if(start>=end):
        return 0
    else:
        h = min(height[start],height[end])
        w = end-start
        area = h*w
        # print(area)
        if height[start]>height[end]:
            return max(area, calc(height, start, end-1))
        else:
            return max(area, calc(height, start+1, end))

