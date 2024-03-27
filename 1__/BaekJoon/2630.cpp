#include <iostream>

using namespace std;
int w, b;
int arr[128][128];

void cut(int arr[][128], int startI, int startJ, int size)
{
    int area = size * size;
    int count = 0;

    for (int i = startI; i < startI + size; i++)
    {
        for (int j = startJ; j < startJ + size; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
    }
    // for (int i = startI; i < startI + size; i++)
    // {
    //     for (int j = startJ; j < startJ + size; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    if (count == area)
    {
        b++;
        // cout << "b " << '\n';
        return;
    }
    else if (count == 0)
    {
        w++;
        // cout << "w " << '\n';
        return;
    }
    else
    {
        // cout << "cut, rb : " << startJ << '\n'
        //      << '\n';
        // cout << "1/4" << '\n';
        cut(arr, startI, startJ, size / 2);
        // cout << "2/4" << '\n';
        cut(arr, startI, startJ + size / 2, size / 2);
        // cout << "3/4" << '\n';
        cut(arr, startI + size / 2, startJ, size / 2);
        // cout << "4/4" << '\n';
        cut(arr, startI + size / 2, startJ + size / 2, size / 2);
    }
}

int main(void)
{
    int n;
    int result = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cut(arr, 0, 0, n);
    cout << w << '\n'
         << b << '\n';
    return 0;
}