//이름을 입력 받고 / 맞는지 확인을 한 후 / 식별번호를 입력 받고 / 확인을 한다

//s나중에 배열관련해서 다시 고치기
#include <stdio.h>
#include <stdlib.h> // exit 함수를 위해 추가함

void Regi(int * ptr)
{
    printf("your name ? : ");
    scanf("%s", ptr);
}

void Pword(int * ptr)
{
    printf("password ? : ");
    scanf("%s", ptr);
}

int Check(int * ptr)
{
    int ck = 0;

   printf("input again to check : ");
   scanf("%s", &ck);

   if(*(ptr) == ck){
       return printf("correct !\n");
   } else{
       printf("wrong. try again");
       exit(0);
   }
}


int main(void)
{

    int r[100];
    int r1[100];
    int p[100];
    int p1[100];

    Regi(r);
    Check(r);

    Pword(p);
    Check(p);


    printf("register completed.\nenter your name : ");
    printf("%s / %s ", r1, r);

    scanf("%s", r1);

    printf("%s / %s ", r1, r);
    if(r1 == r){
        printf("enter password : ");
        scanf("%s", &p1);
        
        if(p1 == r){
        printf("access completed.\n welcome.");
        }else{
        printf("wrong password");
        exit(0);
        }
    }else{
        printf("no name matched");
        exit(0);
    }


   

    





    return 0;
}