#include <stdio.h>

char arr[100];
int sum;

int main(void)
{
    scanf("%s", arr);

    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == 'c')
        {
            i++;
            if(arr[i] == '=')
            {
                sum += 1;
                continue;
            }else if(arr[i] == '-')
            {
                sum += 1;
                continue;
            }
            i--;
        }else if(arr[i] == 'd')
        {
            i++;
            if(arr[i] == 'z')
            {
                i++;
                if(arr[i] == '=')
                {
                    sum += 1;
                    continue;
                }
                i--;
            }else if(arr[i] == '-')
            {
                sum += 1;
                continue;
            }
            i--;
        }else if(arr[i] == 'l')
        {
            i++;
            if(arr[i] == 'j')
            {
                sum += 1;
                continue;
            }
            i--;
        }else if(arr[i] == 'n')
        {
            i++;
            if(arr[i] == 'j')
            {
                sum += 1;
                continue;
            }
            i--;
        }else if(arr[i] == 's')
        {
            i++;
            if(arr[i] == '=')
            {
                sum += 1;
                continue;
            }
            i--;
        }else if(arr[i] == 'z')
        {
            i++;
            if(arr[i] == '=')
            {
                sum += 1;
                continue;
            }
            i--;
        }
        sum++;
    }
    printf("%d", sum);

    return 0;
}
    