import sys


def sector(value, col, row, board):
    flag = 1
    x = (row // 3) * 3
    y = (col // 3) * 3
    for z in range(1, 3):
        if board[y][x+z] != 0 and board[y][x+z] == value:
            flag = 0
        if board[y+z][x] != 0 and board[y+z][x] == value:
            flag = 0
        for v in range(1, 3):
            if board[y+v][x+z] != 0 and board[y+v][x+z] == value:
                flag = 0
            if board[y+z][x+v] != 0 and board[y+z][x+v] == value:
                flag = 0
    return flag


def valid(col, row, board):
    for i in range(1, 10):
        flag = 1
        for j in range(0, 9):
            if board[col][j] != 0 and board[col][j] == i:
                flag = 0
            elif board[j][row] != 0 and board[j][row] == i:
                flag = 0
        if sector(i, col, row, board) == 0:
            flag = 0
        if flag == 1:
            board[col][row] = i


def sudoku(col, row, board):
    if col == 8 and row == 9:
        return
    if row == 9:
        col += 1
        row = 0
    else:
        if board[col][row] == 0:
            valid(col, row, board)
    sudoku(col, row+1, board)


input_board = []
for n in range(9):
    input_board.append(list(map(int, sys.stdin.readline().split())))

sudoku(0, 0, input_board)

for m in range(9):
    print(*input_board[m])
