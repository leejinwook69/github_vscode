#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{


    int a, b, c = 0;

    cin >> a >> b >> c;

    if (a > b)
        swap(&a, &b);
    if (b > c)
        swap(&b, &c);

    while (a != 0 && b != 0 && c != 0)
    {
        if (a * a + b * b == c * c)
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
        
        cin >> a >> b >> c;

        if (a > b)
            swap(&a, &b);
        if (b > c)
            swap(&b, &c);
    }
}