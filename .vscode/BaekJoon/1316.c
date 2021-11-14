#include <stdio.h>

char arr[100];
int n;
int sum;

int main(void)
{
    scanf("%d", &n);

    for(int k = 0; k<n; k++)
    {
        int alpha[26] = {0, };
        scanf("%s", arr);
        for(int i = 0; arr[i] != '\0'; i++)
        {
            if(alpha[arr[i]-97] != 0)
            {
                sum--;
                break;
            }else
            {
                for(; arr[i] != '\0'; i++)
                {
                    alpha[arr[i]-97] += 1;
                    if(arr[i] != arr[i+1])
                        break;
                    
                }
            }
        }
        sum++;
    }
    printf("%d", sum);

    return 0;
}
    