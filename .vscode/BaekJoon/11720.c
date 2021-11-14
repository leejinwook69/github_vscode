#include <stdio.h>

char arr[100];
int n;
int sum;

int main(void)
{
    scanf("%d", &n);
    scanf("%s", arr);

    for(int i = 0; i<n; i++)
    {
        sum += arr[i]-48;
    }
    printf("%d", sum);
    
    return 0;
}