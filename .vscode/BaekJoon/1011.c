#include <stdio.h>
#include <math.h>


int Centauri(double n)
{
    int p = 0;
    if(n < sqrt(3))
    {
        return n*n;
    }else
    {
        for(p = 1; (p+1) < n; p++);
        if(floor(n+0.5) == p)
        {
            return 2*p;
        } else
        {
            return 2*p+1;
        }
    }
}

int main(void)
{
    int a, b, n;
    double r;

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        r = sqrt(b-a);
        printf("%d\n", Centauri(r));
    }
    return 0;
}