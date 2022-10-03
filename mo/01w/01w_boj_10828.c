#include <stdio.h>

int stack[10001];
int size;

void push(int n) {
    stack[size++] = n;
}

void s_size() {
    printf("%d\n", size);
}
int empty() {
    if (size > 0)
        return 0;
    else
        return 1;
}
void pop() {
    if (!empty())
        printf("%d\n", stack[--size]);
    else
        printf("-1\n");
}

void top() {
    if (!empty())
        printf("%d\n", stack[size - 1]);
    else
        printf("-1\n");
}

int main() {
    int n, num;
    char str[100];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", str);
        if (str[0] == 'p' && str[1] == 'u') {
            scanf("%d", &num);
            push(num);
        }
        else if (str[0] == 'p')
            pop();
        else if (str[0] == 't')
            top();
        else if (str[0] == 's')
            s_size();
        else if (str[0] == 'e')
            printf("%d\n", empty());
    }
    return 0;
}
