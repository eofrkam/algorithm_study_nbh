import sys

k, n = map(int, sys.stdin.readline().split())
k_list = []
for i in range(k):
    num = int(sys.stdin.readline())
    k_list.append(num)
k_list.sort()

if k == n and k_list[0] == k_list[-1]:
    print(k_list[0])
    exit()

k_min = k_list[0] // n
k_max = k_list[-1]
k_mid = (k_min + k_max) // 2

while k_min + 1 < k_max:
    k_len = 0
    k_mid = (k_min + k_max) // 2
    for i in range(len(k_list)):
        k_len += k_list[i] // k_mid
    if n <= k_len:
        k_min = k_mid
    else:
        k_max = k_mid

print(k_min)
