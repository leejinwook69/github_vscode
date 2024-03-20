#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    long long int number;

    unordered_map<long long int, int> pool;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        pool[number]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> number;
        auto iter = pool.find(number);
        if (iter != pool.end())
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
}