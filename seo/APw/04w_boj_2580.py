import sys


def valid(row, col, board, value):
    x = (col // 3) * 3
    y = (row // 3) * 3
    for i in range(0, 9):
        if board[row][i] == value:
            return 1
        if board[i][col] == value:
            return 1
    for j in range(y, y + 3):
        for k in range(x, x + 3):
            if board[j][k] == value:
                return 1
    return 0


def sudoku(row, col, board, zeros):
    if len(zeros) == 0 and row == 8 and col == 9:
        for m in range(9):
            print(*input_board[m])
        exit()
        return
    if col == 9:
        row += 1
        col = 0
    if board[row][col] == 0:
        zeros.append([row, col])
        for val in range(1, 10):
            if valid(row, col, board, val) == 0:
                if len(zeros) != 0:
                    zeros.pop()
                board[row][col] = val
                sudoku(row, col + 1, board, zeros)
                board[row][col] = 0
    else:
        sudoku(row, col + 1, board, zeros)


zrs = []
input_board = []
for n in range(9):
    input_board.append(list(map(int, sys.stdin.readline().split())))

sudoku(0, 0, input_board, zrs)
