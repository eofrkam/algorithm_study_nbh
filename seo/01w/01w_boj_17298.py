# !clear

import sys

arr = []
nge = []

n = int(sys.stdin.readline())
base = list((map(int, sys.stdin.readline().split())))

for i in range(n):
    nge.append(-1)

for i in range(n):
    while arr and base[arr[-1]] < base[i]:
        nge[arr.pop()] = base[i]
    arr.append(i)

print(*nge)
