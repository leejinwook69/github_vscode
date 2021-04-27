#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[50];
    int n;
    int i;
    int j = 0;

    printf("input string : ");
    scanf("%s", arr);

    n = strlen(arr);

    for (i = 0; i < n; i++) {
        if (arr[i] == arr[n-1-i]) {
            j++;
        }
    }

    if (j == n) {
        printf("recursive\n");
    } else {
        printf("not recursive\n");
    }


    return 0;
}