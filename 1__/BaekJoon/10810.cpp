#include <iostream>

using namespace std;

int main(void)
{
    int n, m;

    cin >> n >> m;
    int arr[n] = {
        0,
    };
    while (m--)
    {
        int i, j, k;
        cin >> i >> j >> k;
        for (; i - 1 < j; i++)
        {
            arr[i - 1] = k;
        }
    }
    for (auto iter : arr)
    {
        cout << iter << " ";
    }
}