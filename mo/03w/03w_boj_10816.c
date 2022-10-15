#include <stdio.h>

int ne[10000001];
int po[10000001];

int main() {
    int n, num;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        if (num < 0) {
            num = -num;
            ne[num]++;
        }
        else
            po[num]++;
    }
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        if (num < 0) {
            num = -num;
            printf("%d ", ne[num]);
        }
        else {
            printf("%d ", po[num]);
        }
    }
    return 0;
}
