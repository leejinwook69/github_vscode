#include <stdio.h>

int a, b, v, n;

int main(void)
{
    scanf("%d %d %d", &a, &b, &v);
    
    if(v > 2*a)
    {
        n = (v-2*a)/(a-b);
        v = v-n*a+n*b;
    }

    for(; v>0; n++)
    {
        if(v-a > 0)
        {
            v+=b;
        }
        v -= a;
    }
    printf("%d\n", n);
}