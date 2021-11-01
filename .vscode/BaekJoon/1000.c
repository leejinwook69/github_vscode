#include <stdio.h>

int main(void)
{
    int A, B, i,j;
    scanf("%d %d", &A, &B);
    i = 0.1*B;
    j = 0.01*B;
    printf("%d\n", A*(B-i*10));
    printf("%d\n", A*(i-j*10));
    printf("%d\n", A*j);
    printf("%d", A*B);

    return 0;
}