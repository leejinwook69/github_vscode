#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, number, total = 0;
    cin >> k;

    stack<int> st;

    for (int i = 0; i < k; i++)
    {
        cin >> number;
        if (number == 0)
        {
            st.pop();
            continue;
        }
        st.push(number);
    }
    for (int i = st.size(); i > 0; i--)
    {
        total += st.top();
        st.pop();
    }

    cout << total << '\n';
}