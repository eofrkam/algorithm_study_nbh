import sys


def valid(row, col, board, value):
    flag = 0
    x = (col // 3) * 3
    y = (row // 3) * 3
    for i in range(0, 9):
        if board[row][i] == value:
            flag = 1
        if board[i][col] == value:
            flag = 1
    for j in range(y, y + 3):
        for k in range(x, x + 3):
            if board[j][k] == value:
                flag = 1
    return flag


def sudoku(row, col, board, zeros):
    if len(zeros) == 0 and row == 8 and col == 9:
        return
    if col == 9:
        row += 1
        col = 0
    if board[row][col] == 0:
        zeros.append([row, col])
        for val in range(1, 10):
            if valid(row, col, board, val) == 0:
                board[row][col] = val
                zeros.pop()
    sudoku(row, col + 1, board, zeros)


zrs = []
input_board = []
for n in range(9):
    input_board.append(list(map(int, sys.stdin.readline().split())))

sudoku(0, 0, input_board, zrs)

for m in range(9):
    print(*input_board[m])
