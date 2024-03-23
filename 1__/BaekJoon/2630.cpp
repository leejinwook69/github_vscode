#include <iostream>

using namespace std;
int w, b;
int cut(int arr[][128], int lt, int rb)
{
    int size = rb * rb;
    int count;
    count = 0;
    for (int i = lt; i < rb; i++)
    {
        for (int j = lt; j < rb; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
                cout << "i : " << i << "j : "
                     << j << '\n';
            }
        }
    }
    if (count == size)
    {
        return 1;
    }
    else
    {
        return cut(arr, lt, rb / 2) + cut(arr, lt + rb / 2, rb / 2) + cut(&arr[rb / 2], lt, rb / 2) + cut(&arr[rb / 2], lt + rb / 2, rb / 2);
    }
}

int main(void)
{
    int n, lt, rb;
    int result = 0;
    cin >> n;
    int arr[n][128];

    lt = 0;
    rb = n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << cut(arr, lt, rb) << '\n';
    return 0;
}