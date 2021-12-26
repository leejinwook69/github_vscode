#include <stdio.h>

char arrA[10000], arrB[10000];
int arrC[10001];
int a, b, c;
int carry;

int main(void)
{
    scanf("%s %s", arrA, arrB);
    for(; arrA[a] != '\0'; a++);
    for(; arrB[b] != '\0'; b++);
    
    if(a > b)
    {
        for(int i = a; i>= 0; i--)
        {
            if(i - 1 >= 0)
            {
                arrC[i] = arrA[i-1] + arrB[b-1] - 96;
            }
            arrC[i] += carry;
            carry = 0;
            while(arrC[i] >= 10)
            {
                arrC[i] -=10;
                carry++;
            }

            if(b > 1)
            {
                b--;
            }else{
                arrB[b-1] = 48;
            }
        }
        if(arrC[0] == 0)
        {
            c++;
        }
        for(c; c <= a; c++)
        {
            printf("%d", arrC[c]);
        }    
        
    }else
    {
        for(int i = b; i>= 0; i--)
        {
            if(i - 1 >= 0)
            {
                arrC[i] = arrB[i-1] + arrA[a-1] - 96;
            }
            arrC[i] += carry;
            carry = 0;
            while(arrC[i] >= 10)
            {
                arrC[i] -=10;
                carry++;
            }

            if(a > 1)
            {
                a--;
            }else{
                arrA[a-1] = 48;
            }
        }   
        if(arrC[0] == 0)
        {
            c++;
        }
        for(c; c <= b; c++)
        {
            printf("%d", arrC[c]);
        }     
    }
    return 0;
}