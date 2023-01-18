#include <iostream>

using namespace std;

int main(void)
{
    int arr[9][9];
    int maxnum = 0;
    int maxi = 0;
    int maxj = 0;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin>>arr[i][j];
        }
    }    
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(maxnum < arr[i][j])
            {
                maxnum = arr[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }

    cout << maxnum << endl << maxi+1 << " " << maxj+1 <<endl;

}