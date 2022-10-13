from collections import deque
import sys

t = int(sys.stdin.readline())
for i in range(t):
    n, m = map(int, sys.stdin.readline().split())
    imp = deque(map(int, sys.stdin.readline().split()))

    arr = deque()       # queue
    temp = []           # queue로 사용하기 위한 임시 list

    for j in range(n):  # 중요도의 index
        arr.append(j)

    m_val = arr[m]      # m value
    cnt = 1
    while len(arr):
        if imp[0] == max(imp):      # 중요도가 제일 높을때
            p_val = arr.popleft()
            imp.popleft()
            if m_val == p_val:      # m번째 value와 pop value가 같을때
                print(cnt)
                break
            cnt += 1
        else:                       # temp list를 통해 queue 구현
            temp.append(arr.popleft())
            arr.append(temp.pop())
            temp.append(imp.popleft())
            imp.append(temp.pop())
