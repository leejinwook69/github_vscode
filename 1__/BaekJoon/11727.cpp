#include <iostream>
using namespace std;

const int MOD = 10007;
long long factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return ((num % MOD) * (factorial(num - 1) % MOD)) % MOD;
    }
}
long long pow2(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return (2 * (pow2(num - 1) % MOD)) % MOD;
    }
}
//모듈러 역원
int modInverse(int a, int m)
{
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {
        int q = a / m;
        int t = m;

        m = a % m, a = t;
        t = y;

        y = x - q * y;
        x = t;
    }

    if (x < 0)
        x += m0;

    return x;
}
int calculateValue(int n, int i)
{
    long long numerator = factorial(n - i) % MOD;
    long long denominator1 = factorial(n - 2 * i) % MOD;
    long long denominator2 = factorial(i) % MOD;
    long long power = pow2(i);

    long long result = (numerator * modInverse(denominator1, MOD)) % MOD;
    result = (result * modInverse(denominator2, MOD)) % MOD;
    result = (result * power) % MOD;

    return static_cast<int>(result);
}

int main()
{
    int n, result = 0;
    cin >> n;

    for (int i = 0; i * 2 <= n; i++)
    {
        result += calculateValue(n, i);
    }

    cout << result << '\n';
    return 0;
}
