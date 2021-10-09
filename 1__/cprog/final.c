#include <stdio.h>
#include <string.h>
    char a[100];
    char b[100];
    char c[100];
void S(char*argv[][100])
{
    printf("\n%s, %s\n", *argv[1], strstr("string", *argv[1]));



}
int main(void) {
    int arr[100];
    char* argv[3][100];


    scanf("%[^:]:%[^:]:%s", a, b, c);
    printf("\n=%s= =%s= =%s=\n", a, b, c);

 
    return 0;

}