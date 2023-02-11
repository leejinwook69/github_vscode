#include <iostream>
using namespace std;

// 첫 줄 수의 개수, 둘째 줄부터 수. 1000보다 작거나 같음, 중복 x

int main(void)
{
    int n, temp, arr[1000];
    
    cin>>n;

    for(int i = 0; i < n; i++) 
        cin>>arr[i];

    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j < n-1-i; j++ )
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) 
        cout<<arr[i]<<endl;

}
