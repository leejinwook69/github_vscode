#include <stdio.h>

int main(void)
{
    int arr[9];
    int pos;
    int max = 0;
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 9; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            pos = i;
        }
    }

    printf("%d\n%d", max, pos+1);

    return 0;
}