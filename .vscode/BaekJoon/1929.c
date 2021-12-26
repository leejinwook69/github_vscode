#include <stdio.h>
#include <math.h>

int check[1000001];

int main(void)
{
    int n = 1000000;
    int min, max;
    int div;
    check[0] = 1;
    check[1] = 1;
    
    scanf("%d %d", &min, &max);

    if(max < 100)
    {
        div = max;
    }else
    {
        div = sqrt(max);
    }

    for (int i = 2; i <= div; i++)
    {
        if (check[i] == 0)
        {
            for (int j = i + i; j <= max; j += i)
            {
                check[j] = 1;
            }
        }
    }

    for (int i = min; i <= max; i++)
    {
        if (!check[i])
            printf("%d\n", i);
    }

    return 0;
}