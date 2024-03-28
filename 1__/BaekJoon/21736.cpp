#include <iostream>

using namespace std;

char arr[600][600];
int count, maxX, maxY;

void check(char arr[][600], int curX, int curY)
{
    if (arr[curX][curY] == 'P')
    {
        count++;
    }
    arr[curX][curY] = 'V';

    if (curX > 0)
    {
        if (arr[curX - 1][curY] == 'O' || arr[curX - 1][curY] == 'P')
        {
            check(arr, curX - 1, curY);
        }
    }

    if (curX < maxX)
    {
        if (arr[curX + 1][curY] == 'O' || arr[curX + 1][curY] == 'P')
        {
            check(arr, curX + 1, curY);
        }
    }
    if (curY > 0)
    {
        if (arr[curX][curY - 1] == 'O' || arr[curX][curY - 1] == 'P')
        {
            check(arr, curX, curY - 1);
        }
    }

    if (curY < maxY)
    {
        if (arr[curX][curY + 1] == 'O' || arr[curX][curY + 1] == 'P')
        {
            check(arr, curX, curY + 1);
        }
    }
}

int main(void)
{
    int n, m, curX, curY;
    cin >> n >> m;
    maxX = n;
    maxY = m;
    for (int i = 0; i < maxX; i++)
    {
        for (int j = 0; j < maxY; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'I')
            {
                curX = i;
                curY = j;
            }
        }
    }
    check(arr, curX, curY);
    // for (int i = 0; i < maxX; i++)
    // {
    //     for (int j = 0; j < maxY; j++)
    //     {
    //         cout << arr[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    if (count == 0)
    {
        cout << "TT" << '\n';
    }
    else
    {

        cout << count << '\n';
    }
}