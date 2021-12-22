#include <stdio.h>

int main(void)
{
    int n, c, a;

    scanf("%d", &n);
    c = n;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if(a == 1)
        {
            c--;
        }
        for(int k = 2; k < a; k++)
        {
            if(a%k == 0)
            {
                c--;
                break;
            }
        }
    }
    printf("%d\n", c);

    return 0;
}