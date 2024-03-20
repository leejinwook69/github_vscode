#include <iostream>

using namespace std;

int main(void)
{
    int n = 0;
    int num = 1000001;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int current = i;
        int total = current;
        while (current != 0)
        {
            total += current % 10;
            current /= 10;
        }
        if (total == n && num > total)
            num = i;
    }
    if (num < n)
        cout << num << '\n';
    else
    {
        cout << 0 << '\n';
    }
}