#include <iostream>
#include <map>
#include <set>
using namespace std;
int path[101][101];
// void calc(map<int, set<int>> map, int current, int searching, int depth)
// {
//     for (auto iter : map[searching])
//     {
//         if (current != iter && (path[current][iter] == 0 || path[current][iter] > depth))
//         {
//             path[current][iter] = depth;
//             path[iter][current] = depth;
//             calc(map, current, iter, depth + 1);
//         }
//     }
// }

void calc2(map<int, set<int>> map, int current, int searching, int depth)
{
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, temp = 1;
    map<int, set<int>> map;
    cin >> n >> m;
    int ans[n + 1] = {
        0,
    };
    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        map[from].insert(to);
        map[to].insert(from);
    }
    for (auto iter : map)
    {
        cout << iter.first << '/';
        for (auto jter : iter.second)
        {
            cout << jter << ' ';
        }
        cout << '\n';
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; i++)

            calc(map, i, i, 1);
    }

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            cout << path[i][j] << ' ';
            ans[i] += path[i][j];
        }
        if (ans[temp] > ans[i])
        {
            temp = i;
        }
        cout << "ans [" << i << "] : " << ans[i] << '\n';
    }
    cout << temp << '\n';
}