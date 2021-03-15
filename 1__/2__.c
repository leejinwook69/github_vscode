//이름을 입력 받고 / 맞는지 확인을 한 후 / 식별번호를 입력 받고 / 확인을 한다


#include <stdio.h>

void regi(int * ptr){
    printf("your name ? : ");
    scanf("%s", ptr);
}


int main(void){
    
    int *reg;
    int r;
    int name;
    int pw;

    reg = &r;

    regi(reg);

    printf("name : %s\n 1.yes 2.no\n", r);


    return 0;

}