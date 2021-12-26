#include <stdio.h>
int k, n;
int t;

int main(void)
{
    scanf("%d", &t);
    for(int i = 0; i<t; i++)
    {
        int arr[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
        scanf("%d %d", &k, &n);
        for(int j = 0; j < k; j++)
        {
            for(int a = n-1; a >= 0; a--)
            {
                int sum = 0;
                for(int l = 0; l <= a; l++)
                {
                    sum += arr[l];
                }
                arr[a] = sum;
            }
        }
        printf("%d\n", arr[n-1]);
    }
    return 0;
}