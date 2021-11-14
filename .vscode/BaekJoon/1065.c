#include <stdio.h>

int arr[4];
int number;
int result;
int pivot;

void Check(int n, int a[])
{
    pivot = 0;
    for(int i = 0; n>0; i++)
    {
        a[i] = n%10;
        n /= 10;
        if(i >= 2)
        {
            for(int k = i; k >= 2; k--)
            {
                if(a[k]-a[k-1] != a[k-1] - a[k-2])
                    pivot = 1;    
            }

        }
    }
}

int main(void)
{
    scanf("%d", &number);
    
    for(int i = 1; i<=number; i++)
    {
        Check(i, arr);
        if(pivot == 0)
            result++;

    }

    printf("%d", result);
    return 0;
}