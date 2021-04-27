#include <stdio.h>

int main(void) 
{
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(double));

    char *a = "hello world";
    char *b = "hello world";

    printf("%d\n", &a);
    printf("%d\n", &b);
    return 0;

}