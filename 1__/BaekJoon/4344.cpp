#include <iostream>
using namespace std;

int stdArr[10000];

int main(void)
{
    float c, stdNum, sum, avg;
    int pivot;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        sum = 0;
        avg = 0;
        pivot = 0;

        cin >> stdNum;

        for (int j = 0; j < stdNum; j++)
        {
            cin >> stdArr[j];
            sum += stdArr[j];
        }

        avg = sum / stdNum;

        for (int j = 0; j < stdNum; j++)
        {
            if (stdArr[j] > avg)
            {
                pivot++;
            }
        }

        avg = (pivot / stdNum) * 100;
        cout << avg << "%" << endl;
    }

    return 0;
}