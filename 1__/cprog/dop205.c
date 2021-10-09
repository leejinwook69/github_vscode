#include <stdio.h>

void Bubble(int arr[], int len) 
{
    int i, j;
    int temp;

    for(i = 0; i < len-1; i++) {
        for(j = 0; j < len-1-i; j++) {
            if(arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void) 
{
    int arr[7];
    int i;

    for(i = 0; i < 7; i++) {
        printf("input integer  %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    Bubble(arr, 7);

    for(i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}

