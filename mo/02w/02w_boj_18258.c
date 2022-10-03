#include <stdio.h>

int queue[2000001];
int front;
int rear;

void push(int n) {
    queue[rear++] = n;
}
void pop() {
    front++;
}

int main() {
    int n, num;
    char str[50];
    scanf("%d", &n);

    while (n--) {
        scanf("%s", str);
        switch (str[0]) {
            case 'p':
            {
                if (str[1] == 'u') {
                    scanf("%d", &num);
                    push(num);
                }
                else if (str[1] == 'o') {
                    if (rear - front == 0) {
                        printf("-1\n");
                        break;
                    }
                    printf("%d\n", queue[front]);
                    pop();
                }
                break;
            }
            case 'f':
            {
                if (front == rear)
                    printf("-1\n");
                else
                    printf("%d\n",queue[front]);
                break;
            }
            case 'b':
            {
                if (front == rear)
                    printf("-1\n");
                else
                    printf("%d\n", queue[rear - 1]);
                break;
            }
            case 's':
            {
                printf("%d\n", rear - front);
                break;
            }
            case 'e':
            {
                int temp = (front == rear) ? 1 : 0;
                printf("%d\n", temp);
                break;
            }
        }
    }
    return 0;
}
