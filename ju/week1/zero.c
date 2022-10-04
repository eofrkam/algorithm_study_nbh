#include <stdio.h>

int stack[1000001];
int stack_size = 0;

void push(int data)
{
    stack[stack_size] = data;
    stack_size += 1;
}

void delete()
{
    stack_size -= 1;
}

int main(void)
{
    int K = 0;
    scanf("%d",&K);
    
    for(int i=0;i<K;i++)
    {
        int ord = -1;
        scanf("%d",&ord);
        if (ord == 0)
            delete();
        else
            push(ord);
    }
    int ans = 0;
    for(int j = 0;j<stack_size;j++)
    {
        ans += stack[j];
    }
    printf("%d\n",ans);
    return 0;
}