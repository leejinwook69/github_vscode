#include <iostream>

using namespace std;

int main(void)
{
    int i;
    int q = 0, d = 0, n = 0, p = 0;
    cin >> i;

    while (i--)
    {
        int q = 0, d = 0, n = 0, p = 0;

        int c;
        cin >> c;
        while (c >= 25)
        {
            c -= 25;
            q++;
        }
        while (c >= 10)
        {
            c -= 10;
            d++;
        }
        while (c >= 5)
        {
            c -= 5;
            n++;
        }
        while (c >= 1)
        {
            c -= 1;
            p++;
        }

        cout << q << " " << d << " " << n << " " << p << '\n';
    }
}