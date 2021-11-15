#include<stdio.h>

int main(void)
{
    int arr[10];
    int count = 0;
    int result = 10;

    for(int i = 0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] %= 42;
    }
    
    for(int i = 0; i<10; i++)
    {
        for(int k = i+1; k<10; k++)
        {
            if(arr[i] == arr[k])
            {
                count++;
            }
        }

        if(count != 0)
        {
            result--;
            count = 0;
        }
    }
    printf("%d\n", result);
    return 0;
}