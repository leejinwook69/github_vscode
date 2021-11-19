#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    printf("max number : %d\n", RAND_MAX);
    for(i = 0; i<5; i++)
    {
        printf("rand num : %d\n", rand()%100);
    }
    return 0;
}