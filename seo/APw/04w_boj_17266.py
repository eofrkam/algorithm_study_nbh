import sys

N = int(sys.stdin.readline())
M = int(sys.stdin.readline())
x = list(map(int, sys.stdin.readline().split()))

H_min = 1
H_max = N

while H_min + 1 < H_max:
    H = (H_min + H_max) // 2
    st, en = x[0] - H, x[0] + H
    for i in range(M):
        if x[i]-H <= en:
            if st > x[i]-H:
                st = x[i]-H
            if en < x[i]+H:
                en = x[i]+H
            print("[A] 높이=", H, "가로등 위치=", x[i], "start=", st, "end=", en)
        else:
            st = x[i] - H
            en = x[i] + H
            print("[B] 높이=", H, "가로등 위치=", x[i], "start=", st, "end=", en)
    if st <= 0 and en >= N:
        H_max = H
    else:
        H_min = H

print(H_max)
