#include <stdio.h>
#include <string.h>

int arr[10][10];

void parr(void)
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int min(int a, int b, int c)
{
    int n;
    n = a > b ? b : a;
    return n > c ? c : n;
}

int main(void)
{
    char s[100];
    char t[100];
    int sl, tl;

    scanf("%s", s);
    scanf("%s", t);

    sl = strlen(s);
    tl = strlen(t);

    for(int i = 0; i <= sl; i++)
    {
        arr[i][0] = i;
    }
    for(int i = 0; i <= tl; i++)
    {
        arr[0][i] = i;
    }

    for(int i = 1; i <= sl; i++)
    {

        for(int j = 1; j <= tl; j++)
        {
            int alpha = 0;

            if(s[i-1] == t[j-1])
            {
                alpha = 0;    
            } else {
                alpha = 1;
            }
            arr[i][j] = min(arr[i-1][j]+1, arr[i][j-1]+1, arr[i-1][j-1]+alpha);
        }
    }
    parr();
}