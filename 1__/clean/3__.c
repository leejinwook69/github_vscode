#include <stdio.h>

int main(void){

    int n;

    scanf("%d", &n);

    if(n == 5)
    printf("1 (5)");

    if(n == 3 | n == 5)
    printf("2 (3,6)");

    else if(n == 5)
    printf("3 (5)");


    return 0;
}