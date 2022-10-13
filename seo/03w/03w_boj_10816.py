import sys

N = int(sys.stdin.readline())
n_list = list(map(int, sys.stdin.readline().split()))

M = int(sys.stdin.readline())
m_list = list(map(int, sys.stdin.readline().split()))

pos = [0] * 10000001
neg = [0] * 10000001
for i in range(N):
    if n_list[i] > 0:
        pos[n_list[i]] += 1
    else:
        res = n_list[i] * -1
        neg[res] += 1

for i in range(M):
    if m_list[i] > 0:
        print(pos[m_list[i]], end=' ')
    else:
        print(neg[m_list[i] * -1], end=' ')
