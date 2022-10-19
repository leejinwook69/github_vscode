#include <stdio.h>

int main(void)
{
    double p, pc, n, nc, check;
    check = 0;

    for(check; check != 1;){
    printf("input name : ");
    scanf("%s, &n");

    printf("your name is %s.\n 1.correct 2.wrong : ", &n);
    scanf("%lf", check);
    }
    check = 0;


    printf("input password : ");
    scanf("%s, &p");

    return 0;


}