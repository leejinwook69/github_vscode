#include <stdio.h>
#include <stdlib.h>

#define MAXNUM 10000

typedef struct
{
    char alpha;
    int num;
}aNn;
int main(void)
{
    aNn dheap[MAXNUM];
    
    int n;

    printf("input N : ");
    scanf("%d", &n);

    printf("input alphabet and number N times : ex) \'a 120\'");
    
    for(int i = 1; i <= n; i++ )
    {
       scanf("%c %d", &dheap[i].alpha, &dheap[i].num);
       printf("1");
    }

    for(int i = 1; i <= n; i++ )
    {
       printf("%c %d", dheap[i].alpha, dheap[i].num);
              printf("2");
    }

}