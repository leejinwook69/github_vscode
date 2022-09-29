#include <stdio.h>
#include <stdlib.h>

#define MAXNUM 100000

int n = 0;

int sort(int list[], int trial)
{
}

int main(void)
{
    printf("input :: amount of element : \n");
    scanf("%d", &n);

    int* lista = malloc(sizeof(int)*n);
    
    for(int i = 0; i < n; i++)
    {
        printf("element %d : ", i+1);
        scanf("%d", &listb[i]);
    }

    for(int trial = 0; trial < n; trial++)
    {
        lista[trial] = sort(listb, trial);
    }
    
    printf("result :: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d  ", lista[i]);
    }
    return 0;
}