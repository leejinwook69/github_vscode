#include <iostream>
using namespace std;

bool S(int num)
{
    for(int i = 2; i <= num/2; i++)
    {
        if( (num % i) == 0)
            return false;
    }
    return true;
}


int main(void)
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        
        for(int j = 0; j <= number/2; j++)
        {
            int a = number/2 - j;
            int b = number/2 + j;
            
            if(S(a) && S(b))
            {
                cout << a << " " << b <<endl;
                break;
            }
        }
    }
    
}