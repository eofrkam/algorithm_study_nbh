# !clear

import sys

arr = []
nge = []

N = int(sys.stdin.readline())
A = list((map(int, sys.stdin.readline().split())))

for i in range(N):
    nge.append(-1)

for i in range(N):
    while arr and A[arr[-1]] < A[i]:
        nge[arr.pop()] = A[i]
    arr.append(i)

print(*nge)
