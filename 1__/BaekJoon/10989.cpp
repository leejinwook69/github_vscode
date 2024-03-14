#include <iostream>

using namespace std;

int arr[10001];

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        for (int j = arr[i]; j > 0; j--)
        {
            cout << i << '\n';
        }
    }
}