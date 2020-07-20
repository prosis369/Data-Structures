'''

Determine if a 9x9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the 9 3x3 sub-boxes of the grid must contain the digits 1-9 without repetition.

The Sudoku board could be partially filled, where empty cells are filled with the character '.'.

Example 1:

Input:
[
  ["5","3",".",".","7",".",".",".","."],
  ["6",".",".","1","9","5",".",".","."],
  [".","9","8",".",".",".",".","6","."],
  ["8",".",".",".","6",".",".",".","3"],
  ["4",".",".","8",".","3",".",".","1"],
  ["7",".",".",".","2",".",".",".","6"],
  [".","6",".",".",".",".","2","8","."],
  [".",".",".","4","1","9",".",".","5"],
  [".",".",".",".","8",".",".","7","9"]
]
Output: true

'''


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        if valid(board):
            return True
        else:
            return False

def valid(board):
    for i in range(9):
        for j in range(9):
            if validateEach(board,i,j) == False:
                return False
    return True

def validateEach(board,row,col):
    return(checkRow(board,row) and checkColumn(board,col) and checkBox(board,row-row%3,col-col%3))

def checkRow(board,row):
    s = set()
    for i in range(9):
        if board[row][i] in s:
            return False
        if board[row][i] != '.':
            s.add(board[row][i])
    return True

def checkColumn(board,col):
    s = set()
    for i in range(9):
        if board[i][col] in s:
            return False
        if board[i][col] != '.':
            s.add(board[i][col])
    return True

def checkBox(board,row,col):
    s = set()
    for i in range(row,row+3):
        for j in range(col,col+3):
            if board[i][j] in s:
                return False
            if board[i][j] != '.':
                s.add(board[i][j])
    return True