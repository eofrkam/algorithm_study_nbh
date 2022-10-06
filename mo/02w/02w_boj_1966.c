#include <stdio.h>

typedef struct {
    int num;
    int grade;
} St;

St queue[1111111];
int front;
int rear;

void push(St new) {
    queue[rear].num = new.num;
    queue[rear++].grade = new.grade;
}

void pop() {
    front++;
}

int main() {
    int t, n, m, g, num, max;
    St s;
    scanf("%d", &t);

    while (t--) {
        num = 1;
        front = 0;
        rear = 0;
        scanf("%d %d", &n, &m);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &g);
            s.num = i;
            s.grade = g;
            push(s);
        }
        while (1) {
            max = 0;
            for (int i = front; i < rear; ++i) {
                if (max <= queue[i].grade) {
                    max = queue[i].grade;
                }
            }
            if (queue[front].grade == max) {
                if (queue[front].num == m) {
                    printf("%d\n", num);
                    break;
                }
                pop();
                num++;
            }
            else {
                push(queue[front]);
                pop();
            }
        }
    }
    return 0;
}
