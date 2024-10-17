#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t = 0, n = 0;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        v.clear();
        while (n != 1)
        {
            v.emplace_back(n % 2);
            n /= 2;
        }
        v.emplace_back(1);
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] == 1)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
