#include <iostream>
#define r 31
#define M 1234567891
using namespace std;

int main(void)
{
    string input;
    int l;
    long long total = 0, k = 1;
    cin >> l;
    cin >> input;

    for (int i = 0; i < l; i++)
    {
        int num = input[i] - 96;
        total += (num * k) % M;
        total %= M;
        k = (k * r) % M;
    }

    cout << total % M << '\n';
}