#include <iostream>

using namespace std;

struct pos
{
    int x;
    int y;
};
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    pos cur, max;
    int ans = 10000;
    cin >> cur.x >> cur.y >> max.x >> max.y;

    if (cur.x < ans)
        ans = cur.x;
    if (cur.y < ans)
        ans = cur.y;
    if (max.x - cur.x < ans)
        ans = max.x - cur.x;
    if (max.y - cur.y < ans)
        ans = max.y - cur.y;

    cout << ans << '\n';
}