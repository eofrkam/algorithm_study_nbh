import sys

k, n = map(int, sys.stdin.readline().split())
k_list = list(map(int, sys.stdin.readline().split()))

res = 0
for i in range(len(k_list)):
    res += k_list[i]

l_min = 1
l_max = (res // n)
l_mid = (l_min + l_max) // 2

while l_min <= l_max:
    k_len = 0
    l_mid = (l_min + l_max) // 2
    for i in range(k):
        k_len += k_list[i] // l_mid
    if k_len == n:
        break
    elif k_len > n:
        l_min = l_mid + 1
    else:
        l_max = l_mid - 1

while l_mid <= l_max:
    k_len = 0
    l_mid += 1
    for i in range(k):
        k_len += k_list[i] // l_mid
    if k_len != n:
        l_mid -= 1
        break

print(l_mid)
