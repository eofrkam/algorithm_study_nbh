import sys

n = int(sys.stdin.readline())
n_list = []
for i in range(n):
    num = int(sys.stdin.readline())
    n_list.append(num)

n_list.sort()

print(*n_list, sep='\n')
