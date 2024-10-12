#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n = 0, k = 0;
    vector<int> v;
    v.reserve(1000);

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }

    if (v.size() < k)
    {
        cout << 0 << '\n';
    }
    else
    {
        cout << v.at(k - 1);
    }
}