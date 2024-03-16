#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a, b, c;
    int result = -1;

    cin >> n >> m;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 2; i++)
    {
        a = arr[i];

        for (int j = i + 1; j < n - 1; j++)
        {
            b = arr[j];

            for (int k = j + 1; k < n; k++)
            {
                c = arr[k];

                if (a + b + c <= m && a + b + c > result)
                    result = a + b + c;
            }
        }
    }

    cout << result << "\n";
    delete[] arr;
    
    return 0;
}