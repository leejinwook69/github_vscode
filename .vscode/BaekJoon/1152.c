#include <stdio.h>

int main(void)
{
    char c;
    int wstart = 1;
    int temp = 0;
    int n = 0;
    while((c = getchar()) != '\n')
    {
        if(c == ' ')
        {
            wstart = 0;
        }else
        {
            wstart = 1;
        }
        if(wstart == 1 && temp == 0)
            n++;

        temp = wstart;
    }
    printf("%d", n);
    return 0;
}