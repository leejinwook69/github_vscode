#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrsize;
    int min = 1000000;
    int max = -1000000;
    scanf("%d",&arrsize);

    int *arr = (int*)malloc(sizeof(int) * arrsize);

    for(int i = 0; i < arrsize; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < arrsize; i++)
    {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }

    printf("%d %d", min, max);
    free(arr);
    return 0;
}