from collections import deque
import sys

N, K = map(int, sys.stdin.readline().split())

q = deque()
print_arr = []

for i in range(1, N+1, 1):
    q.append(i)

if K == 1:
    print("<", end='')
    print(*q, sep=', ', end='')
    print(">", end='')
    exit()

i = 0
while len(q):
    if i % (K - 1) == 0 and i != 0:
        print_arr.append(q.popleft())
    if len(q):
        q.append(q.popleft())
    i += 1

print("<", end='')
print(*print_arr, sep=', ', end='')
print(">", end='')
