#include <stdio.h>

int arr[21];

int one=1;
int five=5;
int ten=10;
int sixteen=16;

int mo, mf, mt, ms, minnum;

int min(int a, int b)
{
    return a > b ? b : a;
}

int main(void)
{
    for(int i = 1; i<21; i++)
    {
        mo=999;
        mf=999;
        mt=999;
        ms=999;

        if(i-one >=0)
            mo=arr[i-one]+1;

        if(i-five >=0)
            mf=arr[i-five]+1;

        if(i-ten >=0)
            mt=arr[i-ten]+1;

        if(i-sixteen >=0)
            ms=arr[i-sixteen]+1;
        
        minnum = min(mo, mf);
        minnum = min(minnum, mt);
        arr[i] = min(minnum, ms);

    }

    for(int i = 0; i < 21; i++)
        printf("%d ", arr[i]);
}