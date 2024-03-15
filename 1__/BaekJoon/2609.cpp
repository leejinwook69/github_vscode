#include <iostream>

using namespace std;

int GCF(int a, int b)
{
    int big = a, small = b;
    int r = 1;

    if (a < b)
    {
        big = b;
        small = a;
    }

    while (r > 0)
    {
        r = big % small;
        big = small;
        small = r;
    }

    return big;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, gcf;

    cin >> a >> b;

    gcf = GCF(a, b);
    cout << gcf << '\n'
         << a * b / gcf << '\n';
}