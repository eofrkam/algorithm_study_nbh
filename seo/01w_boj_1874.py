import sys

base = []
arr = []
ex_arr = []
print_arr = []

n = int(sys.stdin.readline())
for i in range(n):
    num = int(sys.stdin.readline())
    ex_arr.append(num)

i = 1
j = 0
base.append(0)
while j != n:
    if i-1 > n:
        print("NO")
        exit()
    if base[-1] == ex_arr[j]:
        print_arr.append("-")
        arr.append(base.pop())
        j += 1
        continue
    base.append(i)
    print_arr.append("+")
    i += 1

for i in range(len(print_arr)):
    print(print_arr[i])
