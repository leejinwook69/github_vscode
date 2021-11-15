#include <stdio.h>
#include <stdbool.h>

bool arr[10000] = {false};

int SelfNum(int n)
{
    int a = n;
    while(n>0)
    {
        a += n%10;
        n /= 10;
    }
    return a;
}

int main(void)
{
    for(int i = 0; i<10000; i++)
    {
        arr[SelfNum(i)-1] = true;
    }
    for(int i = 0; i<10000; i++)
    {
        if(arr[i] == false)
        {
            printf("%d\n", i+1);
        }
    }

    return 0;
}

