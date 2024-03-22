#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    string a, b, result;
    int lcs[41][41];
    int li = 0, lj = 0;
    for (int i = 0; i < 41; i++)
    {
        for (int j = 0; j < 41; j++)
            lcs[i][j] = 0;
    }
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                lcs[i + 1][j + 1] = lcs[i][j] + 1;
            }
            else
            {
                if (lcs[i][j + 1] > lcs[i + 1][j])
                    lcs[i + 1][j + 1] = lcs[i][j + 1];
                else
                {
                    lcs[i + 1][j + 1] = lcs[i + 1][j];
                }
            }
        }
    }
    li = a.size();
    lj = b.size();

    while (lcs[li][lj] != 0)
    {

        if ((lcs[li][lj - 1] == lcs[li][lj]))
        {
            lj--;
        }
        else if ((lcs[li - 1][lj] == lcs[li][lj]))
        {
            li--;
        }
        else
        {

            li--;
            lj--;
            result.push_back(a[li]);
        }
    }
    reverse(result.begin(), result.end());
    cout << result << '\n';

    // for (int i = 0; i < a.size(); i++)
    // {
    //     for (int j = 0; j < b.size(); j++)
    //         cout << lcs[i][j] << ' ';
    //     cout << endl;
    // }
}