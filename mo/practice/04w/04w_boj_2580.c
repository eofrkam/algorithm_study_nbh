#include <stdio.h>
#include <stdlib.h>

int arr[10][10];
int num;

int check(int y, int x, int k) {
    
    int temp_y = y / 3;
    int temp_x = x / 3;

    temp_y = temp_y * 3;
    temp_x = temp_x * 3;

    //가로 check
    for (int i = 0; i < 9; ++i) {
        if (arr[y][i] == k)
            return 0;
    }
    //세로 check
    for (int i = 0; i < 9; ++i) {
        if (arr[i][x] == k)
            return 0;
    }
    //9개 check
    for (int i = temp_y; i < temp_y + 3; ++i) {
        for (int j = temp_x; j < temp_x + 3; ++j) {
            if (arr[i][j] == k)
                return 0;
        }
    }
    return 1;
}

void dfs(int y, int x, int fill) {
    if (x == 9) {
        x = 0;
        y++;
    }
    if (fill == num) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        exit(0);
    }
    if (arr[y][x] == 0) {
        for (int k = 1; k < 10; ++k) {
            if (check(y, x, k)) {
                arr[y][x] = k;
                dfs(y, x + 1, fill + 1);
                arr[y][x] = 0;
            }
        }
    }
    else {
        dfs(y , x + 1, fill);
    }
}

int main() {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0) num++;
        }
    }
    dfs(0, 0, 0);
    return 0;
}
