#include <iostream>
#include <queue>
#include <cmath>

using namespace std;
struct cmp
{
    bool operator()(int n1, int n2)
    {
        if (abs(n1) > abs(n2))
        {
            return true;
        }
        else if (abs(n1) == abs(n2))
        {
            if (n1 > n2)
                return true;
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
};
int main(void)
{
    int n;
    priority_queue<int, vector<int>, cmp> abH;
    cin >> n;

    while (n--)
    {
        int num;

        cin >> num;
        if (num == 0)
        {
            if (abH.empty())
            {
                cout << "0" << '\n';
            }
            else
            {
                cout << abH.top() << '\n';
                abH.pop();
            }
        }
        else
        {
            abH.push(num);
        }
    }
}