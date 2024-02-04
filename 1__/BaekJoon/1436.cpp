#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n = 0;
    int number = 1;
    string findhere;
    string findthis = "666";
    size_t found;
    cin >>
        n;

    for (int pivot = 0; pivot < n; )
    {
        findhere = to_string(number);
        found = findhere.find(findthis);
        
        if(found != string::npos)
        {
            pivot++;
        }

        number++;
    }

    cout << number-1 << endl;
}