#include <stdio.h>

int v[10];
int arr[10];
void rec(int depth, int num, int n, int m) {
    if (depth == m) {
        for (int i = 0; i < m; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return ;
    }
    if (num > n) return;
    arr[depth] = num;
    rec(depth + 1, num + 1, n, m);
    arr[depth] = 0;
    rec(depth, num + 1, n, m);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    rec(0, 1, n, m);
    return 0;
}
