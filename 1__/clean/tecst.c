#include <stdio.h>
#include <string.h>
int main(void)
{
    char * arr[] = {"hi", "hello"};

    printf("%d", strcmp(arr[1], "hello"));

    return 0;

}