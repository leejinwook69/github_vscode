#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#define MAXNUM 500001
using namespace std;

int main(void)
{
    int n;
    map<int, int> number;
    int count = 0;

    double mean = 0;
    int resultmean;
    int median;
    int range;
    int mode = 0;
    int resultmode = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        number[arr[i]]++;

        mean += arr[i];
    }
    sort(arr, arr + n);

    mean = round(mean / n);
    resultmean = mean;
    median = arr[((n - 1) / 2)];

    for (int i = 0; i < n; i++)
    {
        if (number[arr[i]] > mode)
        {
            mode = number[arr[i]];
            resultmode = arr[i];
            count = 0;
        }
        else if (arr[i] != resultmode && number[arr[i]] == mode)
        {
            count++;
        }
    }
    if (count)
    {
        number[resultmode]--;
        for (int i = 1; i <= MAXNUM; i++)
        {
            if (number[arr[i]] == mode)
            {
                resultmode = arr[i];
                break;
            }
        }
    }

    range = arr[n - 1] - arr[0];

    cout << resultmean << '\n'
         << median << '\n'
         << resultmode << '\n'
         << range << '\n';
}