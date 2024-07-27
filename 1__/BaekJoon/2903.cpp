#include <iostream>
using namespace std;

int main(void)
{
    int n =2;
    int num;
    cin >>num;
    for(int i = 0; i < num; i++)
    {
        n*=2;
        n-=1;
    }
    cout << n*n << '\n';
}