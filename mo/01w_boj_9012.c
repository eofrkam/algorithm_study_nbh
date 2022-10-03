#include <stdio.h>

void check(char *str) {
    int num = 0;

    while (*str) {
        if (num < 0)
            break;
        if (*str == '(')
            num++;
        else if (*str == ')')
            num--;
        str++;
    }
    if (num == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return;
}

int main() {
    int n;
    char str[52];

    scanf("%d", &n);
    while (n--) {
        scanf("%s", str);
        check(str);
    }
    return 0;
}
