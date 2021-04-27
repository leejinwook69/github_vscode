#include <stdio.h>

int main(void)
{
    int arr[16];
    int num = 0;
    int k = 0;
    printf("input decimal integer : ");
    scanf("%d", &num);    

    for(; num != 0; k++) {
        if(num % 2 == 0) {
            num /= 2;
            arr[k] = 0;
        } else {
            num--;
            num /= 2;
            arr[k] = 1;
        }
    }

    for(; k > 0; k--) {
        printf("%d ", arr[k-1]);
    }

    return 0;



}