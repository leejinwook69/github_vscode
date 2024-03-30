#include <iostream>

using namespace std;

char arr[100][100];
bool chk[100][100];
int count;

void check(char arr[][100], int startI, int startJ, int max)
{
    char pivot = arr[startI][startJ];
    chk[startI][startJ] = true;
    if (startI > 0)
    {
        if (!chk[startI - 1][startJ] && arr[startI - 1][startJ] == pivot)
        {
            check(arr, startI - 1, startJ, max);
        }
    }
    if (startI < max - 1)
    {
        if (!chk[startI + 1][startJ] && arr[startI + 1][startJ] == pivot)
        {
            check(arr, startI + 1, startJ, max);
        }
    }
    if (startJ > 0)
    {
        if (!chk[startI][startJ - 1] && arr[startI][startJ - 1] == pivot)
        {
            check(arr, startI, startJ - 1, max);
        }
    }
    if (startJ < max - 1)
    {
        if (!chk[startI][startJ + 1] && arr[startI][startJ + 1] == pivot)
        {
            check(arr, startI, startJ + 1, max);
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
        for (int j = 0; j < n; j++)
        {
            if (!chk[i][j])
            {
                check(arr, i, j, n);
                count++;
            }
        }
    }
    cout << count << ' ';

    count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            chk[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 'R')
            {
                arr[i][j] = 'G';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!chk[i][j])
            {
                check(arr, i, j, n);
                count++;
            }
        }
    }
    cout << count << '\n';
}