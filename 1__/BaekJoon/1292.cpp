#include <iostream>

using namespace std;

int main(void)
{
    int a = 0, b = 0, pivot = 1, sumA = 0, sumB = 0;
    int arr[2000] = {
        0,
    };

    cin >> a >> b;

    // init
    for (int i = 0; pivot <= b; i++)
    {
        int cur = pivot;
        pivot = (i * (i + 1)) / 2;
        for (int j = cur; j < pivot; j++)
        {
            arr[j] = i;
            // cout << arr[j] << " ";
        }
    }

    // sum(A-1)
    for (int i = 0; i < a - 1; i++)
    {
        sumA += arr[i];
    }
    // cout << "\nsumA : " << sumA << "\n";
    //  sumB
    for (int i = 0; i < b; i++)
    {
        sumB += arr[i];
    }
    // cout << "sumB : " << sumB << "\n";

    cout << sumB - sumA << "\n";
}