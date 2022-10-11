from collections import deque
import sys

arr = deque([])

n, m = map(int, sys.stdin.readline().split())
idx = deque(map(int, sys.stdin.readline().split()))

for i in range(1, n+1, 1):
    arr.append(i)

cnt = 0
while len(idx):
    if arr[0] == idx[0]:
        arr.popleft()
        idx.popleft()
    elif arr[0] != idx[0]:
        cnt += 1
        pos = arr.index(idx[0])
        if pos <= (len(arr) / 2):
            arr.append(arr.popleft())
        elif pos > (len(arr) / 2):
            arr.appendleft(arr.pop())
print(cnt)
