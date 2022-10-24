#include <stdio.h>

int v[10];
int arr[10];

void rec(int depth, int n, int m) {
    if (depth == m) {
        for (int i = 0; i < m; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return ;
    }
    for (int i = 1; i <= n; ++i) {
        if (!v[i]) {
            v[i] = 1;
            arr[depth] = i;
            rec(depth + 1, n, m);
            v[i] = 0;
        }
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    rec(0, n, m);
    return 0;
}
