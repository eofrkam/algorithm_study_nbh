import sys


def rec(depth, n, m):
    if depth == m:
        print(*sequence)
        return
    for i in range(1, n+1, 1):
        if used[i] == 1:
            continue
        used[i] = 1
        sequence[depth] = i
        rec(depth+1, n, m)
        used[i] = 0


N, M = map(int, sys.stdin.readline().split())

sequence = [0] * M
used = [0] * (N+1)
rec(0, N, M)
