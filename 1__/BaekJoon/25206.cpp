#include <iostream>

using namespace std;

double trans(string gpa)
{
    if (gpa == "A+")
    {
        return 4.5;
    }
    else if (gpa == "A0")
    {
        return 4.0;
    }
    else if (gpa == "B+")
    {
        return 3.5;
    }
    else if (gpa == "B0")
    {
        return 3.0;
    }
    else if (gpa == "C+")
    {
        return 2.5;
    }
    else if (gpa == "C0")
    {
        return 2.0;
    }
    else if (gpa == "D+")
    {
        return 1.5;
    }
    else if (gpa == "D0")
    {
        return 1.0;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    double sum = 0, time = 0;
    double tsum = 0, gNum = 0;
    string name, gpa;
    for (int i = 0; i < 20; i++)
    {
        cin >> name >> time >> gpa;
        if (gpa != "P")
        {
            gNum = trans(gpa);
            tsum += time;
            sum += gNum * time;
        }
    }
    cout << sum / tsum << '\n';

    return 0;
}