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















#
# arr.append(base.pop())
# nge.append(-1)
#
# mn = 0
# while base[-1] != 0:
#     if base[-1] >= arr[-1]:             # idx >= idx + 1 (바로 오른쪽이 본인과 같거나 작음)
#         if base[-1] >= max(nge):        # idx >= idx + 1~n (오른쪽 값중에 본인보다 큰 값이 없음)
#             nge.append(-1)
#         elif base[-1] < max(nge):       # idx < idx + 2~n (오른쪽 값중에 본인보다 큰 값이 있음)
#             nge.append(mn)    # (본인보다 큰 값중에 가장 가까운 값을 찾아서 푸쉬)
#     elif base[-1] < arr[-1]:            # idx < idx + 1 (바로 오른쪽이 본인보다 큼)
#         nge.append(arr[-1])
#     arr.append(base.pop())
#     if base[-1] < nge[-1]:
#         mn = nge[-1]
#
# for i in reversed(range(len(nge))):
#     print(nge[i], end=' ')
