#include <stdio.h>

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
    head++;
}

void pop_back() {
    tail--;
}

int main() {
    int t, n, num, cnt;
    cnt = 0;
    scanf("%d %d", &t, &n);

    for (int i = 1; i <= t; ++i) {
        push_back(i);
    }

    while (n--) {
        scanf("%d", &num);
        int temp_head = head;
        int temp_tail = tail;
        while (deque[temp_head] != num) {
            temp_head++;
        }
        while (deque[temp_tail - 1] != num) {
            temp_tail--;
        }
        if (temp_head - head <= tail - temp_tail) {
            while (deque[head] != num) {
                push_back(deque[head]);
                pop_front();
                cnt++;
            }
        }
        else {
            while (deque[head] != num) {
                push_front(deque[tail - 1]);
                pop_back();
                cnt++;
            }
        }
        pop_front();
    }
    printf("%d", cnt);
    return 0;
}
