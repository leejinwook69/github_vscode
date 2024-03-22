#include <iostream>
#include <unordered_map>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    unordered_map<string, string> memo;

    cin >> n >> m;
    while (n--)
    {
        string site, password;
        cin >> site >> password;
        memo.emplace(site, password);
    }

    while(m--)
    {
        string search;
        cin >> search;
        cout << memo.at(search) << '\n';
    }
}