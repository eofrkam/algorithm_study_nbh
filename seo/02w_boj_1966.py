from collections import deque
import sys

t = int(sys.stdin.readline())
for i in range(t):
    arr = deque()
    temp = []

    n, m = map(int, sys.stdin.readline().split())
    imp = deque(map(int, sys.stdin.readline().split()))

    for j in range(n):
        arr.append(j)

    idx = arr[m]
    cnt = 1
    while len(arr):
        if imp[0] == max(imp):
            res = arr.popleft()
            tmp = imp.popleft()
            if idx == res:
                print(cnt)
                break
            cnt += 1
        else:
            temp.append(arr.popleft())
            arr.append(temp.pop())
            temp.append(imp.popleft())
            imp.append(temp.pop())
