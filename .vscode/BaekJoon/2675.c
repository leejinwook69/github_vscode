#include <stdio.h>

char arr[20];
int repeat;
int casenum;

int main(void)
{
    scanf("%d", &casenum);

    for(int i = 0; i<casenum; i++)
    {
        scanf("%d %s", &repeat, arr);
        for(int k = 0; arr[k] != '\0'; k++)
        {
            for(int j = repeat; j >0; j--)
            {
                printf("%c", arr[k]);
            }
        }
        putchar('\n');
    }
    
    return 0;
}