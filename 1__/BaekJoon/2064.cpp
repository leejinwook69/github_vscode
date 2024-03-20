#include <iostream>
#include <deque>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    deque<int> cards;
    
    for (int i = 0; i < n; i++)
    {
        cards.push_back(i + 1);
    }

    for (int i = 0; i < n - 1; i++)
    {
        cards.pop_front();
        cards.push_back(cards.front());
        cards.pop_front();
    }

    cout << cards.front() << '\n';
}