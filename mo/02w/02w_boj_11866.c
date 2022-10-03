#include <stdio.h>

int queue[1111111];
int front;
int rear;

void push(int n) {
    queue[rear++] = n;
}

void pop() {
    front++;
}

int main() {
    int n, k;
    int num = 1;
    int temp = 0;
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; ++i) {
        push(i);
    }
    printf("<");
    while (temp < n - 1) {
        if (num % k == 0) {
            printf("%d, ", queue[front]);
            temp++;
            pop();
        }
        else {
            push(queue[front]);
            pop();
        }
        num++;
    }
    printf("%d>", queue[front]);
    return 0;
}
