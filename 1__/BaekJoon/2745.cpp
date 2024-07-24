#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    string n;
    int b, sum = 0;

    cin >> n >> b;
    for (int i = 0; i < n.size(); i++)
    {
        // cout << "i : " << i << " n[i] : " << n[i] << " (int)pow(b, n.size() - i - 1) : " << (int)pow(b, n.size() - i - 1) << '\n';
        if (n[i] >= '0' && n[i] <= '9')
            sum += (n[i] - '0') * (int)pow(b, n.size() - i - 1);
        else if (n[i] >= 'A' && n[i] <= 'Z')
            sum += (n[i] - 'A' + 10) * (int)pow(b, n.size() - i - 1);
        else
        {
            cout << "error";
        }
    }

    cout << sum << '\n';
}