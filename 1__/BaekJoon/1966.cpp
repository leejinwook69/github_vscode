#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int t, n, m;
    queue<pair<int, int>> que;
    priority_queue<int> pque;

    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            que.emplace(i, num);
            pque.push(num);
        }

        while (!que.empty())
        {
            if (que.front().second == pque.top())
            {
                count++;
                if (que.front().first == m)
                {
                    cout << count << '\n';
                }
                que.pop();
                pque.pop();
            }
            else
            {
                que.emplace(que.front().first, que.front().second);
                que.pop();
            }
        }
    }
}