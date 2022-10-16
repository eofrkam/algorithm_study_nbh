#include <stdio.h>

int arr[1000001];

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
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    merge_sort(0, n - 1);

    for (int i = 0; i < n; ++i) {
        printf("%d\n", arr[i]);
    }

}
