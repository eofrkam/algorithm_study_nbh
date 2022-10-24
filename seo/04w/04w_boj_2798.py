import sys


def black_jack(n, m, card, arr, length):
    global apx
    if length == 3:
        return apx
    for i in range(n):
        if i < length or used[i]:
            continue
        used[i] = 1
        arr[length] = card[i]
        black_jack(n, m, card, arr, length+1)
        if apx < sum(arr) <= m:
            apx = sum(arr)
        used[i] = 0
    return apx


N, M = map(int, sys.stdin.readline().split())
Card = list(map(int, sys.stdin.readline().split()))

Arr = [0] * 3
used = [0] * N
apx = 0

print(black_jack(N, M, Card, Arr, 0))
