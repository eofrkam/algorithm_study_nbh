import sys

N = int(sys.stdin.readline())

stack = [0]
base = []
print_list = []
for i in range(N):
    num = int(sys.stdin.readline())
    base.append(num)

i, j = 1, 0
while j != N:
    if i-1 > N:                 # 계산 실패
        print("NO")
        exit()
    if stack[-1] == base[j]:    # stack의 top이 base[j]의 value 일때
        print_list.append("-")
        stack.pop()
        j += 1
    else:                       # 아닐때
        stack.append(i)
        print_list.append("+")
        i += 1

print(*print_list, sep='\n')
