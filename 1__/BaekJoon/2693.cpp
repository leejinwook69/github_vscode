#include <iostream>

using namespace std;

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(void)
{
    int a[10] = {
        0,
    },
        n = 3;
    int t = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> a[j];
        }
        qsort(a, 10, sizeof(*a), cmp);

        cout << a[7] << "\n";
    }
}