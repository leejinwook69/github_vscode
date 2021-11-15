#include <stdio.h>

int arr[1000];

int main(void)
{
    int casenum;
    int stunum;
    double mean;
    int sum = 0;
    int overavg = 0;
    double rate;
    scanf("%d", &casenum);

    for(int i = 0; i<casenum; i++)
    {
        scanf("%d", &stunum);
        for(int k = 0; k<stunum; k++)
        {
            scanf("%d", &arr[k]);
            sum += arr[k];
        }
        
        mean = (double) sum / stunum;
        
        for(int k = 0; k<stunum; k++)
        {
            if((double)arr[k] > mean)
                overavg++;
        }

        rate = (double)overavg/stunum;

        printf("%.3lf%%\n", 100*rate);
        sum = 0;
        overavg = 0;
    }

    return 0;
}