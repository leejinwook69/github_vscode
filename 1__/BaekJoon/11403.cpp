#include <iostream>

using namespace std;

int arr[100][100], arr2[100][100];

void checkRoute(int arr[][100], int searchRow, int size, int currentRow)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[searchRow][i] == 1)
        {
            if (arr2[currentRow][i] != 1)
            {
                arr2[currentRow][i] = 1;

                checkRoute(arr, i, size, currentRow);
            }
        }
    }
}
int main(void)
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        checkRoute(arr, i, n, i);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << '\n';
    }
}