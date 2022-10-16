#include <stdio.h>

int arr[1000001];
int po[4001];
int ne[4001];

void merge(int left, int right) {
    int temp[1000001];
    int l, t, m;
    int mid = (left + right) / 2;
    m = mid + 1;
    l = left;
    t = left;

    while (l <= mid && m <= right) {
        if (arr[l] >= arr[m]) {
            temp[t++] = arr[m++];
        }
        else
            temp[t++] = arr[l++];
    }
    if (l > mid) {
        while (m <= right) {
            temp[t++] = arr[m++];
        }
    }
    else {
        while (l <= mid) {
            temp[t++] = arr[l++];
        }
    }

    while (left <= right) {
        arr[left] = temp[left];
        left++;
    }


}

void merge_sort(int left, int right) {

    if (left >= right) return;

    int mid = (left + right) / 2;
    merge_sort(left, mid);
    merge_sort(mid + 1, right);
    merge(left, right);
}

int main() {
    int n;
    int sum = 0;
    int range = 0;
    int max = 0;
    int min = 1000000;
    int cnt = 0;
    int result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (arr[i] < 0) {
            int temp = -arr[i];
            ne[temp]++;
        }
        else
            po[arr[i]]++;
    }

    for (int i = 0; i < 4001; ++i) {
        if (i > 0 && ne[i] > max) {
            cnt = 0;
            max = ne[i];
            result = -i;
        }
        if (po[i] > max) {
            cnt = 0;
            max = po[i];
            result = i;
        }
        if (max == ne[i] || max == po[i]) cnt++;
    }

    if (cnt > 0) {
        int flag = 0;
        for (int i = 4000; i > 0; --i) {
            if (!flag && max == ne[i])
                flag = 1;
            else if (flag && max == ne[i]) {
                result = -i;
                break;
            }
        }
        if (!flag) {
            for (int i = 1; i < 4001; ++i) {
                if (!flag && max == po[i])
                    flag = 1;
                else if (flag && max == po[i]) {
                    result = i;
                    break;
                }
            }
        }
    }

    merge_sort(0, n - 1);

    if ((double)sum / n < 0 && (double)sum / n > -1)
        sum = -sum;

    printf("%.0f\n", (double)sum / n);
    printf("%d\n", arr[n / 2]);
    printf("%d\n", result);
    printf("%d\n", arr[n-1] - arr[0]);
}
