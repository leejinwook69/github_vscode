#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << '\n';
        }
        if (i >= n)
        {
            for (int j = 0; j < i - n; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < 2 * (2 * n - i) - 1; j++)
            {
                cout << "*";
            }
            cout << '\n';
        }
    }
}