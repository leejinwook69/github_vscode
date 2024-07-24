#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b)
{
    return a > b;
}
int main(void)
{
    int arr[10] = {
        0,
    },
        i = 0;
    char c;
    c = getchar();
    while (c != '\n')
    {
        arr[i++] = atoi(&c);
        c = getchar();
    }
    sort(arr, arr + i, desc);
    for (int j = 0; j < i; j++)
    {
        cout << arr[j];
    }
    cout << '\n';
}