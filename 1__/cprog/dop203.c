#include <stdio.h>

int main(void) 
{
    int arr[10];
    int i, n;
    int j = 0;
    int k = 0;

    for (i = 0; i < 10; i++) {
        printf("input integer %d : ", i+1);
        scanf("%d", &n);

        if (n % 2 == 1) {
            arr[j] = n;
            j++;
        } else {
            arr[9-k] = n;
            k++;
        }
    }

    printf("arr : ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}