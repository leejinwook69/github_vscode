#include <stdio.h>

int arr[43];


int main(void)
{
    int a;
    int count = 0;
    for(int i = 0; i<10; i++)
    {
        scanf("%d", &a);
        a %= 42;
        arr[a] += 1;
    }

    for(int i = 0; i<43; i++)
    {
        if(arr[i] != 0)
            count++;
    }

    printf("%d", count);

    return 0;
}