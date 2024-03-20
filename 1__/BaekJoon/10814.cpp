#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    int n;
    multimap<int, string> account;
    multimap<int, string>::iterator iter;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int age;
        string name;
        cin >> age >> name;

        account.insert(pair<int, string>(age, name));
    }

    for (iter = account.begin(); iter != account.end(); iter++)
    {
        cout << iter->first << ' ' << iter->second << '\n';
    }
}