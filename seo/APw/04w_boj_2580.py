import sys


def sector(row, col, board, value):
    flag = 1
    x = (col // 3) * 3
    y = (row // 3) * 3
    for z in range(y, y+3):
        for v in range(x, x+3):
            if board[z][v] == value:
                flag = 0
    return flag


def valid(row, col, board, value):
    flag = 1
    for j in range(0, 9):
        if board[row][j] == value:
            flag = 0
        if board[j][col] == value:
            flag = 0
    if sector(row, col, board, value) == 0:
        flag = 0
    return flag


# 실패 했을때 0으로 바꿔주는 부분 필요
def sudoku(row, col, board):
    if row == 8 and col == 9:
        return
    if col == 9:
        row += 1
        col = 0
    else:
        if board[row][col] == 0:
            for i in range(1, 10):
                if valid(row, col, board, i) == 1:
                    board[row][col] = i
    sudoku(row, col + 1, board)


input_board = []
for n in range(9):
    input_board.append(list(map(int, sys.stdin.readline().split())))

sudoku(0, 0, input_board)

for m in range(9):
    print(*input_board[m])
