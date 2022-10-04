import sys

nge = []
arr = []
base = [0]

n = int(sys.stdin.readline())
base.extend((map(int, sys.stdin.readline().split())))

arr.append(base.pop())
nge.append(-1)

while base[-1] != 0:
    if base[-1] > arr[-1] and base[-1] > nge[-1]:
        nge.append(-1)
    elif base[-1] > arr[-1] and base[-1] < nge[-1]:
        nge.append(nge[-1])
    elif base[-1] < arr[-1]:
        nge.append(arr[-1])
    arr.append(base.pop())

for i in reversed(range(len(nge))):
    print(nge[i], end=' ')
