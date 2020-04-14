'''

1380. Lucky Numbers in a Matrix
Given a m * n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

Example 1:
Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
Output: [15]
Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column

Constraints:
    m == mat.length
    n == mat[i].length
    1 <= n, m <= 50
    1 <= matrix[i][j] <= 10^5.
    All elements in the matrix are distinct.


'''

class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        result = []
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                # print("num", matrix[i][j])
                flag1 = 0
                flag2 = 0
                res = min(matrix[i])
                # print(res)
                if res == matrix[i][j]:
                    flag1 = 1
                count = 0
                for lis in range(len(matrix)):
                    if matrix[i][j] >= matrix[lis][j]:
                        count = count+1
                        # print(count)
                    if count == len(matrix):
                        # print(count)
                        flag2 = 1
                if(flag1 == 1 and flag2 == 1):
                    result.append(matrix[i][j])
                    # print(result)
        return result