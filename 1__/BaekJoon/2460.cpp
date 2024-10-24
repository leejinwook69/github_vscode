#include <iostream>

using namespace std;

int main(void)
{
    int cur = 0, max = 0;

    for (int i = 0; i < 10; i++)
    {
        int out = 0, in = 0;
        cin >> out >> in;

        cur -= out;
        cur += in;

        if (cur > max)
        {
            max = cur;
        }
    }
    cout << max << endl;
}