#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    string ps;

    cin >> n;

    for (int loop = 0; loop < n; loop++)
    {
        cin >> ps;
        while (ps.find("()") != string::npos)
        {
            // cout << ps.find("()") << '\n';
            ps = ps.substr(0, ps.find("()")) + ps.substr(ps.find("()") + 2);
            // cout << ps << '\n';
        }
        if (ps == "")
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}