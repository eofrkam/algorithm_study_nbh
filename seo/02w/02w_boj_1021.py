from collections import deque
import sys

N, M = map(int, sys.stdin.readline().split())
idx = deque(map(int, sys.stdin.readline().split()))

dq = deque()

for i in range(1, N+1, 1):
    dq.append(i)

cnt = 0
while len(idx):
    if dq[0] == idx[0]:
        dq.popleft()
        idx.popleft()
    elif dq[0] != idx[0]:
        cnt += 1
        pos = dq.index(idx[0])
        if pos <= (len(dq) / 2):
            dq.append(dq.popleft())
        elif pos > (len(dq) / 2):
            dq.appendleft(dq.pop())
print(cnt)
