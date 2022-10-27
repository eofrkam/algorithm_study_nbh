import sys


def cal(st, en, a, op, val):
    if st == en:
        print(*val)
        return
    for j in a:
        if used[j] == j:
            continue
        used[j] = j
        val[st] = j
        cal(st + 1, en, a, op, val)
        used[j] = 0


N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
ops = list(map(int, sys.stdin.readline().split()))

res = [0] * N
used = [0] * (max(A)+1)
operator = [0] * (N-1)
for i in range(sum(ops)):
    if ops[0] > 0:         # 덧셈 = 1
        operator[i] = 1
        ops[0] -= 1
    elif ops[1] > 0:       # 뺄셈 = 2
        operator[i] = 2
        ops[1] -= 1
    elif ops[2] > 0:       # 곱셈 = 3
        operator[i] = 3
        ops[2] -= 1
    elif ops[3] > 0:       # 나눗셈 = 4
        operator[i] = 4
        ops[3] -= 1

cal(0, N, A, operator, res)
print(operator)

# if operator[i] == 1:
#     res = x + y
# elif operator[i] == 2:
#     res = x - y
# elif operator[i] == 3:
#     res = x * y
# elif operator[i] == 4:
#     res = x // y
