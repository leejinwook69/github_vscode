#include <iostream>

using namespace std;

int main(void)
{
    int arr[100][100] = {0, };
    int n = 0;
    int comparea = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int l, h;
        cin >> l >> h;
        for(int j = h; j < h+10; j++)
        {
            for(int k = l; k < l+10; k++)
            {
                arr[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(arr[i][j] == 1)
                comparea++;
        }
    }

    cout << comparea << endl;
}