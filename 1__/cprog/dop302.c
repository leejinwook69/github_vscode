#include <stdio.h>

int main(void)
{
    int arr[100][100];
    int n;
    int k = 1;
    int up = 0;
    int down = 0;
    int right = 0;
    int left = 0;
    int side = 1;

    scanf("%d", &n);

    while(k <= n*n)
    {
        if(side == 1)
        {
            for(int j = left; j<n-right; j++)
                arr[up][j] = k++;
            up++;
            side++;
        }else if(side == 2)
        {
            for(int j = up; j<n-down; j++)
                arr[j][n-right-1] = k++;
            right++;
            side++;
        } else if(side == 3)
        {
            for(int j = n-right; j>left; j--)
                arr[n-down-1][j-1] = k++;
            down++;
            side++;
        } else if(side == 4)
        {
            for(int j = down; j<n-up; j++)
                arr[n-j-1][left] = k++;
            left++;
            side = 1;
        }
    }
        for(int i = 0; i<n; i++)
    {
        for(int k = 0; k < n; k++)
        {
            printf("%3d ", arr[i][k]);
        }
        printf("\n");
    }
    return 0;
}