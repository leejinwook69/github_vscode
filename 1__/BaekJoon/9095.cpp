#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n, num, count;

    cin >> n;
    while (n--)
    {
        count = 0;

        cin >> num;
        for (int i = 0; i * 3 <= num; i++)
        {
            for (int j = 0; j * 2 <= num; j++)
            {
                for (int k = 0; k <= num; k++)
                {
                    if (i * 3 + j * 2 + k == num)
                    {
                        count += (int)round(tgamma(i + j + k + 1) / (tgamma(i + 1) * tgamma(j + 1) * tgamma(k + 1)));
                    }
                }
            }
        }

        cout << count << '\n';
    }
}