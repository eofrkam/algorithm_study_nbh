import sys

T = int(sys.stdin.readline())

ps = []
for i in range(T):
    ps = str(sys.stdin.readline().split())
    arr = []
    flag = 0
    for j in range(len(ps)):
        if ps[j] == "(":
            arr.append(ps[j])
        if ps[j] == ")":
            if len(arr) == 0:
                flag = 1
                break
            else:
                arr.pop()
    if flag == 1 or len(arr) != 0:
        print("NO")
    else:
        print("YES")
