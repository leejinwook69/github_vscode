#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#define MAXNUM 500001
using namespace std;

int main(void)
{
    int n;
    int arr[n];
    map<int, int> number;
    int min = 4001;
    int max = -1;
    int count = 0;

    float mean;
    int median;
    int range;
    int mode = 0;
    int resultmode = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        number[arr[i]]++;

        mean += arr[i];

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    sort(arr, arr + n);

    mean = round(mean / n);

    median = arr[(n / 2)];

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

    range = max - min;

    cout << (int)mean << '\n'
         << median << '\n'
         << resultmode << '\n'
         << range << '\n';
}