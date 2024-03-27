#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, cur = 0, sum = 0;

    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        arr[i] = t;
    }

    sort(arr, arr + n);

    for (auto iter : arr)
    {
        cur += iter;
        // cout << "iter : " << iter << " cur : " << cur << '\n';
        sum += cur;
        // cout << "sum : " << sum << '\n';
    }
    cout << sum << '\n';
}