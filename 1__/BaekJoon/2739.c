#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    for(int j = 1; j <= a; j++)
    {
        for(int k = 0; k < a; k++)
        {
            if(k<a-j) 
            {
                printf(" ");
            } else
            {
                printf("*");
            }
        }
        printf("\n");

    }

    return 0;
}