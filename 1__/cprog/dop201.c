#include <stdio.h>

void oddnum(int arr[])
{
    printf("odd num : ");
    for (int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 1)
        printf("%d ", arr[i]);
    }
}

void evennum(int arr[]) 
{
    printf("even num : ");
    for (int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
        printf("%d ", arr[i]);
    }
}


int main(void) 
{
    int arr[10];
    int i;


    printf("input 10 integers :\n");
    for(i = 0; i < 10; i++) {
        printf("input %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    oddnum(arr);
    putchar('\n');
    evennum(arr);

    return 0;
}