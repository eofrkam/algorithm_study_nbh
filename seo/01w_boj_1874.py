import sys

arr9 = []       # TEST1
arr2 = []       # TEST2

base = []
arr = []        # 풀이에 사용할 리스트
ex_arr = []     # 예제 수열
print_arr = []  # +- 출력 내용을 저장한 리스트

n = int(sys.stdin.readline())
for i in range(n):
    num = int(sys.stdin.readline())
    ex_arr.append(num)

i = 0
j = 0
while i < n:
    base.append(i+1)
    print("+")
    if base[i] == ex_arr[j]:
        arr.append(base.pop())
        j += 1
        print("-")
        continue
    i += 1

print(base)
print(arr)

# i = 0
# j = 0
# while 1:
#     if j == n:
#         break
#     if i < ex_arr[j]:
#         i += 1
#     elif i == ex_arr[j]:
#         arr.append(i)
#         j += 1
#     elif i > ex_arr[j]:
#         i -= 1
#
# print(arr)
