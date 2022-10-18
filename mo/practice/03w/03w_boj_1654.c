#include <stdio.h>

long long arr[1000001];
long long n, k;

void merge(int left, int right) {
    int temp[1000001];
    int t, l, m, mid;
    l = left;
    t = left;
    mid = (left + right) / 2;
    m = mid + 1;

    while (l <= mid && m <= right) {
        if (arr[l] < arr[m])
            temp[t++] = arr[l++];
        else
            temp[t++] = arr[m++];
    }
    while (l <= mid)
        temp[t++] = arr[l++];
    while (m <= right)
        temp[t++] = arr[m++];
    while (left <= right) {
        arr[left] = temp[left];
        left++;
    }
    return;
}

void merge_sort(int left, int right) {
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    merge_sort(left, mid);
    merge_sort(mid + 1, right);
    merge(left, right);
}

long long b_search(long long st, long long en) {
    long long mid;
    long long sum;
    while (st <= en) {
        mid = (st + en ) / 2;
        sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += (arr[i] / mid);
        }
        if (sum >= k)
            st = mid + 1;
        else
            en = mid - 1;
    }
    return en;
}

int main() {
    long long num;
    long long sum;
    scanf("%lld %lld", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%lld", &arr[i]);
    }
    merge_sort(0, n - 1);
    num = b_search(1, arr[n - 1]);
    sum = k;

    printf("%lld\n", num);
}
