#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    string input;
    stack<char> stack;
    getline(cin, input, '.');

    while (input.size() != 1)
    {
        int n;

        n = input.size();

        for (int i = 0; i < n; i++)
        {
            if (input[i] == '(')
            {
                stack.push('(');
            }
            else if (input[i] == ')')
            {
                if (stack.size() != 0 && stack.top() == '(')
                    stack.pop();
                else
                {
                    stack.push('X');
                    break;
                }
            }

            if (input[i] == '[')
            {
                stack.push('[');
            }
            else if (input[i] == ']')
            {
                if (stack.size() != 0 && stack.top() == '[')
                    stack.pop();
                else
                {
                    stack.push('X');
                    break;
                }
            }
        }

        if (stack.empty())
            cout << "yes" << '\n';
        else
        {
            cout << "no" << '\n';
            while (!stack.empty())
                stack.pop();
        }
        getline(cin, input, '.');
    }
}