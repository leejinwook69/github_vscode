#include <iostream>

using namespace std;

struct Pos
{
    int x, y;
};

void swapPos(Pos *a, Pos *b)
{
    Pos temp;

    temp.x = (*a).x;
    temp.y = (*a).y;

    (*a).x = (*b).x;
    (*a).y = (*b).y;

    (*b).x = temp.x;
    (*b).y = temp.y;
}

void posShift(Pos *arr, int parentIdx, int size)
{
    int leftIdx = parentIdx * 2 + 1;
    int rightIdx = leftIdx + 1;
    int bigIdx = -1;

    if (leftIdx < size)
        bigIdx = leftIdx;

    if (rightIdx < size && arr[rightIdx].x > arr[leftIdx].x)
        bigIdx = rightIdx;

    if (rightIdx < size && arr[rightIdx].x == arr[leftIdx].x)
        if (rightIdx < size && arr[rightIdx].y > arr[leftIdx].y)
            bigIdx = rightIdx;

    if (bigIdx != -1 && arr[bigIdx].x > arr[parentIdx].x)
    {
        swapPos(&arr[bigIdx], &arr[parentIdx]);

        posShift(arr, bigIdx, size);
    }

    if (bigIdx != -1 && arr[bigIdx].x == arr[parentIdx].x)
    {
        if (bigIdx != -1 && arr[bigIdx].y > arr[parentIdx].y)
        {
            swapPos(&arr[bigIdx], &arr[parentIdx]);
            posShift(arr, bigIdx, size);
        }
    }
}

void heapPosSort(Pos *arr, int size)
{
    int i;

    // heapify
    for (i = (size / 2) - 1; i >= 0; i--)
    {
        posShift(arr, i, size);
    }

    for (i = size - 1; i > 0; i--)
    {
        swapPos(&arr[0], &arr[i]);
        posShift(arr, 0, i);
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    Pos *arr = new Pos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].y;
        cin >> arr[i].x;
    }

    heapPosSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].y << ' ' << arr[i].x << '\n';
    }
}