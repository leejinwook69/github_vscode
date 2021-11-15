#include <stdio.h>

int arr[1000];

int main(void)
{
    double mean;
    int sum = 0;
    int max;
    int num;
    

    scanf("%d", &num);

    for(int i = 0; i<num; i++)
    {
        scanf("%d", &arr[i]);

        sum += arr[i];

        if(i == 0)
        {
            max = arr[i];
        } else if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    mean = (double)sum / num;

    printf("%lf", mean/max*100);

    return 0;
}