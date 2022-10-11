from collections import deque
import sys

arr = deque([])

n = int(sys.stdin.readline())
for i in range(n):
    istr = sys.stdin.readline().split()

    if istr[0] == "push_front":
        arr.appendleft(istr[1])
    elif istr[0] == "push_back":
        arr.append(istr[1])
    elif istr[0] == "pop_front":
        if len(arr) == 0:
            print(-1)
        else:
            print(arr.popleft())
    elif istr[0] == "pop_back":
        if len(arr) == 0:
            print(-1)
        else:
            print(arr.pop())
    elif istr[0] == "size":
        print(len(arr))
    elif istr[0] == "empty":
        if len(arr) == 0:
            print(1)
        else:
            print(0)
    elif istr[0] == "front":
        if len(arr) == 0:
            print(-1)
        else:
            print(arr[0])
    elif istr[0] == "back":
        if len(arr) == 0:
            print(-1)
        else:
            print(arr[-1])
