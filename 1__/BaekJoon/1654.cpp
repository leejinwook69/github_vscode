#include <iostream>

using namespace std;

unsigned int arr[10000];
unsigned int k, n;
unsigned int big, small;
unsigned int result;

int main(void)
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> k >> n;

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];

        if(arr[i] > big)
            big = arr[i];
    }

    small = 1;

    while(small <= big)
    {
        unsigned int pivot = (small + big) / 2;
        int count = 0;

        for (int i = 0; i < k; i++)
        {
            count += arr[i] / pivot;
        }

        if(count >= n)
        {
            small = pivot + 1;
            result = pivot;
        }else
        {
            big = pivot - 1;
        }
        
    }

    cout << result << '\n';
    return 0;
}
