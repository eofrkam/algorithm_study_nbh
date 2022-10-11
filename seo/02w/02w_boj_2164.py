from collections import deque
import sys

arr = deque([])

n = int(sys.stdin.readline())
for i in range(n, 0, -1):
    arr.append(i)

while len(arr) > 1:
    arr.pop()
    arr.appendleft(arr.pop())

print(arr[0])