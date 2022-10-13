import sys

S = sys.stdin.readline().rstrip()

com = set()
for i in range(len(S)):
    for j in range(i, len(S)):
        com.add(S[i:j+1])
print(len(com))

# S = list(sys.stdin.readline().strip())
# com = set()
# s_len = len(S)
#
# a = ""
# for i in range(s_len):
#     for j in range(i, s_len+1):
#         com.add(a.join(S[i:j]))
# com.discard('')
# print(len(com))
