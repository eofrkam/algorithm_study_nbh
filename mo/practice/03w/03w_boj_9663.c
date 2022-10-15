#include <stdio.h>

int count;
int queen[100];

int check(int depth, int i) {
    int temp;
    int temp2;
    for (int j = 0; j < depth; ++j) {
        temp = depth - j;
        temp2 = i - queen[j];
        if (i == queen[j])
            return 0;
        if (temp < 0) temp = -temp;
        if (temp2 < 0) temp2 = -temp2;
        if (temp == temp2)
            return 0;
    }
    return 1;
}

void dfs(int depth, int n) {
    if (depth == n) {
        count++;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (check(depth, i)) {
            queen[depth] = i;
            dfs(depth + 1, n);
            queen[depth] = 0;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    dfs(0, n);
    printf("%d", count);
    return 0;
}
