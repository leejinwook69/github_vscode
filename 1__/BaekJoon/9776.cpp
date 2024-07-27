#include <iostream>
#define PI 3.14159
using namespace std;

int main(void)
{
    int n;
    double r, h;
    double ans = -1;
    char figure;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double volume = 0;

        cin >> figure;
        if (figure == 'C')
        {
            cin >> r >> h;
            volume = PI * r * r * h / 3;
            //cout << "C : " << volume << '\n';
        }
        else if (figure == 'L')
        {
            cin >> r >> h;
            volume = PI * r * r * h;
            //cout << "L : " << volume << '\n';
        }
        else if (figure == 'S')
        {
            cin >> r;
            volume = PI * r * r * r * 4 / 3;
            //cout << "S : " << volume << '\n';
        }
        else
        {
            cout << "error" << '\n';
            exit(0);
        }

        if (volume > ans)
            ans = volume;
    }

    cout << ans << '\n';
}