#include <stdio.h>
#include <string.h>

int main(void)
{
    int N,i,j,cnt;
    scanf("%d",&N);
    char str[51];
    while (N--)
    {
        scanf("%s",str);
        j = 0;
        cnt = 0;
        while (j < strlen(str))
        {
            if (str[j] == '(')
                cnt++;
            else
                cnt--;
            if (cnt < 0)
            {
                printf("NO\n");
                break;
            }
            j++;
        }
        if (cnt == 0)
            printf("YES\n");
        else if (cnt > 0)
            printf("NO\n");
    }
}