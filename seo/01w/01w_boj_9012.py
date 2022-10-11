import sys

ps = []

t = int(sys.stdin.readline())
for i in range(t):
    flag = 0
    arr = []
    ps = str(sys.stdin.readline().split())
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
