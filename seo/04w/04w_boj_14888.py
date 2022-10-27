import sys


def rec(st, en, op, res, a):
    if st == en:
        print(*res)
        return
    for i in op:
        if used[i] == 1:
            continue
        used[i] = 1
        res[st] = i
        rec(st + 1, en, op, res, a)
        used[i] = 0


N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
ops = list(map(int, sys.stdin.readline().split()))

operator = []
for n in range(N-1):
    if ops[0] > 0:         # 덧셈 = 1
        operator.append(1)
        ops[0] -= 1
    elif ops[1] > 0:       # 뺄셈 = 2
        operator.append(2)
        ops[1] -= 1
    elif ops[2] > 0:       # 곱셈 = 3
        operator.append(3)
        ops[2] -= 1
    elif ops[3] > 0:       # 나눗셈 = 4
        operator.append(4)
        ops[3] -= 1

comb = [0] * len(operator)
used = [0] * 5

rec(0, len(operator), operator, comb, A)
