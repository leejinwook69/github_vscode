#include <iostream>

using namespace std;

int main(void)
{
    int n, m;

    cin >> n >> m;
    int arr[n];
    while (n--)
    {
        arr[n] = n + 1;
    }
    while (m--)
    {
        int i, j, temp;
        cin >> i >> j;
        temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
    }
    for (auto iter : arr)
    {
        cout << iter << " ";
    }
}