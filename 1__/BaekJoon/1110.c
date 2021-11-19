#include <stdio.h>

int main(void)
{
    int num, a;
    int rnum = 0;
    int cnt = 0;

    scanf("%d", &num);
    a = num;

    do
    {
        rnum = (num/10) + (num%10);
        num = 10*(num%10) + (rnum%10);
        cnt++;
    }while (num != a);

    printf("%d", cnt);

    return 0;
}