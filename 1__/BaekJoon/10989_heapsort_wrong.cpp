#include <iostream>

using namespace std;

void shift(int *arr, int parentIdx, int size)
{
    int leftIdx = parentIdx * 2 + 1;
    int rightIdx = leftIdx + 1;
    int bigIdx = -1;
    int temp;

    if (leftIdx < size)
        bigIdx = leftIdx;

    if (rightIdx < size && arr[rightIdx] > arr[leftIdx])
        bigIdx = rightIdx;

    if (bigIdx != -1 && arr[bigIdx] > arr[parentIdx])
    {
        temp = arr[bigIdx];
        arr[bigIdx] = arr[parentIdx];
        arr[parentIdx] = temp;

        shift(arr, bigIdx, size);
    }
}

void heapSort(int *arr, int size)
{
    int i;
    int temp;

    //heapify
    for (i = (size / 2) - 1; i >= 0; i--)
    {
        shift(arr, i, size);
    }

    for (i = size-1; i > 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        shift(arr, 0, i);
    }

}


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    heapSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }
}


