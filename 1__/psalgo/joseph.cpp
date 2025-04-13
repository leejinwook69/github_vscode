#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    vector<int> vec;
    int c, n, k = 0;
    int ans = -1;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int p = 1;

        cin >> n >> k;

        for (int j = 0; j < n; j++)
        {
            vec.push_back(p++);
            cout << vec[j] << '\n';
        }
        p = 0;
            int die = 0;
        for (int j = 0; j < n - 2; j++)
        {
            while (p > vec.size())
            {
                cout << "vecsize : " << vec.size() << "p : " << p << '\n';

                p -= vec.size();
            }

            cout << "del : " << vec[p] << '\n';
            for (auto x : vec)
            {
                cout << x << " ";
            }
            vec.erase(vec.begin() + p - die);
            die++;
            p += k;
            cout << "p : " << p << '\n';
        }
        for (auto x : vec)
        {
            cout << x << " ";
        }
    }
}