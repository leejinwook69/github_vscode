#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(void)
{
    int n;
    map<string, vector<string>> map;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int testCase, ans = 1;
        cin >> testCase;
        for (int j = 0; j < testCase; j++)
        {
            string cloName, cloType;
            cin >> cloName >> cloType;
            map[cloType].emplace_back(cloName);
        }

        for (auto m : map)
        {
            ans *= m.second.size() + 1;
        }
        cout << ans - 1 << '\n';
        // for (auto iter : map)
        // {
        //     cout << iter.first << '/';
        //     for (auto jter : iter.second)
        //     {
        //         cout << jter << ' ';
        //     }
        // }
        // cout << "\nmap size : " << map.size() << " first map->vector size : " << map.begin()->second.size() << '\n';
        map.clear();
    }
}