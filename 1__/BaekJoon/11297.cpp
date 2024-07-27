#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int d, m, y;
    string str;
    while (1)
    {
        int ms;
        cin >> d >> m >> y;
        ms = d + m + y;
        if (ms == 0)
        {
            break;
        }
        else
        {
            ms %= 25;
            ms++;
        }
        cin.ignore();
        getline(cin, str);

        for (auto a : str)
        {
            if (a >= 'a' && a <= 'z')
            {
                a -= ms;
                if (a < 'a')
                    a += 26;

                cout << a;
            }
            else
            {
                cout << a;
            }
        }
        cout << endl;
    }
}