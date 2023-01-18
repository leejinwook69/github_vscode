#include <iostream>
using namespace std;

int main(void)
{
    int arr[30];
    
    for(int i = 0; i<30; i++)
        arr[i] = i+1;
    
    for(int i = 0; i<28; i++)
    {
        int v;
        cin>>v;
        arr[v-1] = 0;
    }

    for(int i = 0; i<30; i++)
    {
        if(arr[i] == 0)
            continue;
        cout << arr[i] <<endl;
    }
}
