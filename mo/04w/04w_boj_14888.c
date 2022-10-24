#include <stdio.h>

int arr[101];
int op[100001];
int v[100001];
int size;
int max;
int min;

void rec(int depth, int result, int n) {
    if (depth == n) {
        if (result < min) min = result;
        if (result > max) max = result;
        return ;
    }
    for (int i = 0; i < size; ++i) {
        if (v[i]) continue;

        if (op[i] == 0) {
            v[i] = 1;
            rec(depth + 1, result + arr[depth], n);
            v[i] = 0;
        }
        else if (op[i] == 1) {
            v[i] = 1;
            rec(depth + 1, result - arr[depth], n);
            v[i] = 0;
        }
        else if (op[i] == 2) {
            v[i] = 1;
            rec(depth + 1, result * arr[depth], n);
            v[i] = 0;
        }
        else {
            v[i] = 1;
            rec(depth + 1, result / arr[depth], n);
            v[i] = 0;
        }
    }
}

int main() {
    int n, num;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &num);
        for (int j = 0; j < num; ++j) {
            op[size++] = i;
        }
    }
    max = -1000000001;
    min = 1000000001;

    rec(1, arr[0], n);
    printf("%d\n", max);
    printf("%d\n", min);
    return 0;
}
