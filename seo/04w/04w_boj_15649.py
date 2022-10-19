import sys

# 중복 제거

def rec(depth, n, m):
    if depth == m:
        print(*sequence)
        return
    for i in range(1, n+1, 1):
        sequence[depth] = i
        rec(depth+1, n, m)


N, M = map(int, sys.stdin.readline().split())

sequence = [0] * M
rec(0, N, M)
