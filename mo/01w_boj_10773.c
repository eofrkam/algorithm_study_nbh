#include <stdio.h>

int stack[100001];
int size;

void push(int n) {
    stack[size++] = n;
}
void pop() {
    stack[--size] = 0;
}

int main() {
    int n, num;
    int sum = 0;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        if (num == 0)
            pop();
        else
            push(num);
    }
    for (int i = 0; i < size; ++i) {
        sum += stack[i];
    }
    printf("%d", sum);
    return 0;
}
