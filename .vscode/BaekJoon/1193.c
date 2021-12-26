#include <stdio.h>

int n, k, a, b;
int sub;
int main(void)
{

    scanf("%d", &k);
    for(; n*(n+1) < 2*k; n++);
    n--;
    sub = k - n*(n+1)/2;
    if((n+1)%2 ==1)
    {
        a = n+1;
        b = 1;
        for(int i = sub; i > 1; i--)
        {
            a--;
            b++;
        }
    }else
    {
        a = 1;
        b = n+1;
        for(int i = sub; i > 1; i--)
        {
            a++;
            b--;
        }
    }

    printf("%d/%d", a, b);
    return 0;
}