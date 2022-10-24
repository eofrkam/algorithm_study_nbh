#include <stdio.h>

int arr[101];
int v[101];
int min;
int result;

void rec(int depth, int sum, int n, int m) {
    if (depth == 3) {
        if (sum > m) return;
        if (m - sum < min) {
            min = m - sum;
            result = sum;
        }
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (!v[i]) {
            v[i] = 1;
            rec(depth + 1, sum + arr[i], n, m);
            v[i] = 0;
        }
    }
}

int main() {
    int n, m;
    min = 2147483647;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    rec(0, 0, n, m);
    printf("%d", result);
    return 0;
}
