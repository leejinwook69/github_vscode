#include <iostream>

using namespace std;

int main(void)
{
    string str, rts;
    cin >> str;

    for (int i = 1; i <= str.size(); i++)
    {
        rts.push_back(str[str.size() - i]);
    }

    if (str == rts)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 0 << '\n';
    }
}