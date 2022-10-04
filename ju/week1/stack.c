#include <stdio.h>
#include <string.h>

int stack[10001];
int stack_size = 0;

void push(int data)
{
    stack[stack_size] = data;
    stack_size +=1;
}

int empty()
{
    if (stack_size == 0)
        return 1;
    return 0;
}

int pop()
{
    if (empty())
        return -1;
    stack_size -= 1;
    return stack[stack_size];
}

int top()
{
    if(empty())
        return -1;
    return stack[stack_size-1];
}

int main()
{
    int N = 0, data = 0;
    char command[5] = {0,};

    scanf("%d",&N);

    for(int i=0;i<N; i++)
    {
        scanf("%s",command);

        if (!strcmp(command,"push"))
        {
            scanf("%d",&data);
            push(data);
        }
        else if(!strcmp(command,"pop"))
        {
            printf("%d\n",pop());
        }
        else if(!strcmp(command,"empty"))
        {
            printf("%d\n",empty());
        }
        else if(!strcmp(command,"size"))
            printf("%d\n",stack_size);
        else if(!strcmp(command,"top"))
            printf("%d\n",top());
    }

    return 0;
}