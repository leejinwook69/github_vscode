#include <iostream>
using namespace std;
int main(void)
{
    int n, m, inv, curinv;
    int t = 0;
    int temp = -1;
    int result = 0;
    cin >> n >> m >> inv;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int k = 0; k <= 256; k++)
    {
        curinv = inv;
        t = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] > k)
                {
                    t += (arr[i][j] - k) * 2;
                    curinv += (arr[i][j] - k);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] < k)
                {
                    t += (k - arr[i][j]);
                    curinv -= (k - arr[i][j]);
                }
            }
        }

        if (temp == -1 && curinv >= 0)
        {
            temp = t;
            result = k;
        }
        if (curinv >= 0 && temp >= t)
        {
            temp = t;
            result = k;
        }
    }

    cout << temp << ' ' << result << '\n';
}