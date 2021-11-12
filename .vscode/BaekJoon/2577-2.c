#include <stdio.h>

int main(void)
{
    int a, b, c;
    int arr[10] = {0, };
    int mul;
    int num;

    scanf("%d %d %d", &a, &b, &c);
    mul = a*b*c;

    while(mul >0)
    {
        num = mul%10;
        arr[num]++;
        mul /= 10;
    }

    for(int i = 0; i<10; i++)
    {
        printf("%d\n", arr[i]);
    }

}