#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arrsize;
    int num;
    scanf("%d %d", &arrsize, &num);

    int *arr = (int*)malloc(sizeof(int) * arrsize);
    
    for(int i = 0; i < arrsize; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < arrsize; i++)
    {
        if(arr[i] < num)
            printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}