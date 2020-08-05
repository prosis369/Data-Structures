'''

1329. Sort the Matrix Diagonally

Given a m * n matrix mat of integers, sort it diagonally in ascending order from the top-left to the bottom-right then return the sorted array.

Input: mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]
Output: [[1,1,1,1],[1,2,2,2],[1,2,3,3]]
 
Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 100
1 <= mat[i][j] <= 100

'''

class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        
        def compute(row, col, mat):
            rows = len(mat)
            cols = len(mat[0])
            temp = []

            i = row
            j = col

            while(i<rows and j<cols):
                temp.append(mat[i][j])
                i+=1
                j+=1
            temp.sort()
       
            k = 0
            while(row<rows and col<cols):
                mat[row][col] = temp[k]
                row+=1
                col+=1
                k+=1
            
        def sort(mat):
            rows = len(mat)
            cols = len(mat[0])

            for i in range(rows):
                compute(i,0,mat)
            for i in range(cols):
                compute(0,i,mat)
                
        sort(mat)
        return(mat)
    