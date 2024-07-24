#include <iostream>

using namespace std;

int main(void)
{
    char arr[5][15] = {
        '\0',
    };

    for (int i = 0; i < 5; i++)
    {
        int j = 0;
        char c = getchar();
        while (c != '\n')
        {
            arr[i][j++] = c;
            c = getchar();
        }
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j][i] != '\0')
                cout << arr[j][i];
        }
    }
}