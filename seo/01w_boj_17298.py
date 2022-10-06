import sys

nge = []
arr = []

pos = []

n = int(sys.stdin.readline())
base = list((map(int, sys.stdin.readline().split())))

arr.append(base[0])
i = 1
while len(nge) != len(base):
    if i != len(base):
        arr.append(base[i])
    print(i, arr)
    i += 1
    if arr[-1] > arr[-2]:
        nge.append(arr.pop())
    elif arr[-1] <= arr[-2]:
        pos.append(base.index(arr[-1]))
    print(arr)
    print(nge)
    print(pos)
    print()

print("----------")
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
