#include <iostream>

using namespace std;

struct pos
{
    int x;
    int y;
};

struct vec
{
    int x;
    int y;
};
int main(void)
{
    pos a, b, c;
    vec v1, v2;
    int d;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    v1.x = b.x - a.x;
    v1.y = b.y - a.y;
    v2.x = c.x - b.x;
    v2.y = c.y - b.y;

    d = v1.x * v2.y - v1.y * v2.x;

    if (d == 0)
    {
        cout << 0 << '\n';
    }
    else if (d > 0)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
}