from collections import Counter
import sys

N = int(sys.stdin.readline())

n_list = []
for i in range(N):
    num = int(sys.stdin.readline())
    n_list.append(num)
n_list.sort()

mean_val = 0
for i in range(len(n_list)):                    # mean
    mean_val += n_list[i]
mean = round(mean_val / N)                      # 반올림

med = n_list[len(n_list) // 2]                  # median

mode_val = Counter(n_list).most_common()        # Counter는 value를 [(),()] 형태로 저장, most_common()은 desc 정렬
if N > 1 and mode_val[0][1] == mode_val[1][1]:  # mode
    mode = mode_val[1][0]                       # 2nd value
else:
    mode = mode_val[0][0]

ran = n_list[-1] - n_list[0]                    # range

print(mean, med, mode, ran, sep='\n')
