#include <stdio.h>
#include <string.h>

int deque[2000001];
int head = 1000000;
int tail = 1000000;

void push_front(int n) {
    deque[--head] = n;
}

void push_back(int n) {
    deque[tail++] = n;
}

void pop_front() {
    if (tail - head <= 0) printf("-1\n");
    else printf("%d\n", deque[head++]);
}

void pop_back() {
    if (tail - head <= 0) printf("-1\n");
    else printf("%d\n", deque[--tail]);
}

void size() {
    printf("%d\n", tail - head);
}

void empty() {
    if (tail - head <= 0)
        printf("1\n");
    else
        printf("0\n");
}

void front() {
    if (tail - head <= 0)
        printf("-1\n");
    else
        printf("%d\n", deque[head]);
}

void back() {
    if (tail - head <= 0)
        printf("-1\n");
    else
        printf("%d\n", deque[tail - 1]);
}

int main() {
    int n, num;
    char str[100];
    scanf("%d", &n);

    while (n--) {
        scanf("%s", str);
        if (!strcmp(str , "push_front")) {
            scanf("%d", &num);
            push_front(num);
        }
        else if (!strcmp(str, "push_back")) {
            scanf("%d", &num);
            push_back(num);
        }
        else if (!strcmp(str, "pop_front"))
            pop_front();
        else if (!strcmp(str, "pop_back"))
            pop_back();
        else if (!strcmp(str, "size"))
            size();
        else if (!strcmp(str, "empty"))
            empty();
        else if (!strcmp(str, "front"))
            front();
        else if (!strcmp(str , "back"))
            back();
    }
    return 0;
}
