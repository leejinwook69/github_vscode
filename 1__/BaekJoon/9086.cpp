#include <iostream>

using namespace std;

int main(void)
{
    string str;
    for (int i = 0; i < 100; i++)
    {
        getline(cin, str);
        cout << str << '\n';
    }
}