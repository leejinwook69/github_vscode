#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    double dm, mean = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << '\n';
    }
    else
    {

        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        dm = n;

        dm = round(dm * 0.15);

        for (int i = dm; i < n - dm; i++)
        {
            mean += arr[i];
        }

        mean = round(mean / (n - 2 * dm));

        cout << mean << '\n';
    }
}