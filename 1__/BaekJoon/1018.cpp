#include <iostream>
using namespace std;

char arr[50][50];

int numfix(int rowpivot, int colpivot)
{
    int prew, preb = 0;
    int row, col = 0;
    row = 0;
    for (int i = rowpivot; i < rowpivot + 8; i++)
    {
        for (int j = colpivot; j < colpivot + 8; j++)
        {
            if ((row % 2) == (col % 2))
            {
                if (arr[i][j] != 'W')
                {
                    prew++;
                    cout << i << j << "rc" << row << col;
                }
            }
            else
            {
                if (arr[i][j] != 'B')
                {
                    prew++;
                    cout << i << " *1* " << j;
                }
            }
            col++;
        }
        col = 0;
        row++;
    }

    preb = 64 - prew;

    if (prew >= preb)
        prew = preb;

    return prew;
}

int main(void)
{
    int n, m = 0;

    // n = row, m = column
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int movrow = n - 8;
    int movcol = m - 8;

    int temp, num = 9999;
    for (int i = 0; i <= movrow; i++)
    {
        for (int j = 0; j <= movcol; j++)
        {
            num = numfix(i, j);
            if (temp >= num)
                temp = num;
        }
    }

    cout << numfix(0, 0);
}