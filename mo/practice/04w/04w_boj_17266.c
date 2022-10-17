#include <stdio.h>

int arr[100001];

int max(int a, int b) {
    int m = a > b ? a : b;
    return m;
}

int main() {
    int n, m, res;
    scanf("%d", &n);
    scanf("%d", &m);

    for (int i = 0; i < m; ++i) {
        scanf("%d", &arr[i]);
    }

    int left = arr[0];
    int right =  n - arr[m - 1];

    res = max(left, right);

    for (int i = 0; i < m; ++i) {
        int temp = arr[i] - arr[i - 1] + 1;
        res = max(temp / 2, res);
    }

    printf("%d\n", res);
    return 0;
}
