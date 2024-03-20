#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    vector<vector<int>> student(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> student[i][0] >> student[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        int place = 0;
        for (int j = 0; j < n; j++)
        {
            if (student[i][0] < student[j][0] && student[i][1] < student[j][1])
                place++;
        }
        arr[i] = place + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}