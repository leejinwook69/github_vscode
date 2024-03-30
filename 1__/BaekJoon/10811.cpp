#include <iostream>

using namespace std;

int main(void)
{
    int n, m;

    cin >> n >> m;
    int arr[n];
    int arr2[n] = {
        0,
    };
    while (n--)
    {
        arr[n] = n + 1;
    }
    while (m--)
    {
        int i, j;
        cin >> i >> j;
        for (int k = 0; k < j - i + 1; k++)
        {
            arr2[j - 1 - k] = arr[i - 1 + k];
        }
        for (int k = 0; k < j - i + 1; k++)
        {
            arr[i - 1 + k] = arr2[i - 1 + k];
        }
    }
    for (auto iter : arr)
    {
        cout << iter << " ";
    }
}