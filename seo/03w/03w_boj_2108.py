from collections import Counter
import sys

n = int(sys.stdin.readline())
n_list = []
for i in range(n):
    num = int(sys.stdin.readline())
    n_list.append(num)
n_list.sort()

# mean
mean_val = 0
for i in range(len(n_list)):
    mean_val += n_list[i]
mean = round(mean_val / n)

# median
med = n_list[len(n_list) // 2]

#mode
mode_val = Counter(n_list).most_common()
if n > 1 and mode_val[0][1] == mode_val[1][1]:
    mode = mode_val[1][0]
else:
    mode = mode_val[0][0]

#range
ran = n_list[-1] - n_list[0]

print(mean, med, mode, ran, sep='\n')
