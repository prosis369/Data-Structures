'''

74. Search a 2D Matrix

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:
Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

Example 1:

Input:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 3

Output: true

'''

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        if matrix == []:
            return False
        else:
            rows = len(matrix)
            cols = len(matrix[0])

            row = 0
            col = cols-1

            return search(matrix,row,col,target,rows)
        
def search(matrix,row,col,target,rows):
    if col == -1 or row == rows:
        return False
    if matrix[row][col] == target:
        return True
    elif(target>matrix[row][col]):
        return search(matrix,row+1,col,target,rows)
    else:
        return search(matrix,row,col-1,target,rows)
    