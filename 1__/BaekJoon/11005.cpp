#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

int main(void)
{
    int n, b, cur;
    deque<char> ans;

    cin >> n >> b;
    cur = n % b;
    while (n / b != 0)
    {
        n /= b;
        if (cur < 10)
            ans.push_back(cur + '0');
        else if (cur >= 10)
            ans.push_back(cur - 10 + 'A');
        cur = n % b;
    }
    if (cur < 10)
        ans.push_back(cur + '0');
    else if (cur >= 10)
        ans.push_back(cur - 10 + 'A');

    while (!ans.empty())
    {
        cout << ans.back();
        ans.pop_back();
    }
}