#include <stdio.h>

int ne[10000001];
int po[10000001];

int main() {
    int n, num;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        if (num == 0)
            po[0] = 1;
        else if (num < 0) {
            num = -num;
            ne[num] = 1;
        }
        else
            po[num] = 1;
    }
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        if (num < 0) {
            num = -num;
            if (ne[num])
                printf("1 ");
            else
                printf("0 ");
        }
        else {
            if (po[num])
                printf("1 ");
            else
                printf("0 ");
        }
    }
    return 0;
}
