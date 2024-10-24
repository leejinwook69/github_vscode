#include <iostream>

using namespace std;

int main(void)
{
    int n = 0, a = 0, b = 1, ans = 0;
    cin >> n;

    if(n == 0)
    {
        cout << 0 << endl;
    }else if(n == 1)
    {
        cout << 1 << endl;
    }else
    {
        for (int i = 2; i <= n; i++)
        {
            ans = a+b;
            a = b;
            b = ans;
        }
        cout << ans << endl;
    }
}