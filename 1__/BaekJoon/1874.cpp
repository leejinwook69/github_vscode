#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    int n, input;
    int current = 1;
    stack<int> stack;
    vector<char> result;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> input;

        if (stack.empty())
        {
            stack.push(current++);
            result.push_back('+');
        }
        if (input > stack.top())
        {
            while (stack.top() != input)
            {
                stack.push(current++);
                result.push_back('+');
            }
        }
        else if (input < stack.top())
        {

            cout << "NO" << '\n';
            return 0;
        }
        if (input == stack.top())
        {
            stack.pop();
            result.push_back('-');
        }
    }

    for (auto iter : result)
    {
        cout << iter << '\n';
    }
}