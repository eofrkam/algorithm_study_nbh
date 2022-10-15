from collections import deque
import sys

T = int(sys.stdin.readline())

for i in range(T):
    N, M = map(int, sys.stdin.readline().split())
    imp = deque(map(int, sys.stdin.readline().split()))

    q = deque()       # queue
    for j in range(N):  # 중요도의 index
        q.append(j)

    m_val = q[M]      # M value
    cnt = 1
    while len(q):
        if imp[0] == max(imp):      # 중요도가 제일 높을때
            p_val = q.popleft()
            imp.popleft()
            if m_val == p_val:      # M value와 pop value가 같을때
                print(cnt)
                break
            cnt += 1
        else:
            q.append(q.popleft())
            imp.append(imp.popleft())
