#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int arr2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char mularr[100];
    int mul;

    scanf("%d\n%d\n%d", &a, &b, &c);
    mul = a*b*c;

    sprintf(mularr, "%d", mul);
    
    for(int i = 0; mularr[i] != 0; i++)
    {
        for(int k = 0; k < 10; k++)
        {
            if((mularr[i]-48) == k)
            {
                arr2[k]++;
            }
        }   
    }

    for(int k = 0; k < 10; k++)
        {
            printf("%d\n", arr2[k]);
        }

    return 0;
}