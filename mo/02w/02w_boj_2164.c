#include <stdio.h>

int queue[1000001];
int front;
int rear;

void push(int n) {
    queue[rear++] = n;
}

void pop() {
    front++;
}

int main() {
    int n;
    int temp;
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        push(i);
    }

    while (rear - front != 1) {
        pop();
        temp = queue[front];
        pop();
        push(temp);
    }

    printf("%d", queue[front]);
    return 0;
}
