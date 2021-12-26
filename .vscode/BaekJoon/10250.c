#include <stdio.h>

int h, w, n;
int t;
int main(void)
{
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        int y = 1;
        int x = 1;

        scanf("%d %d %d", &h, &w, &n);
        for(;y*h < n; y++);
        x = n-(y-1)*h;
        if(y >=10)
        {
            printf("%d%d\n", x, y);
        }else
        {
            printf("%d0%d\n", x, y);
        }
    }
    return 0;
}