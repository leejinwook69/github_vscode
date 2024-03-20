#include <iostream>
using namespace std;

int main(void)
{
    int n, count = 0;

    cin >> n;
    while (n > 0)
    {
        int pivot = n;
        while (pivot % 5 == 0)
        {
            pivot /= 5;
            count++;
        }
        n--;
    }

    cout << count << '\n';
}