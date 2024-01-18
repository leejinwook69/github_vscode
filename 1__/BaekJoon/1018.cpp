#include <iostream>
using namespace std;

char arr[50][50];

int numfix(int rowpivot, int colpivot)
{
    int prew, preb = 0;
    int row, col = 0;

    // 초기화 후 첫 칸이 W인 체스판을 기준으로 몇 개의 칸을 수정해야 하는지 계산한다.
    // 인자인 row와 col의 pivot값은 n by m 배열에서 어느 위치의 8by8 배열인지를 나타내는 값들이며 (= 8by8 배열 시작지점의 원소 위치)
    // W를 기준으로 계산한 값을 이용해 B를 기준으로 계산할 경우도 구해보며 그 중 작은 값을 선택해 반환함
    row = 0;
    prew = 0;
    preb = 0;
    for (int i = rowpivot; i < rowpivot + 8; i++)
    {
        for (int j = colpivot; j < colpivot + 8; j++)
        {
            if ((row % 2) == (col % 2))
            {
                if (arr[i][j] != 'W')
                {
                    prew++;
                }
            }
            else
            {
                if (arr[i][j] != 'B')
                {
                    prew++;
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

    // n by m 배열에서 각 row와 col에 8을 빼준 값만큼 row와 col을 탐색하며 계산한다.
    int movrow = n - 8;
    int movcol = m - 8;

    // 모든 가능한 배열들에서 계산한 값들 중 가장 작은 값을 temp로 두고 출력한다.
    int temp = 64;
    int num = 0;
    for (int i = 0; i <= movrow; i++)
    {
        for (int j = 0; j <= movcol; j++)
        {
            num = numfix(i, j);
            if (temp >= num)
                temp = num;
        }
    }

    cout << temp;
}