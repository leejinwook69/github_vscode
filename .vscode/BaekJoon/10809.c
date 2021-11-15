#include <stdio.h>

char arr[100];
int arr2[26];

int main(void)
{
    scanf("%s", arr);

    for(int i = 0; i<26; i++)
        arr2[i] = -1;
    
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr2[arr[i]-97] == -1)
            arr2[arr[i]-97] = i;
    }

    for(int i = 0; i<26; i++)
        printf("%d ", arr2[i]);
    
    return 0;
}