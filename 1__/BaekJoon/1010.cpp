#include <iostream>

using namespace std;

int main(void)
{
    double n;
    cin >> n;
    while (n--)
    {
        double w, e, p = 1, ans = 1;
        cin >> w >> e;

        for (double i = e; i > e - w; i--)
        {
            ans *= i;
            ans /= p++;
        }
        cout << (int)ans << '\n';
    }
}