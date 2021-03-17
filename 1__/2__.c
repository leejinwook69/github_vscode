//이름을 입력 받고 / 맞는지 확인을 한 후 / 식별번호를 입력 받고 / 확인을 한다


#include <stdio.h>

void regi(int * ptr)
{
    printf("your name ? : ");
    scanf("%s", *(ptr));
  
}

void pword(int * ptr)
{
    printf("password ? : ");
    scanf("%s", *(ptr));
}

int main(void)
{
    
    int * reg;
    int r;
    int n=0;
    int name;
    int * pw;
    int p;

    int check;

//reg는 r의 주소값, pw는 p의 주소값
    
    reg = &r;
    pw = &p;

//이름 입력
    while(n != name)
    {
        regi(reg);
        printf("name : %s\n 1.yes 2.no\n", r);
        scanf("%d", &n);
    }

//pw입력
    while(n != p)
    {
        pword(pw);
        printf("password check : ");
        scanf("%s", &n);
    }

//확인
    for(check = 1; check != name;)
    {
        printf("success .\n\nname : ");
        scanf("%s", &check);
        if(check != name)
            printf("no name matched\n");
    }

    for(check = 1; check != p;)
    {
        printf("password : ");
        scanf("%s", &check);
        if(check != p)
            printf("wrong password\n");
    }

    return 0;

}