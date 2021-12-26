#include <stdio.h>

int main(void)
{
    int temp, n, result;
    int i = 0;

    scanf("%d", &n);

    result = 5001;

    for(int k = 0; 5*k <= n; k++)
    {
        if((n-5*k)%3 == 0)
        {
            temp = (n-5*k)/3 + k;
            if(temp < result)
                result = temp;
        }

    }
    if(result == 5001)
    {
        printf("-1");
    }else
    {
        printf("%d", result);
    }
    return 0; 
}