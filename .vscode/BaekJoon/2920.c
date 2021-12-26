#include <stdio.h>

int main(void)
{
    int arr[8];

    scanf("%d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7]);

    if(arr[1] - arr[0] == 1)
    {
        for (int i = 0; i < 7; i++)
        {
            if(arr[i+1] - arr[i] != 1)
            {
                printf("mixed\n"); 
                return 0;
            }
        }
        printf("ascending\n"); 
        
    }else if(arr[1] - arr[0] == -1)
    {
        for (int i = 0; i < 7; i++)
        {
            if(arr[i+1] - arr[i] != -1)
            {
                printf("mixed\n"); 
                return 0;
            }
        }
        printf("descending\n"); 
    }else
    {
        printf("mixed\n"); 
    }
    return 0;
}