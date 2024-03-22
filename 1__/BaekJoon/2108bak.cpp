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

    double mean;
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

        mean += (double)arr[i];
    }
    sort(arr, arr + n);

    mean = round(mean / n);
    resultmean = (int)mean;
    median = arr[(n / 2)];

    // for (int i = 0; i < n; i++)
    // {
    //     bool second = false;
    //     if (number[arr[i]] > mode)
    //     {
    //         mode = number[arr[i]];
    //         resultmode = arr[i];
    //     }
    //     else if (second == false && arr[i] != resultmode && number[arr[i]] == mode)
    //     {
    //         resultmode = arr[i];
    //         second = true;
    //     }
    // }

    // range = arr[n - 1] - arr[0];

    cout << mean << '\n'
         << median << '\n'
         << resultmode << '\n'
         << range << '\n';
}