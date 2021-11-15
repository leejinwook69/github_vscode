#include <stdio.h>

char arr[1000000];
int arr2[26];
int max;
int maxalpha;

int main(void)
{
    scanf("%s", arr);

    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i]-97 < 0)
        {
            arr2[arr[i]-65]++;
        }
        if(arr[i]-97 >= 0)
        {
            arr2[arr[i]-97]++;
        }
    }

    for(int i = 0; i<26; i++)
    {
        if(max != 0 && max == arr2[i])
        {
            maxalpha = 63;
            break;
        }else if(arr2[i] > max)
        {
            max = arr2[i];
            maxalpha = i+65;
        }
    }
        printf("%c", maxalpha);
    
    return 0;
}