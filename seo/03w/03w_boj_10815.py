import sys

N = int(sys.stdin.readline())
n_list = list(map(int, sys.stdin.readline().split()))
n_list.sort()

M = int(sys.stdin.readline())
m_list = list(map(int, sys.stdin.readline().split()))

print_list = []
for i in range(len(m_list)):
    res = 0
    n_min = 0
    n_max = len(n_list)-1
    while n_min <= n_max:
        n_mid = (n_min + n_max) // 2
        if n_list[n_mid] == m_list[i]:
            res = 1
            break
        elif n_list[n_mid] > m_list[i]:
            n_max = n_mid - 1
        else:
            n_min = n_mid + 1
    print_list.append(res)

print(*print_list)

# N = int(input())
# h = set(input().split())
# M = int(input())
# print(*[(i in h)*1 for i in input().split()])
