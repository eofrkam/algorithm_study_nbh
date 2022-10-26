import sys


def sector(row, col, board):
    flag = 1
    x = (col // 3) * 3
    y = (row // 3) * 3
    for z in range(0, 3):
        if board[y][x+z] != 0 and board[y][x+z] == board[row][col]:
            flag = 0
        if board[y+z][x] != 0 and board[y+z][x] == board[row][col]:
            flag = 0
        for v in range(0, 3):
            if board[y+v][x+z] != 0 and board[y+v][x+z] == board[row][col]:
                flag = 0
            if board[y+z][x+v] != 0 and board[y+z][x+v] == board[row][col]:
                flag = 0
    return flag

# 값을 비교하고 넣어줄지, 값을 넣고 비교해줄지
def valid(row, col, board):
    for i in range(1, 10):
        board[row][col] = i
        flag = 1
        for j in range(0, 9):
            if col != j and board[row][j] == board[row][col]:
                flag = 0
            elif row != j and board[j][col] == board[row][col]:
                flag = 0
        if sector(row, col, board) == 0:
            flag = 0
        if flag == 1:
            board[row][col] = 0


def sudoku(row, col, board):
    if row == 8 and col == 9:
        return
    if col == 9:
        row += 1
        col = 0
    else:
        if board[row][col] == 0:
            valid(row, col, board)
    sudoku(row, col + 1, board)


input_board = []
for n in range(9):
    input_board.append(list(map(int, sys.stdin.readline().split())))

sudoku(0, 0, input_board)

for m in range(9):
    print(*input_board[m])
