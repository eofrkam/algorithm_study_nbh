import sys

base = []
ex_arr = [] # 예제 수열
arr = []    # 풀이에 사용할 리스트
print_arr = []  # +- 출력 내용을 저장한 리스트

cnt = 1

n = int(sys.stdin.readline())

for i in range(1, n+1, 1):
    base.append(i)

    num = int(sys.stdin.readline())
    ex_arr.append(num)

arr2 = []

arr.append(1)
print("arr = ", arr)
print("arr2 = ", arr2)
arr.append(2)
print("arr = ", arr)
print("arr2 = ", arr2)
arr.append(3)
print("arr = ", arr)
print("arr2 = ", arr2)
arr.append(4)
print("arr = ", arr)
print("arr2 = ", arr2)
arr2.append(arr.pop())
print("arr = ", arr)
print("arr2 = ", arr2)
arr2.append(arr.pop())
print("arr = ", arr)
print("arr2 = ", arr2)
arr.append(5)
print("arr = ", arr)
print("arr2 = ", arr2)
arr.append(6)
print("arr = ", arr)
print("arr2 = ", arr2)
arr2.append(arr.pop())
print("arr = ", arr)
print("arr2 = ", arr2)
arr.append(7)
print("arr = ", arr)
print("arr2 = ", arr2)
arr.append(8)
print("arr = ", arr)
print("arr2 = ", arr2)
arr2.append(arr.pop())
print("arr = ", arr)
print("arr2 = " ,arr2)
arr2.append(arr.pop())
print("arr = ", arr)
print("arr2 = ", arr2)
arr2.append(arr.pop())
print("arr = ", arr)
print("arr2 = ", arr2)
arr2.append(arr.pop())
print("arr = ", arr)
print("arr2 = ", arr2)
arr2.append(arr.pop())
print("arr = ", arr)
print("arr2 = ", arr2)



# 검산 출력
for i in range(n):
    print("ex_arr = <", ex_arr[i], ">", end=" | ")
    print("base = [", base[i], "]")

# # 마지막 출력
# if:
#     for i in range(len(print_arr)):
#         print(print_arr[i])
# else:
#     print("NO")
