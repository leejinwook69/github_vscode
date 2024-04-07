#include <iostream>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] <= 'Z')
        {
            str[i] += 'z' - 'Z';
        }
        else
        {
            str[i] -= 'z' - 'Z';
        }
    }

    cout << str << '\n';
}