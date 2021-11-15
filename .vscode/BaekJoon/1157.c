#include <stdio.h>

char arr[1000000];
int arr2[26];
int max;
int maxalpha;
int scount;

int main(void)
{
    scanf("%s", arr);

    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i]-97 < 0)
        {
            arr2[arr[i]-65]++;
        }else
        {
            arr2[arr[i]-97]++;
        }
    }


    for(int i = 0; i<26; i++)
    {
        if(arr2[i] > max)
        {
            max = arr2[i];
            maxalpha = i+65;
        }
    }
    for(int i = 0; i<26; i++)
    {
        if(arr2[i]==max)
            scount++;
        if(scount >=2)
        {
            maxalpha = 63;
            break;
        }
    }
        printf("%c", maxalpha);
    
    return 0;
}