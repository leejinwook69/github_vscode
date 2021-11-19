#include <stdio.h>

int arr1[4][4];
int arr2[4][4];

void rotate(int (*ptr)[4])
{
    for(int i = 0; i<4; i++)
    {
        for(int k = 0; k < 4; k++)
        {
            arr2[i][k] = ptr[i][k]; 
        }
    }

        
    for(int i = 0; i<4; i++)
    {
        for(int k = 0; k < 4; k++)
        {
            ptr[k][3-i] = arr2[i][k];
        }
    }
}

int main(void)
{
    for (int i = 0; i < 16; i++)
    {
        for(int k = 0; k<4; k++)
        {
            *(arr1[k]+i) = i+1;
        }
    }

    rotate(arr1);




    for(int i = 0; i<4; i++)
    {
        for(int k = 0; k < 4; k++)
        {
            printf("%d ", arr1[i][k]);
        }
        printf("\n");
    }
}