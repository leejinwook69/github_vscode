#include <iostream>

using namespace std;

int factorial(int num)
{
    int result = num;
    if (num > 1)
        result = result * factorial(num - 1);

    if (num == 0)
        return 1;

    return result;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    cout << factorial(n) / (factorial(n - k) * factorial(k)) << '\n';
}