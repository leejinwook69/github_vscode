#include <stdio.h>
#include <string.h>

int main(void)
{
    int num = 5;
    int* pnum = &num;
    int** ppnum = &pnum;
    int*** pppnum = &ppnum;

    printf("%p %p %p %p\n", **pppnum, *ppnum, pnum, &num);
    printf("%d %d %d %d\n", ***pppnum, **ppnum, *pnum, num);

    return 0;
}