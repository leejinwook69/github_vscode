#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int cardNum;
    unordered_map<int, int> card;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> cardNum;
        card[cardNum] += 1;
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> cardNum;
        auto iter = card.find(cardNum);

        if (iter != card.end())
            cout << iter->second << ' ';
        else
            cout << 0 << ' ';
    }
}
//     for (int i = 0; i < m; i++)
//     {
//         cin >> cardNum;
//         cout << card[cardNum] << ' ';
//     }
// }