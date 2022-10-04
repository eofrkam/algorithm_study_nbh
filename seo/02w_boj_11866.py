from collections import deque
import sys

arr = deque([])
temp = []
print_arr = []

n, k = map(int, sys.stdin.readline().split())
for i in range(1, (n+1), 1):
    arr.append(i)

if k == 1:
    print("<", end='')
    print(*arr, sep=', ', end='')
    print(">", end='')
    exit()

i = 0
while len(arr):
    if i % (k-1) == 0 and i != 0:
        print_arr.append(arr.popleft())
    if len(arr):
        temp.append(arr.popleft())
        arr.append(temp.pop())
    i += 1

print("<", end='')
print(*print_arr, sep=', ', end='')
print(">", end='')
