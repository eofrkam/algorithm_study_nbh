#include <stdio.h>

char arr[200002];
int stack[200002];
int size;
int size_2;

void push(int n) {
    stack[size++] = n;
}
void pop() {
    stack[--size] = 0;
    arr[size_2++] = '-';
}

int main() {
    int n, max, num;
    max = 0;
    scanf("%d", &n);

    while (n--) {
        scanf("%d", &num);
        if (max < num) {
            for (int i = max + 1; i <= num; ++i) {
                arr[size_2++] = '+';
                push(i);
            }
            pop();
            max = num;
        }
        else {
            if (stack[size - 1] < num) {
                printf("NO");
                return 0;
            }
            while (stack[size - 1] >= num) {
                pop();
            }
        }
    }
    for (int i = 0; i < size_2; ++i) {
        printf("%c\n", arr[i]);
    }
    return 0;
}
