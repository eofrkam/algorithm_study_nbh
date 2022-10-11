import sys

n = int(sys.stdin.readline())
n_list = list(map(int, sys.stdin.readline().split()))

m = int(sys.stdin.readline())
m_list = list(map(int, sys.stdin.readline().split()))

pos = [0] * 10000001
neg = [0] * 10000001
for i in range(n):
    if n_list[i] > 0:
        pos[n_list[i]] += 1
    else:
        res = n_list[i] * -1
        neg[res] += 1

for i in range(m):
    if m_list[i] > 0:
        print(pos[m_list[i]], end=' ')
    else:
        res = m_list[i] * -1
        print(neg[res], end=' ')
