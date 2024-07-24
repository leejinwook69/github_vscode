#include <iostream>

// n = 버스 대수 X = 도착하기까지 제한시간 s = 출발까지 걸리는시간

using namespace std;
int main(void)
{
    int n;
    int x;
    int curs = -1;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        int s, t;
        cin >> s >> t;

        if (s + t <= x)
        {
            if (s > curs)
            {
                curs = s;
            }
        }
    }

    cout << curs << '\n';
}