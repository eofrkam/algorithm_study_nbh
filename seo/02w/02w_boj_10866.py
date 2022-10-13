from collections import deque
import sys

N = int(sys.stdin.readline())

dq = deque()
for i in range(N):
    order = sys.stdin.readline().split()

    if order[0] == "push_front":
        dq.appendleft(order[1])
    elif order[0] == "push_back":
        dq.append(order[1])
    elif order[0] == "pop_front":
        if len(dq) == 0:
            print(-1)
        else:
            print(dq.popleft())
    elif order[0] == "pop_back":
        if len(dq) == 0:
            print(-1)
        else:
            print(dq.pop())
    elif order[0] == "size":
        print(len(dq))
    elif order[0] == "empty":
        if len(dq) == 0:
            print(1)
        else:
            print(0)
    elif order[0] == "front":
        if len(dq) == 0:
            print(-1)
        else:
            print(dq[0])
    elif order[0] == "back":
        if len(dq) == 0:
            print(-1)
        else:
            print(dq[-1])
