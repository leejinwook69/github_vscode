#include <stdio.h>

char arr[80];

int main(void)
{
    int num;
    char c;
    int score = 0;
    int continus = 0;
    int buffer = 0;
    scanf("%d", &num);
    getchar();
    for(int i = 0; i < num; i++)
    {
        while(c = getchar())
        {
            if(c == 'O')
            {
                continus++;
                buffer += continus;
            } else if(c == 'X')
            {
                score += buffer;
                buffer = 0;
                continus = 0;
            } else if(c == '\n')
            {
                score += buffer;
                buffer = 0;
                continus = 0;
                break;
            }
        }
        printf("%d\n", score);
        score = 0;

    }

}