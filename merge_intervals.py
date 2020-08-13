'''

56. Merge Intervals

Given a collection of intervals, merge all overlapping intervals.

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].

'''

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        if intervals != []:
            intervals.sort(key = lambda x:x[0])
            result = [intervals[0]]
            count = 0
            l = len(intervals)
            for i in range(1,l):
                if intervals[i][0]<=result[count][1]:
                    result[count][1] = max(intervals[i][1], result[count][1])
                else:
                    result.append(intervals[i])
                    count+=1
            return result
        else:
            return intervals