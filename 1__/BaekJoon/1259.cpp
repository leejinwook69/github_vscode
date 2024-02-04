#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    string number;
    int k;

    while (1)
    {
        k = 0;
        cin >> number;

        if (number == "0")
            break;

        for (int i = 0; i < number.length(); i++)
        {
            // cout << "i : " << i << endl;
            // cout << "number.length() : " << number.length() << endl;
            // cout << "number[i] : " << number[i] << endl;
            // cout << "number[number.length() - i] : " << number[number.length() - (i+1)] << endl;

            if (number[i] == number[number.length() - (i + 1)])
                k++;

            // cout << "k : " << k << endl;
        }

        if (k == number.length())
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}