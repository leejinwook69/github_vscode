#include <stdio.h>
int na, nb, val;
char a[4], b[4];

int main(void)
{
    scanf("%s %s", a, b);
    for(int i = 2; i>=0; i--)
    {
        if(i == 2)
        {
            val = 100;
        }else if(i == 1)
        {
            val = 10;
        }else if(i == 0)
        {
            val = 1;
        }
        na+=(a[i]-48)*val;
        nb+=(b[i]-48)*val;
    }
    if(na > nb)
    {
        printf("%d", na);
    }else
    {
        printf("%d", nb);
    }

    return 0;
}