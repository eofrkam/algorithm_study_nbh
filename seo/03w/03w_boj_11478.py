import sys

s = sys.stdin.readline().rstrip()
com = set()

for i in range(len(s)):
    for j in range(i, len(s)):
        com.add(s[i:j+1])
print(len(com))


# s = list(sys.stdin.readline().strip())
# com = set()
# s_len = len(s)
#
# a = ""
# for i in range(s_len):
#     for j in range(i, s_len+1):
#         com.add(a.join(s[i:j]))
# com.discard('')
# print(len(com))